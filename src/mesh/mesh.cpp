#include "mesh.h"


void mesh::errorifloaded(void)
{
    if (isloaded)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: cannot perform the requested operation (mesh is already loaded)" << std::endl;
        log.error();
    }
}

void mesh::errorifnotloaded(void)
{
    if (not(isloaded))
    {
        logs log;
        log.msg() << "Error in 'mesh' object: cannot perform the requested operation (mesh is not loaded)" << std::endl;
        log.error();
    }
}

mesh::mesh(void)
{
    rawmeshptr = std::shared_ptr<rawmesh>(new rawmesh());
    universe::myrawmesh = rawmeshptr;
}

mesh::mesh(std::string filename, int verbosity)
{
    rawmeshptr = std::shared_ptr<rawmesh>(new rawmesh());
    universe::myrawmesh = rawmeshptr;
    rawmeshptr->load(filename, -1, -1, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

mesh::mesh(std::vector<std::tuple<double, double, double,bool>>& nodes, std::vector<std::vector<unsigned int>>& connections, bool rotation_enabled, int verbosity)
{
    rawmeshptr = std::shared_ptr<rawmesh>(new rawmesh());
    universe::myrawmesh = rawmeshptr;
    rawmeshptr->load(nodes, connections,-1,-1, rotation_enabled, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

mesh::mesh(std::string filename, int globalgeometryskin, int numoverlaplayers, int verbosity)
{
    rawmeshptr = std::shared_ptr<rawmesh>(new rawmesh());
    universe::myrawmesh = rawmeshptr;
    rawmeshptr->load(filename, globalgeometryskin, numoverlaplayers, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

mesh::mesh(bool mergeduplicates, std::vector<std::string> meshfiles, int verbosity)
{
    rawmeshptr = std::shared_ptr<rawmesh>(new rawmesh());
    universe::myrawmesh = rawmeshptr;
    rawmeshptr->load(mergeduplicates, meshfiles, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

mesh::mesh(std::vector<shape> inputshapes, int verbosity)
{
    rawmeshptr = std::shared_ptr<rawmesh>(new rawmesh());
    universe::myrawmesh = rawmeshptr;
    rawmeshptr->load(inputshapes, -1, -1, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

mesh::mesh(std::vector<shape> inputshapes, int globalgeometryskin, int numoverlaplayers, int verbosity)
{
    rawmeshptr = std::shared_ptr<rawmesh>(new rawmesh());
    universe::myrawmesh = rawmeshptr;
    rawmeshptr->load(inputshapes, globalgeometryskin, numoverlaplayers, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

void mesh::load(std::string name, int verbosity)
{
    load(name, -1, -1, verbosity);
}

void mesh::load(std::string name, int globalgeometryskin, int numoverlaplayers, int verbosity)
{
    errorifloaded();
    rawmeshptr->load(name, globalgeometryskin, numoverlaplayers, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

void mesh::load(bool mergeduplicates, std::vector<std::string> meshfiles, int verbosity)
{
    errorifloaded();
    rawmeshptr->load(mergeduplicates, meshfiles, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

void mesh::load(std::vector<shape> inputshapes, int verbosity)
{
    load(inputshapes, -1, -1, verbosity);
}

void mesh::load(std::vector<shape> inputshapes, int globalgeometryskin, int numoverlaplayers, int verbosity)
{
    errorifloaded();
    rawmeshptr->load(inputshapes, globalgeometryskin, numoverlaplayers, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

void mesh::load(std::vector<std::tuple<double, double, double,bool>>& nodes, std::vector<std::vector<unsigned int>>& elems, bool rotation_enabled, int verbosity)
{
    errorifloaded();
    rawmeshptr->load(nodes, elems, -1, -1, rotation_enabled, verbosity);
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
    isloaded = true;
}

void mesh::write(int physreg, std::string name)
{
    errorifnotloaded();
    
    rawmeshptr->gethadaptedpointer()->write(physreg, name);
}

void mesh::write(std::string name, std::vector<int> physregs, int option)
{
    errorifnotloaded();

    if (std::abs(option) != 1)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: write option must be -1 or +1" << std::endl;
        log.error();   
    }

    rawmeshptr->gethadaptedpointer()->write(name, physregs, option);
}

void mesh::setadaptivity(expression criterion, int lownumsplits, int highnumsplits)
{
    errorifnotloaded();
    
    if (not(criterion.isscalar()))
    {
        logs log;
        log.msg() << "Error in 'mesh' object: expected a scalar criterion for h-adaptivity" << std::endl;
        log.error();   
    }
    // The criterion cannot be multiharmonic:
    std::vector<int> alldisjregs(universe::getrawmesh()->getdisjointregions()->count());
    std::iota(alldisjregs.begin(), alldisjregs.end(), 0);
    if (not(criterion.isharmonicone(alldisjregs)))
    {
        logs log;
        log.msg() << "Error in 'mesh' object: cannot have a multiharmonic criterion for h-adaptivity" << std::endl;
        log.error();
    }
    
    if (lownumsplits < 0)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: in 'setadaptivity' cannot use negative minimum number of splits " << lownumsplits << std::endl;
        log.error();   
    }
    if (highnumsplits < lownumsplits)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: in 'setadaptivity' the minimum number of splits cannot be larger than the maximum" << std::endl;
        log.error();   
    }
    
    rawmeshptr->setadaptivity(criterion, lownumsplits, highnumsplits, -1);
}

void mesh::split(int n)
{
    errorifloaded();
    rawmeshptr->split(n);
}

void mesh::move(int physreg, expression u)
{
    errorifnotloaded();
    rawmeshptr->getphysicalregions()->errorundefined({physreg});
    rawmeshptr->gethadaptedpointer()->getphysicalregions()->errorundefined({physreg});
    
    if (rawmeshptr->getmeshnumber() == 0)
        rawmeshptr->move(physreg, u);
    rawmeshptr->gethadaptedpointer()->move(physreg, u);
}

void mesh::move(expression u)
{
    errorifnotloaded();
    if (rawmeshptr->getmeshnumber() == 0)
        rawmeshptr->move(-1, u);
    rawmeshptr->gethadaptedpointer()->move(-1, u);
}
        
void mesh::shift(int physreg, double x, double y, double z)
{
    errorifnotloaded();
    rawmeshptr->getphysicalregions()->errorundefined({physreg});
    rawmeshptr->gethadaptedpointer()->getphysicalregions()->errorundefined({physreg});
    
    rawmeshptr->shift(physreg, x, y, z);
    rawmeshptr->gethadaptedpointer()->shift(physreg, x, y, z);
}

void mesh::shift(double x, double y, double z)
{
    errorifnotloaded();
    rawmeshptr->shift(-1, x, y, z);
    rawmeshptr->gethadaptedpointer()->shift(-1, x, y, z);
}

void mesh::rotate(int physreg, double ax, double ay, double az)
{
    errorifnotloaded();
    rawmeshptr->getphysicalregions()->errorundefined({physreg});
    rawmeshptr->gethadaptedpointer()->getphysicalregions()->errorundefined({physreg});
    
    rawmeshptr->rotate(physreg, ax, ay, az);
    rawmeshptr->gethadaptedpointer()->rotate(physreg, ax, ay, az);
}

void mesh::rotate(double ax, double ay, double az)
{
    errorifnotloaded();
    rawmeshptr->rotate(-1, ax, ay, az);
    rawmeshptr->gethadaptedpointer()->rotate(-1, ax, ay, az);
}

void mesh::scale(int physreg, double x, double y, double z)
{
    errorifnotloaded();
    rawmeshptr->getphysicalregions()->errorundefined({physreg});
    rawmeshptr->gethadaptedpointer()->getphysicalregions()->errorundefined({physreg});
    
    rawmeshptr->scale(physreg, x, y, z);
    rawmeshptr->gethadaptedpointer()->scale(physreg, x, y, z);
}

void mesh::scale(double x, double y, double z)
{
    errorifnotloaded();
    rawmeshptr->scale(-1, x, y, z);
    rawmeshptr->gethadaptedpointer()->scale(-1, x, y, z);
}

int mesh::getdimension(void)
{
    errorifnotloaded();
    return rawmeshptr->getmeshdimension();
}

std::vector<double> mesh::getdimensions(void)
{
    errorifnotloaded();
    return rawmeshptr->getnodes()->getgeometrydimension();
}

std::vector<double> mesh::printdimensions(void)
{
    std::vector<double> dims = getdimensions();
    
    std::cout << "Mesh dimensions:" << std::endl;
    std::cout << "x: " << dims[0] << " m" << std::endl;
    std::cout << "y: " << dims[1] << " m" << std::endl;
    std::cout << "z: " << dims[2] << " m" << std::endl;
    
    return dims;
}

std::vector<int> mesh::getphysicalregionnumbers(int dim)
{
    errorifnotloaded();
    return rawmeshptr->getphysicalregionnumbers(dim);
}

void mesh::selectskin(int newphysreg, int physregtoskin)
{
    if (physregtoskin < 0)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: expected a positive physical region number" << std::endl;
        log.error();
    }

    errorifloaded();
    rawmeshptr->selectskin(newphysreg, physregtoskin);
}

void mesh::selectskin(int newphysreg)
{
    errorifloaded();
    rawmeshptr->selectskin(newphysreg, -1);
}

void mesh::selectbox(int newphysreg, int physregtobox, int selecteddim, std::vector<double> boxlimit)
{
    if (physregtobox < 0)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: expected a positive physical region number" << std::endl;
        log.error();
    }
    
    errorifloaded();
    rawmeshptr->selectbox(newphysreg, physregtobox, selecteddim, boxlimit);
}

void mesh::selectbox(int newphysreg, int selecteddim, std::vector<double> boxlimit)
{
    errorifloaded();
    rawmeshptr->selectbox(newphysreg, -1, selecteddim, boxlimit);
}

void mesh::selectsphere(int newphysreg, int physregtosphere, int selecteddim, std::vector<double> centercoords, double radius)
{
    if (physregtosphere < 0)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: expected a positive physical region number" << std::endl;
        log.error();
    }
    
    errorifloaded();
    rawmeshptr->selectsphere(newphysreg, physregtosphere, selecteddim, centercoords, radius);
}

void mesh::selectsphere(int newphysreg, int selecteddim, std::vector<double> centercoords, double radius)
{
    errorifloaded();
    rawmeshptr->selectsphere(newphysreg, -1, selecteddim, centercoords, radius);
}

void mesh::selectlayer(int newphysreg, int physregtoselectfrom, int physregtostartgrowth, int numlayers)
{
    if (physregtoselectfrom < 0)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: expected a positive physical region number" << std::endl;
        log.error();
    }
    
    errorifloaded();
    rawmeshptr->selectlayer(newphysreg, physregtoselectfrom, physregtostartgrowth, numlayers);
}

void mesh::selectlayer(int newphysreg, int physregtostartgrowth, int numlayers)
{
    errorifloaded();
    rawmeshptr->selectlayer(newphysreg, -1, physregtostartgrowth, numlayers);
}

void mesh::selectexclusion(int newphysreg, int physregtoexcludefrom, std::vector<int> physregstoexclude)
{
    if (physregtoexcludefrom < 0)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: expected a positive physical region number" << std::endl;
        log.error();
    }
    
    errorifloaded();
    rawmeshptr->selectexclusion(newphysreg, physregtoexcludefrom, physregstoexclude);
}

void mesh::selectexclusion(int newphysreg, std::vector<int> physregstoexclude)
{
    errorifloaded();
    rawmeshptr->selectexclusion(newphysreg, -1, physregstoexclude);
}

void mesh::selectanynode(int newphysreg, int physregtoselectfrom)
{
    if (physregtoselectfrom < 0)
    {
        logs log;
        log.msg() << "Error in 'mesh' object: expected a positive physical region number" << std::endl;
        log.error();
    }
    
    errorifloaded();
    rawmeshptr->selectanynode(newphysreg, physregtoselectfrom);
}

void mesh::selectanynode(int newphysreg)
{
    errorifloaded();
    rawmeshptr->selectanynode(newphysreg, -1);
}

void mesh::use(void)
{
    errorifnotloaded();
    universe::myrawmesh = rawmeshptr->gethadaptedpointer();
}


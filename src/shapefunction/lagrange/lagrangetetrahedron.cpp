#include "lagrangetetrahedron.h"


std::vector<double> lagrangetetrahedron::getnodecoordinates(int order)
{
     switch (order)
     {
          case 1:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0};
          case 2:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.5};
          case 3:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.33333333333333333333, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.66666666666666666667, 0.33333333333333333333, 0.0, 0.33333333333333333333, 0.66666666666666666667, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.33333333333333333333, 0.66666666666666666667, 0.0, 0.66666666666666666667, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.66666666666666666667, 0.66666666666666666667, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.33333333333333333333, 0.0, 0.33333333333333333333, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333};
          case 4:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.25, 0.0, 0.0, 0.5, 0.0, 0.0, 0.75, 0.0, 0.0, 0.75, 0.25, 0.0, 0.5, 0.5, 0.0, 0.25, 0.75, 0.0, 0.0, 0.75, 0.0, 0.0, 0.5, 0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.75, 0.0, 0.0, 0.5, 0.0, 0.0, 0.25, 0.0, 0.25, 0.75, 0.0, 0.5, 0.5, 0.0, 0.75, 0.25, 0.25, 0.0, 0.75, 0.5, 0.0, 0.5, 0.75, 0.0, 0.25, 0.25, 0.25, 0.0, 0.25, 0.5, 0.0, 0.5, 0.25, 0.0, 0.25, 0.0, 0.25, 0.5, 0.0, 0.25, 0.25, 0.0, 0.5, 0.0, 0.25, 0.25, 0.0, 0.25, 0.5, 0.0, 0.5, 0.25, 0.25, 0.25, 0.5, 0.5, 0.25, 0.25, 0.25, 0.5, 0.25, 0.25, 0.25, 0.25};
          case 5:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 0.4, 0.0, 0.0, 0.6, 0.0, 0.0, 0.8, 0.0, 0.0, 0.8, 0.2, 0.0, 0.6, 0.4, 0.0, 0.4, 0.6, 0.0, 0.2, 0.8, 0.0, 0.0, 0.8, 0.0, 0.0, 0.6, 0.0, 0.0, 0.4, 0.0, 0.0, 0.2, 0.0, 0.0, 0.0, 0.8, 0.0, 0.0, 0.6, 0.0, 0.0, 0.4, 0.0, 0.0, 0.2, 0.0, 0.2, 0.8, 0.0, 0.4, 0.6, 0.0, 0.6, 0.4, 0.0, 0.8, 0.2, 0.2, 0.0, 0.8, 0.4, 0.0, 0.6, 0.6, 0.0, 0.4, 0.8, 0.0, 0.2, 0.2, 0.2, 0.0, 0.2, 0.6, 0.0, 0.6, 0.2, 0.0, 0.2, 0.4, 0.0, 0.4, 0.4, 0.0, 0.4, 0.2, 0.0, 0.2, 0.0, 0.2, 0.6, 0.0, 0.2, 0.2, 0.0, 0.6, 0.4, 0.0, 0.2, 0.4, 0.0, 0.4, 0.2, 0.0, 0.4, 0.0, 0.2, 0.2, 0.0, 0.2, 0.6, 0.0, 0.6, 0.2, 0.0, 0.2, 0.4, 0.0, 0.4, 0.4, 0.0, 0.4, 0.2, 0.2, 0.2, 0.6, 0.6, 0.2, 0.2, 0.2, 0.6, 0.2, 0.4, 0.2, 0.4, 0.4, 0.4, 0.2, 0.2, 0.4, 0.4, 0.2, 0.2, 0.2, 0.4, 0.2, 0.2, 0.2, 0.4, 0.2, 0.2, 0.2, 0.4};
          case 6:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.16666666666666666667, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.5, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.83333333333333333333, 0.0, 0.0, 0.83333333333333333333, 0.16666666666666666667, 0.0, 0.66666666666666666667, 0.33333333333333333333, 0.0, 0.5, 0.5, 0.0, 0.33333333333333333333, 0.66666666666666666667, 0.0, 0.16666666666666666667, 0.83333333333333333333, 0.0, 0.0, 0.83333333333333333333, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.5, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.16666666666666666667, 0.0, 0.0, 0.0, 0.83333333333333333333, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.5, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.16666666666666666667, 0.0, 0.16666666666666666667, 0.83333333333333333333, 0.0, 0.33333333333333333333, 0.66666666666666666667, 0.0, 0.5, 0.5, 0.0, 0.66666666666666666667, 0.33333333333333333333, 0.0, 0.83333333333333333333, 0.16666666666666666667, 0.16666666666666666667, 0.0, 0.83333333333333333333, 0.33333333333333333333, 0.0, 0.66666666666666666667, 0.5, 0.0, 0.5, 0.66666666666666666667, 0.0, 0.33333333333333333333, 0.83333333333333333333, 0.0, 0.16666666666666666667, 0.16666666666666666667, 0.16666666666666666667, 0.0, 0.16666666666666666667, 0.66666666666666666667, 0.0, 0.66666666666666666667, 0.16666666666666666667, 0.0, 0.16666666666666666667, 0.33333333333333333333, 0.0, 0.16666666666666666667, 0.5, 0.0, 0.33333333333333333333, 0.5, 0.0, 0.5, 0.33333333333333333333, 0.0, 0.5, 0.16666666666666666667, 0.0, 0.33333333333333333333, 0.16666666666666666667, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.16666666666666666667, 0.0, 0.16666666666666666667, 0.66666666666666666667, 0.0, 0.16666666666666666667, 0.16666666666666666667, 0.0, 0.66666666666666666667, 0.33333333333333333333, 0.0, 0.16666666666666666667, 0.5, 0.0, 0.16666666666666666667, 0.5, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.5, 0.16666666666666666667, 0.0, 0.5, 0.16666666666666666667, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.33333333333333333333, 0.0, 0.16666666666666666667, 0.16666666666666666667, 0.0, 0.16666666666666666667, 0.66666666666666666667, 0.0, 0.66666666666666666667, 0.16666666666666666667, 0.0, 0.16666666666666666667, 0.33333333333333333333, 0.0, 0.16666666666666666667, 0.5, 0.0, 0.33333333333333333333, 0.5, 0.0, 0.5, 0.33333333333333333333, 0.0, 0.5, 0.16666666666666666667, 0.0, 0.33333333333333333333, 0.16666666666666666667, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.16666666666666666667, 0.16666666666666666667, 0.66666666666666666667, 0.66666666666666666667, 0.16666666666666666667, 0.16666666666666666667, 0.16666666666666666667, 0.66666666666666666667, 0.16666666666666666667, 0.33333333333333333333, 0.16666666666666666667, 0.5, 0.5, 0.16666666666666666667, 0.33333333333333333333, 0.5, 0.33333333333333333333, 0.16666666666666666667, 0.33333333333333333333, 0.5, 0.16666666666666666667, 0.16666666666666666667, 0.5, 0.33333333333333333333, 0.16666666666666666667, 0.33333333333333333333, 0.5, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333, 0.16666666666666666667, 0.16666666666666666667, 0.16666666666666666667, 0.5, 0.16666666666666666667, 0.16666666666666666667, 0.16666666666666666667, 0.5, 0.16666666666666666667, 0.16666666666666666667, 0.16666666666666666667, 0.5, 0.33333333333333333333, 0.16666666666666666667, 0.16666666666666666667, 0.33333333333333333333, 0.33333333333333333333, 0.16666666666666666667, 0.16666666666666666667, 0.33333333333333333333, 0.16666666666666666667, 0.16666666666666666667, 0.16666666666666666667, 0.33333333333333333333, 0.16666666666666666667, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333, 0.16666666666666666667, 0.33333333333333333333};
          case 7:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.14285714285714285714, 0.0, 0.0, 0.28571428571428571429, 0.0, 0.0, 0.42857142857142857143, 0.0, 0.0, 0.57142857142857142857, 0.0, 0.0, 0.71428571428571428571, 0.0, 0.0, 0.85714285714285714286, 0.0, 0.0, 0.85714285714285714286, 0.14285714285714285714, 0.0, 0.71428571428571428571, 0.28571428571428571429, 0.0, 0.57142857142857142857, 0.42857142857142857143, 0.0, 0.42857142857142857143, 0.57142857142857142857, 0.0, 0.28571428571428571429, 0.71428571428571428571, 0.0, 0.14285714285714285714, 0.85714285714285714286, 0.0, 0.0, 0.85714285714285714286, 0.0, 0.0, 0.71428571428571428571, 0.0, 0.0, 0.57142857142857142857, 0.0, 0.0, 0.42857142857142857143, 0.0, 0.0, 0.28571428571428571429, 0.0, 0.0, 0.14285714285714285714, 0.0, 0.0, 0.0, 0.85714285714285714286, 0.0, 0.0, 0.71428571428571428571, 0.0, 0.0, 0.57142857142857142857, 0.0, 0.0, 0.42857142857142857143, 0.0, 0.0, 0.28571428571428571429, 0.0, 0.0, 0.14285714285714285714, 0.0, 0.14285714285714285714, 0.85714285714285714286, 0.0, 0.28571428571428571429, 0.71428571428571428571, 0.0, 0.42857142857142857143, 0.57142857142857142857, 0.0, 0.57142857142857142857, 0.42857142857142857143, 0.0, 0.71428571428571428571, 0.28571428571428571429, 0.0, 0.85714285714285714286, 0.14285714285714285714, 0.14285714285714285714, 0.0, 0.85714285714285714286, 0.28571428571428571429, 0.0, 0.71428571428571428571, 0.42857142857142857143, 0.0, 0.57142857142857142857, 0.57142857142857142857, 0.0, 0.42857142857142857143, 0.71428571428571428571, 0.0, 0.28571428571428571429, 0.85714285714285714286, 0.0, 0.14285714285714285714, 0.14285714285714285714, 0.14285714285714285714, 0.0, 0.14285714285714285714, 0.71428571428571428571, 0.0, 0.71428571428571428571, 0.14285714285714285714, 0.0, 0.14285714285714285714, 0.28571428571428571429, 0.0, 0.14285714285714285714, 0.42857142857142857143, 0.0, 0.14285714285714285714, 0.57142857142857142857, 0.0, 0.28571428571428571429, 0.57142857142857142857, 0.0, 0.42857142857142857143, 0.42857142857142857143, 0.0, 0.57142857142857142857, 0.28571428571428571429, 0.0, 0.57142857142857142857, 0.14285714285714285714, 0.0, 0.42857142857142857143, 0.14285714285714285714, 0.0, 0.28571428571428571429, 0.14285714285714285714, 0.0, 0.28571428571428571429, 0.28571428571428571429, 0.0, 0.28571428571428571429, 0.42857142857142857143, 0.0, 0.42857142857142857143, 0.28571428571428571429, 0.0, 0.14285714285714285714, 0.0, 0.14285714285714285714, 0.71428571428571428571, 0.0, 0.14285714285714285714, 0.14285714285714285714, 0.0, 0.71428571428571428571, 0.28571428571428571429, 0.0, 0.14285714285714285714, 0.42857142857142857143, 0.0, 0.14285714285714285714, 0.57142857142857142857, 0.0, 0.14285714285714285714, 0.57142857142857142857, 0.0, 0.28571428571428571429, 0.42857142857142857143, 0.0, 0.42857142857142857143, 0.28571428571428571429, 0.0, 0.57142857142857142857, 0.14285714285714285714, 0.0, 0.57142857142857142857, 0.14285714285714285714, 0.0, 0.42857142857142857143, 0.14285714285714285714, 0.0, 0.28571428571428571429, 0.28571428571428571429, 0.0, 0.28571428571428571429, 0.42857142857142857143, 0.0, 0.28571428571428571429, 0.28571428571428571429, 0.0, 0.42857142857142857143, 0.0, 0.14285714285714285714, 0.14285714285714285714, 0.0, 0.14285714285714285714, 0.71428571428571428571, 0.0, 0.71428571428571428571, 0.14285714285714285714, 0.0, 0.14285714285714285714, 0.28571428571428571429, 0.0, 0.14285714285714285714, 0.42857142857142857143, 0.0, 0.14285714285714285714, 0.57142857142857142857, 0.0, 0.28571428571428571429, 0.57142857142857142857, 0.0, 0.42857142857142857143, 0.42857142857142857143, 0.0, 0.57142857142857142857, 0.28571428571428571429, 0.0, 0.57142857142857142857, 0.14285714285714285714, 0.0, 0.42857142857142857143, 0.14285714285714285714, 0.0, 0.28571428571428571429, 0.14285714285714285714, 0.0, 0.28571428571428571429, 0.28571428571428571429, 0.0, 0.28571428571428571429, 0.42857142857142857143, 0.0, 0.42857142857142857143, 0.28571428571428571429, 0.14285714285714285714, 0.14285714285714285714, 0.71428571428571428571, 0.71428571428571428571, 0.14285714285714285714, 0.14285714285714285714, 0.14285714285714285714, 0.71428571428571428571, 0.14285714285714285714, 0.28571428571428571429, 0.14285714285714285714, 0.57142857142857142857, 0.42857142857142857143, 0.14285714285714285714, 0.42857142857142857143, 0.57142857142857142857, 0.14285714285714285714, 0.28571428571428571429, 0.57142857142857142857, 0.28571428571428571429, 0.14285714285714285714, 0.42857142857142857143, 0.42857142857142857143, 0.14285714285714285714, 0.28571428571428571429, 0.57142857142857142857, 0.14285714285714285714, 0.14285714285714285714, 0.57142857142857142857, 0.28571428571428571429, 0.14285714285714285714, 0.42857142857142857143, 0.42857142857142857143, 0.14285714285714285714, 0.28571428571428571429, 0.57142857142857142857, 0.28571428571428571429, 0.28571428571428571429, 0.42857142857142857143, 0.42857142857142857143, 0.28571428571428571429, 0.28571428571428571429, 0.28571428571428571429, 0.42857142857142857143, 0.28571428571428571429, 0.14285714285714285714, 0.14285714285714285714, 0.14285714285714285714, 0.57142857142857142857, 0.14285714285714285714, 0.14285714285714285714, 0.14285714285714285714, 0.57142857142857142857, 0.14285714285714285714, 0.14285714285714285714, 0.14285714285714285714, 0.57142857142857142857, 0.28571428571428571429, 0.14285714285714285714, 0.14285714285714285714, 0.42857142857142857143, 0.14285714285714285714, 0.14285714285714285714, 0.42857142857142857143, 0.28571428571428571429, 0.14285714285714285714, 0.28571428571428571429, 0.42857142857142857143, 0.14285714285714285714, 0.14285714285714285714, 0.42857142857142857143, 0.14285714285714285714, 0.14285714285714285714, 0.28571428571428571429, 0.14285714285714285714, 0.14285714285714285714, 0.14285714285714285714, 0.42857142857142857143, 0.14285714285714285714, 0.14285714285714285714, 0.28571428571428571429, 0.14285714285714285714, 0.28571428571428571429, 0.42857142857142857143, 0.14285714285714285714, 0.42857142857142857143, 0.28571428571428571429, 0.28571428571428571429, 0.14285714285714285714, 0.42857142857142857143, 0.42857142857142857143, 0.14285714285714285714, 0.28571428571428571429, 0.28571428571428571429, 0.28571428571428571429, 0.14285714285714285714, 0.28571428571428571429, 0.14285714285714285714, 0.28571428571428571429, 0.14285714285714285714, 0.28571428571428571429, 0.28571428571428571429, 0.28571428571428571429, 0.28571428571428571429, 0.28571428571428571429};
          case 8:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.125, 0.0, 0.0, 0.25, 0.0, 0.0, 0.375, 0.0, 0.0, 0.5, 0.0, 0.0, 0.625, 0.0, 0.0, 0.75, 0.0, 0.0, 0.875, 0.0, 0.0, 0.875, 0.125, 0.0, 0.75, 0.25, 0.0, 0.625, 0.375, 0.0, 0.5, 0.5, 0.0, 0.375, 0.625, 0.0, 0.25, 0.75, 0.0, 0.125, 0.875, 0.0, 0.0, 0.875, 0.0, 0.0, 0.75, 0.0, 0.0, 0.625, 0.0, 0.0, 0.5, 0.0, 0.0, 0.375, 0.0, 0.0, 0.25, 0.0, 0.0, 0.125, 0.0, 0.0, 0.0, 0.875, 0.0, 0.0, 0.75, 0.0, 0.0, 0.625, 0.0, 0.0, 0.5, 0.0, 0.0, 0.375, 0.0, 0.0, 0.25, 0.0, 0.0, 0.125, 0.0, 0.125, 0.875, 0.0, 0.25, 0.75, 0.0, 0.375, 0.625, 0.0, 0.5, 0.5, 0.0, 0.625, 0.375, 0.0, 0.75, 0.25, 0.0, 0.875, 0.125, 0.125, 0.0, 0.875, 0.25, 0.0, 0.75, 0.375, 0.0, 0.625, 0.5, 0.0, 0.5, 0.625, 0.0, 0.375, 0.75, 0.0, 0.25, 0.875, 0.0, 0.125, 0.125, 0.125, 0.0, 0.125, 0.75, 0.0, 0.75, 0.125, 0.0, 0.125, 0.25, 0.0, 0.125, 0.375, 0.0, 0.125, 0.5, 0.0, 0.125, 0.625, 0.0, 0.25, 0.625, 0.0, 0.375, 0.5, 0.0, 0.5, 0.375, 0.0, 0.625, 0.25, 0.0, 0.625, 0.125, 0.0, 0.5, 0.125, 0.0, 0.375, 0.125, 0.0, 0.25, 0.125, 0.0, 0.25, 0.25, 0.0, 0.25, 0.5, 0.0, 0.5, 0.25, 0.0, 0.25, 0.375, 0.0, 0.375, 0.375, 0.0, 0.375, 0.25, 0.0, 0.125, 0.0, 0.125, 0.75, 0.0, 0.125, 0.125, 0.0, 0.75, 0.25, 0.0, 0.125, 0.375, 0.0, 0.125, 0.5, 0.0, 0.125, 0.625, 0.0, 0.125, 0.625, 0.0, 0.25, 0.5, 0.0, 0.375, 0.375, 0.0, 0.5, 0.25, 0.0, 0.625, 0.125, 0.0, 0.625, 0.125, 0.0, 0.5, 0.125, 0.0, 0.375, 0.125, 0.0, 0.25, 0.25, 0.0, 0.25, 0.5, 0.0, 0.25, 0.25, 0.0, 0.5, 0.375, 0.0, 0.25, 0.375, 0.0, 0.375, 0.25, 0.0, 0.375, 0.0, 0.125, 0.125, 0.0, 0.125, 0.75, 0.0, 0.75, 0.125, 0.0, 0.125, 0.25, 0.0, 0.125, 0.375, 0.0, 0.125, 0.5, 0.0, 0.125, 0.625, 0.0, 0.25, 0.625, 0.0, 0.375, 0.5, 0.0, 0.5, 0.375, 0.0, 0.625, 0.25, 0.0, 0.625, 0.125, 0.0, 0.5, 0.125, 0.0, 0.375, 0.125, 0.0, 0.25, 0.125, 0.0, 0.25, 0.25, 0.0, 0.25, 0.5, 0.0, 0.5, 0.25, 0.0, 0.25, 0.375, 0.0, 0.375, 0.375, 0.0, 0.375, 0.25, 0.125, 0.125, 0.75, 0.75, 0.125, 0.125, 0.125, 0.75, 0.125, 0.25, 0.125, 0.625, 0.375, 0.125, 0.5, 0.5, 0.125, 0.375, 0.625, 0.125, 0.25, 0.625, 0.25, 0.125, 0.5, 0.375, 0.125, 0.375, 0.5, 0.125, 0.25, 0.625, 0.125, 0.125, 0.625, 0.25, 0.125, 0.5, 0.375, 0.125, 0.375, 0.5, 0.125, 0.25, 0.625, 0.25, 0.25, 0.5, 0.5, 0.25, 0.25, 0.25, 0.5, 0.25, 0.375, 0.25, 0.375, 0.375, 0.375, 0.25, 0.25, 0.375, 0.375, 0.125, 0.125, 0.125, 0.625, 0.125, 0.125, 0.125, 0.625, 0.125, 0.125, 0.125, 0.625, 0.25, 0.125, 0.125, 0.375, 0.125, 0.125, 0.5, 0.125, 0.125, 0.5, 0.25, 0.125, 0.375, 0.375, 0.125, 0.25, 0.5, 0.125, 0.125, 0.5, 0.125, 0.125, 0.375, 0.125, 0.125, 0.25, 0.125, 0.125, 0.125, 0.5, 0.125, 0.125, 0.375, 0.125, 0.125, 0.25, 0.125, 0.25, 0.5, 0.125, 0.375, 0.375, 0.125, 0.5, 0.25, 0.25, 0.125, 0.5, 0.375, 0.125, 0.375, 0.5, 0.125, 0.25, 0.25, 0.25, 0.125, 0.25, 0.375, 0.125, 0.375, 0.25, 0.125, 0.25, 0.125, 0.25, 0.375, 0.125, 0.25, 0.25, 0.125, 0.375, 0.125, 0.25, 0.25, 0.125, 0.25, 0.375, 0.125, 0.375, 0.25, 0.25, 0.25, 0.375, 0.375, 0.25, 0.25, 0.25, 0.375, 0.25, 0.25, 0.25, 0.25};
          case 9:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.11111111111111111111, 0.0, 0.0, 0.22222222222222222222, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.44444444444444444444, 0.0, 0.0, 0.55555555555555555556, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.77777777777777777778, 0.0, 0.0, 0.88888888888888888889, 0.0, 0.0, 0.88888888888888888889, 0.11111111111111111111, 0.0, 0.77777777777777777778, 0.22222222222222222222, 0.0, 0.66666666666666666667, 0.33333333333333333333, 0.0, 0.55555555555555555556, 0.44444444444444444444, 0.0, 0.44444444444444444444, 0.55555555555555555556, 0.0, 0.33333333333333333333, 0.66666666666666666667, 0.0, 0.22222222222222222222, 0.77777777777777777778, 0.0, 0.11111111111111111111, 0.88888888888888888889, 0.0, 0.0, 0.88888888888888888889, 0.0, 0.0, 0.77777777777777777778, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.55555555555555555556, 0.0, 0.0, 0.44444444444444444444, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.22222222222222222222, 0.0, 0.0, 0.11111111111111111111, 0.0, 0.0, 0.0, 0.88888888888888888889, 0.0, 0.0, 0.77777777777777777778, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0, 0.55555555555555555556, 0.0, 0.0, 0.44444444444444444444, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.22222222222222222222, 0.0, 0.0, 0.11111111111111111111, 0.0, 0.11111111111111111111, 0.88888888888888888889, 0.0, 0.22222222222222222222, 0.77777777777777777778, 0.0, 0.33333333333333333333, 0.66666666666666666667, 0.0, 0.44444444444444444444, 0.55555555555555555556, 0.0, 0.55555555555555555556, 0.44444444444444444444, 0.0, 0.66666666666666666667, 0.33333333333333333333, 0.0, 0.77777777777777777778, 0.22222222222222222222, 0.0, 0.88888888888888888889, 0.11111111111111111111, 0.11111111111111111111, 0.0, 0.88888888888888888889, 0.22222222222222222222, 0.0, 0.77777777777777777778, 0.33333333333333333333, 0.0, 0.66666666666666666667, 0.44444444444444444444, 0.0, 0.55555555555555555556, 0.55555555555555555556, 0.0, 0.44444444444444444444, 0.66666666666666666667, 0.0, 0.33333333333333333333, 0.77777777777777777778, 0.0, 0.22222222222222222222, 0.88888888888888888889, 0.0, 0.11111111111111111111, 0.11111111111111111111, 0.11111111111111111111, 0.0, 0.11111111111111111111, 0.77777777777777777778, 0.0, 0.77777777777777777778, 0.11111111111111111111, 0.0, 0.11111111111111111111, 0.22222222222222222222, 0.0, 0.11111111111111111111, 0.33333333333333333333, 0.0, 0.11111111111111111111, 0.44444444444444444444, 0.0, 0.11111111111111111111, 0.55555555555555555556, 0.0, 0.11111111111111111111, 0.66666666666666666667, 0.0, 0.22222222222222222222, 0.66666666666666666667, 0.0, 0.33333333333333333333, 0.55555555555555555556, 0.0, 0.44444444444444444444, 0.44444444444444444444, 0.0, 0.55555555555555555556, 0.33333333333333333333, 0.0, 0.66666666666666666667, 0.22222222222222222222, 0.0, 0.66666666666666666667, 0.11111111111111111111, 0.0, 0.55555555555555555556, 0.11111111111111111111, 0.0, 0.44444444444444444444, 0.11111111111111111111, 0.0, 0.33333333333333333333, 0.11111111111111111111, 0.0, 0.22222222222222222222, 0.11111111111111111111, 0.0, 0.22222222222222222222, 0.22222222222222222222, 0.0, 0.22222222222222222222, 0.55555555555555555556, 0.0, 0.55555555555555555556, 0.22222222222222222222, 0.0, 0.22222222222222222222, 0.33333333333333333333, 0.0, 0.22222222222222222222, 0.44444444444444444444, 0.0, 0.33333333333333333333, 0.44444444444444444444, 0.0, 0.44444444444444444444, 0.33333333333333333333, 0.0, 0.44444444444444444444, 0.22222222222222222222, 0.0, 0.33333333333333333333, 0.22222222222222222222, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.11111111111111111111, 0.0, 0.11111111111111111111, 0.77777777777777777778, 0.0, 0.11111111111111111111, 0.11111111111111111111, 0.0, 0.77777777777777777778, 0.22222222222222222222, 0.0, 0.11111111111111111111, 0.33333333333333333333, 0.0, 0.11111111111111111111, 0.44444444444444444444, 0.0, 0.11111111111111111111, 0.55555555555555555556, 0.0, 0.11111111111111111111, 0.66666666666666666667, 0.0, 0.11111111111111111111, 0.66666666666666666667, 0.0, 0.22222222222222222222, 0.55555555555555555556, 0.0, 0.33333333333333333333, 0.44444444444444444444, 0.0, 0.44444444444444444444, 0.33333333333333333333, 0.0, 0.55555555555555555556, 0.22222222222222222222, 0.0, 0.66666666666666666667, 0.11111111111111111111, 0.0, 0.66666666666666666667, 0.11111111111111111111, 0.0, 0.55555555555555555556, 0.11111111111111111111, 0.0, 0.44444444444444444444, 0.11111111111111111111, 0.0, 0.33333333333333333333, 0.11111111111111111111, 0.0, 0.22222222222222222222, 0.22222222222222222222, 0.0, 0.22222222222222222222, 0.55555555555555555556, 0.0, 0.22222222222222222222, 0.22222222222222222222, 0.0, 0.55555555555555555556, 0.33333333333333333333, 0.0, 0.22222222222222222222, 0.44444444444444444444, 0.0, 0.22222222222222222222, 0.44444444444444444444, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.44444444444444444444, 0.22222222222222222222, 0.0, 0.44444444444444444444, 0.22222222222222222222, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.0, 0.33333333333333333333, 0.0, 0.11111111111111111111, 0.11111111111111111111, 0.0, 0.11111111111111111111, 0.77777777777777777778, 0.0, 0.77777777777777777778, 0.11111111111111111111, 0.0, 0.11111111111111111111, 0.22222222222222222222, 0.0, 0.11111111111111111111, 0.33333333333333333333, 0.0, 0.11111111111111111111, 0.44444444444444444444, 0.0, 0.11111111111111111111, 0.55555555555555555556, 0.0, 0.11111111111111111111, 0.66666666666666666667, 0.0, 0.22222222222222222222, 0.66666666666666666667, 0.0, 0.33333333333333333333, 0.55555555555555555556, 0.0, 0.44444444444444444444, 0.44444444444444444444, 0.0, 0.55555555555555555556, 0.33333333333333333333, 0.0, 0.66666666666666666667, 0.22222222222222222222, 0.0, 0.66666666666666666667, 0.11111111111111111111, 0.0, 0.55555555555555555556, 0.11111111111111111111, 0.0, 0.44444444444444444444, 0.11111111111111111111, 0.0, 0.33333333333333333333, 0.11111111111111111111, 0.0, 0.22222222222222222222, 0.11111111111111111111, 0.0, 0.22222222222222222222, 0.22222222222222222222, 0.0, 0.22222222222222222222, 0.55555555555555555556, 0.0, 0.55555555555555555556, 0.22222222222222222222, 0.0, 0.22222222222222222222, 0.33333333333333333333, 0.0, 0.22222222222222222222, 0.44444444444444444444, 0.0, 0.33333333333333333333, 0.44444444444444444444, 0.0, 0.44444444444444444444, 0.33333333333333333333, 0.0, 0.44444444444444444444, 0.22222222222222222222, 0.0, 0.33333333333333333333, 0.22222222222222222222, 0.0, 0.33333333333333333333, 0.33333333333333333333, 0.11111111111111111111, 0.11111111111111111111, 0.77777777777777777778, 0.77777777777777777778, 0.11111111111111111111, 0.11111111111111111111, 0.11111111111111111111, 0.77777777777777777778, 0.11111111111111111111, 0.22222222222222222222, 0.11111111111111111111, 0.66666666666666666667, 0.33333333333333333333, 0.11111111111111111111, 0.55555555555555555556, 0.44444444444444444444, 0.11111111111111111111, 0.44444444444444444444, 0.55555555555555555556, 0.11111111111111111111, 0.33333333333333333333, 0.66666666666666666667, 0.11111111111111111111, 0.22222222222222222222, 0.66666666666666666667, 0.22222222222222222222, 0.11111111111111111111, 0.55555555555555555556, 0.33333333333333333333, 0.11111111111111111111, 0.44444444444444444444, 0.44444444444444444444, 0.11111111111111111111, 0.33333333333333333333, 0.55555555555555555556, 0.11111111111111111111, 0.22222222222222222222, 0.66666666666666666667, 0.11111111111111111111, 0.11111111111111111111, 0.66666666666666666667, 0.22222222222222222222, 0.11111111111111111111, 0.55555555555555555556, 0.33333333333333333333, 0.11111111111111111111, 0.44444444444444444444, 0.44444444444444444444, 0.11111111111111111111, 0.33333333333333333333, 0.55555555555555555556, 0.11111111111111111111, 0.22222222222222222222, 0.66666666666666666667, 0.22222222222222222222, 0.22222222222222222222, 0.55555555555555555556, 0.55555555555555555556, 0.22222222222222222222, 0.22222222222222222222, 0.22222222222222222222, 0.55555555555555555556, 0.22222222222222222222, 0.33333333333333333333, 0.22222222222222222222, 0.44444444444444444444, 0.44444444444444444444, 0.22222222222222222222, 0.33333333333333333333, 0.44444444444444444444, 0.33333333333333333333, 0.22222222222222222222, 0.33333333333333333333, 0.44444444444444444444, 0.22222222222222222222, 0.22222222222222222222, 0.44444444444444444444, 0.33333333333333333333, 0.22222222222222222222, 0.33333333333333333333, 0.44444444444444444444, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333, 0.11111111111111111111, 0.11111111111111111111, 0.11111111111111111111, 0.66666666666666666667, 0.11111111111111111111, 0.11111111111111111111, 0.11111111111111111111, 0.66666666666666666667, 0.11111111111111111111, 0.11111111111111111111, 0.11111111111111111111, 0.66666666666666666667, 0.22222222222222222222, 0.11111111111111111111, 0.11111111111111111111, 0.33333333333333333333, 0.11111111111111111111, 0.11111111111111111111, 0.44444444444444444444, 0.11111111111111111111, 0.11111111111111111111, 0.55555555555555555556, 0.11111111111111111111, 0.11111111111111111111, 0.55555555555555555556, 0.22222222222222222222, 0.11111111111111111111, 0.44444444444444444444, 0.33333333333333333333, 0.11111111111111111111, 0.33333333333333333333, 0.44444444444444444444, 0.11111111111111111111, 0.22222222222222222222, 0.55555555555555555556, 0.11111111111111111111, 0.11111111111111111111, 0.55555555555555555556, 0.11111111111111111111, 0.11111111111111111111, 0.44444444444444444444, 0.11111111111111111111, 0.11111111111111111111, 0.33333333333333333333, 0.11111111111111111111, 0.11111111111111111111, 0.22222222222222222222, 0.11111111111111111111, 0.11111111111111111111, 0.11111111111111111111, 0.55555555555555555556, 0.11111111111111111111, 0.11111111111111111111, 0.44444444444444444444, 0.11111111111111111111, 0.11111111111111111111, 0.33333333333333333333, 0.11111111111111111111, 0.11111111111111111111, 0.22222222222222222222, 0.11111111111111111111, 0.22222222222222222222, 0.55555555555555555556, 0.11111111111111111111, 0.33333333333333333333, 0.44444444444444444444, 0.11111111111111111111, 0.44444444444444444444, 0.33333333333333333333, 0.11111111111111111111, 0.55555555555555555556, 0.22222222222222222222, 0.22222222222222222222, 0.11111111111111111111, 0.55555555555555555556, 0.33333333333333333333, 0.11111111111111111111, 0.44444444444444444444, 0.44444444444444444444, 0.11111111111111111111, 0.33333333333333333333, 0.55555555555555555556, 0.11111111111111111111, 0.22222222222222222222, 0.22222222222222222222, 0.22222222222222222222, 0.11111111111111111111, 0.22222222222222222222, 0.44444444444444444444, 0.11111111111111111111, 0.44444444444444444444, 0.22222222222222222222, 0.11111111111111111111, 0.22222222222222222222, 0.33333333333333333333, 0.11111111111111111111, 0.33333333333333333333, 0.33333333333333333333, 0.11111111111111111111, 0.33333333333333333333, 0.22222222222222222222, 0.11111111111111111111, 0.22222222222222222222, 0.11111111111111111111, 0.22222222222222222222, 0.44444444444444444444, 0.11111111111111111111, 0.22222222222222222222, 0.22222222222222222222, 0.11111111111111111111, 0.44444444444444444444, 0.33333333333333333333, 0.11111111111111111111, 0.22222222222222222222, 0.33333333333333333333, 0.11111111111111111111, 0.33333333333333333333, 0.22222222222222222222, 0.11111111111111111111, 0.33333333333333333333, 0.11111111111111111111, 0.22222222222222222222, 0.22222222222222222222, 0.11111111111111111111, 0.22222222222222222222, 0.44444444444444444444, 0.11111111111111111111, 0.44444444444444444444, 0.22222222222222222222, 0.11111111111111111111, 0.22222222222222222222, 0.33333333333333333333, 0.11111111111111111111, 0.33333333333333333333, 0.33333333333333333333, 0.11111111111111111111, 0.33333333333333333333, 0.22222222222222222222, 0.22222222222222222222, 0.22222222222222222222, 0.44444444444444444444, 0.44444444444444444444, 0.22222222222222222222, 0.22222222222222222222, 0.22222222222222222222, 0.44444444444444444444, 0.22222222222222222222, 0.33333333333333333333, 0.22222222222222222222, 0.33333333333333333333, 0.33333333333333333333, 0.33333333333333333333, 0.22222222222222222222, 0.22222222222222222222, 0.33333333333333333333, 0.33333333333333333333, 0.22222222222222222222, 0.22222222222222222222, 0.22222222222222222222, 0.33333333333333333333, 0.22222222222222222222, 0.22222222222222222222, 0.22222222222222222222, 0.33333333333333333333, 0.22222222222222222222, 0.22222222222222222222, 0.22222222222222222222, 0.33333333333333333333};
          case 10:
               return std::vector<double> {0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.1, 0.0, 0.0, 0.2, 0.0, 0.0, 0.3, 0.0, 0.0, 0.4, 0.0, 0.0, 0.5, 0.0, 0.0, 0.6, 0.0, 0.0, 0.7, 0.0, 0.0, 0.8, 0.0, 0.0, 0.9, 0.0, 0.0, 0.9, 0.1, 0.0, 0.8, 0.2, 0.0, 0.7, 0.3, 0.0, 0.6, 0.4, 0.0, 0.5, 0.5, 0.0, 0.4, 0.6, 0.0, 0.3, 0.7, 0.0, 0.2, 0.8, 0.0, 0.1, 0.9, 0.0, 0.0, 0.9, 0.0, 0.0, 0.8, 0.0, 0.0, 0.7, 0.0, 0.0, 0.6, 0.0, 0.0, 0.5, 0.0, 0.0, 0.4, 0.0, 0.0, 0.3, 0.0, 0.0, 0.2, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.9, 0.0, 0.0, 0.8, 0.0, 0.0, 0.7, 0.0, 0.0, 0.6, 0.0, 0.0, 0.5, 0.0, 0.0, 0.4, 0.0, 0.0, 0.3, 0.0, 0.0, 0.2, 0.0, 0.0, 0.1, 0.0, 0.1, 0.9, 0.0, 0.2, 0.8, 0.0, 0.3, 0.7, 0.0, 0.4, 0.6, 0.0, 0.5, 0.5, 0.0, 0.6, 0.4, 0.0, 0.7, 0.3, 0.0, 0.8, 0.2, 0.0, 0.9, 0.1, 0.1, 0.0, 0.9, 0.2, 0.0, 0.8, 0.3, 0.0, 0.7, 0.4, 0.0, 0.6, 0.5, 0.0, 0.5, 0.6, 0.0, 0.4, 0.7, 0.0, 0.3, 0.8, 0.0, 0.2, 0.9, 0.0, 0.1, 0.1, 0.1, 0.0, 0.1, 0.8, 0.0, 0.8, 0.1, 0.0, 0.1, 0.2, 0.0, 0.1, 0.3, 0.0, 0.1, 0.4, 0.0, 0.1, 0.5, 0.0, 0.1, 0.6, 0.0, 0.1, 0.7, 0.0, 0.2, 0.7, 0.0, 0.3, 0.6, 0.0, 0.4, 0.5, 0.0, 0.5, 0.4, 0.0, 0.6, 0.3, 0.0, 0.7, 0.2, 0.0, 0.7, 0.1, 0.0, 0.6, 0.1, 0.0, 0.5, 0.1, 0.0, 0.4, 0.1, 0.0, 0.3, 0.1, 0.0, 0.2, 0.1, 0.0, 0.2, 0.2, 0.0, 0.2, 0.6, 0.0, 0.6, 0.2, 0.0, 0.2, 0.3, 0.0, 0.2, 0.4, 0.0, 0.2, 0.5, 0.0, 0.3, 0.5, 0.0, 0.4, 0.4, 0.0, 0.5, 0.3, 0.0, 0.5, 0.2, 0.0, 0.4, 0.2, 0.0, 0.3, 0.2, 0.0, 0.3, 0.3, 0.0, 0.3, 0.4, 0.0, 0.4, 0.3, 0.0, 0.1, 0.0, 0.1, 0.8, 0.0, 0.1, 0.1, 0.0, 0.8, 0.2, 0.0, 0.1, 0.3, 0.0, 0.1, 0.4, 0.0, 0.1, 0.5, 0.0, 0.1, 0.6, 0.0, 0.1, 0.7, 0.0, 0.1, 0.7, 0.0, 0.2, 0.6, 0.0, 0.3, 0.5, 0.0, 0.4, 0.4, 0.0, 0.5, 0.3, 0.0, 0.6, 0.2, 0.0, 0.7, 0.1, 0.0, 0.7, 0.1, 0.0, 0.6, 0.1, 0.0, 0.5, 0.1, 0.0, 0.4, 0.1, 0.0, 0.3, 0.1, 0.0, 0.2, 0.2, 0.0, 0.2, 0.6, 0.0, 0.2, 0.2, 0.0, 0.6, 0.3, 0.0, 0.2, 0.4, 0.0, 0.2, 0.5, 0.0, 0.2, 0.5, 0.0, 0.3, 0.4, 0.0, 0.4, 0.3, 0.0, 0.5, 0.2, 0.0, 0.5, 0.2, 0.0, 0.4, 0.2, 0.0, 0.3, 0.3, 0.0, 0.3, 0.4, 0.0, 0.3, 0.3, 0.0, 0.4, 0.0, 0.1, 0.1, 0.0, 0.1, 0.8, 0.0, 0.8, 0.1, 0.0, 0.1, 0.2, 0.0, 0.1, 0.3, 0.0, 0.1, 0.4, 0.0, 0.1, 0.5, 0.0, 0.1, 0.6, 0.0, 0.1, 0.7, 0.0, 0.2, 0.7, 0.0, 0.3, 0.6, 0.0, 0.4, 0.5, 0.0, 0.5, 0.4, 0.0, 0.6, 0.3, 0.0, 0.7, 0.2, 0.0, 0.7, 0.1, 0.0, 0.6, 0.1, 0.0, 0.5, 0.1, 0.0, 0.4, 0.1, 0.0, 0.3, 0.1, 0.0, 0.2, 0.1, 0.0, 0.2, 0.2, 0.0, 0.2, 0.6, 0.0, 0.6, 0.2, 0.0, 0.2, 0.3, 0.0, 0.2, 0.4, 0.0, 0.2, 0.5, 0.0, 0.3, 0.5, 0.0, 0.4, 0.4, 0.0, 0.5, 0.3, 0.0, 0.5, 0.2, 0.0, 0.4, 0.2, 0.0, 0.3, 0.2, 0.0, 0.3, 0.3, 0.0, 0.3, 0.4, 0.0, 0.4, 0.3, 0.1, 0.1, 0.8, 0.8, 0.1, 0.1, 0.1, 0.8, 0.1, 0.2, 0.1, 0.7, 0.3, 0.1, 0.6, 0.4, 0.1, 0.5, 0.5, 0.1, 0.4, 0.6, 0.1, 0.3, 0.7, 0.1, 0.2, 0.7, 0.2, 0.1, 0.6, 0.3, 0.1, 0.5, 0.4, 0.1, 0.4, 0.5, 0.1, 0.3, 0.6, 0.1, 0.2, 0.7, 0.1, 0.1, 0.7, 0.2, 0.1, 0.6, 0.3, 0.1, 0.5, 0.4, 0.1, 0.4, 0.5, 0.1, 0.3, 0.6, 0.1, 0.2, 0.7, 0.2, 0.2, 0.6, 0.6, 0.2, 0.2, 0.2, 0.6, 0.2, 0.3, 0.2, 0.5, 0.4, 0.2, 0.4, 0.5, 0.2, 0.3, 0.5, 0.3, 0.2, 0.4, 0.4, 0.2, 0.3, 0.5, 0.2, 0.2, 0.5, 0.3, 0.2, 0.4, 0.4, 0.2, 0.3, 0.5, 0.3, 0.3, 0.4, 0.4, 0.3, 0.3, 0.3, 0.4, 0.3, 0.1, 0.1, 0.1, 0.7, 0.1, 0.1, 0.1, 0.7, 0.1, 0.1, 0.1, 0.7, 0.2, 0.1, 0.1, 0.3, 0.1, 0.1, 0.4, 0.1, 0.1, 0.5, 0.1, 0.1, 0.6, 0.1, 0.1, 0.6, 0.2, 0.1, 0.5, 0.3, 0.1, 0.4, 0.4, 0.1, 0.3, 0.5, 0.1, 0.2, 0.6, 0.1, 0.1, 0.6, 0.1, 0.1, 0.5, 0.1, 0.1, 0.4, 0.1, 0.1, 0.3, 0.1, 0.1, 0.2, 0.1, 0.1, 0.1, 0.6, 0.1, 0.1, 0.5, 0.1, 0.1, 0.4, 0.1, 0.1, 0.3, 0.1, 0.1, 0.2, 0.1, 0.2, 0.6, 0.1, 0.3, 0.5, 0.1, 0.4, 0.4, 0.1, 0.5, 0.3, 0.1, 0.6, 0.2, 0.2, 0.1, 0.6, 0.3, 0.1, 0.5, 0.4, 0.1, 0.4, 0.5, 0.1, 0.3, 0.6, 0.1, 0.2, 0.2, 0.2, 0.1, 0.2, 0.5, 0.1, 0.5, 0.2, 0.1, 0.2, 0.3, 0.1, 0.2, 0.4, 0.1, 0.3, 0.4, 0.1, 0.4, 0.3, 0.1, 0.4, 0.2, 0.1, 0.3, 0.2, 0.1, 0.3, 0.3, 0.1, 0.2, 0.1, 0.2, 0.5, 0.1, 0.2, 0.2, 0.1, 0.5, 0.3, 0.1, 0.2, 0.4, 0.1, 0.2, 0.4, 0.1, 0.3, 0.3, 0.1, 0.4, 0.2, 0.1, 0.4, 0.2, 0.1, 0.3, 0.3, 0.1, 0.3, 0.1, 0.2, 0.2, 0.1, 0.2, 0.5, 0.1, 0.5, 0.2, 0.1, 0.2, 0.3, 0.1, 0.2, 0.4, 0.1, 0.3, 0.4, 0.1, 0.4, 0.3, 0.1, 0.4, 0.2, 0.1, 0.3, 0.2, 0.1, 0.3, 0.3, 0.2, 0.2, 0.5, 0.5, 0.2, 0.2, 0.2, 0.5, 0.2, 0.3, 0.2, 0.4, 0.4, 0.2, 0.3, 0.4, 0.3, 0.2, 0.3, 0.4, 0.2, 0.2, 0.4, 0.3, 0.2, 0.3, 0.4, 0.3, 0.3, 0.3, 0.2, 0.2, 0.2, 0.4, 0.2, 0.2, 0.2, 0.4, 0.2, 0.2, 0.2, 0.4, 0.3, 0.2, 0.2, 0.3, 0.3, 0.2, 0.2, 0.3, 0.2, 0.2, 0.2, 0.3, 0.2, 0.3, 0.3, 0.3, 0.2, 0.3};
          default:
               logs log;
               log.msg() << "Error in 'lagrangetetrahedron' namespace: coordinates of order 11 and above not defined" << std::endl;
               log.error();
               break;
     }
     
     throw std::runtime_error(""); // fix return warning
}

std::vector<polynomial> lagrangetetrahedron::getformfunctionpolynomials(int order)
{
     element tetrahedron(4,order);
     std::vector<polynomial> formfunctionpoly(tetrahedron.countcurvednodes());

     switch (order)
     {
          case 1:
               formfunctionpoly[0].set({{{1.0, -1.0}, {-1.0}}, {{-1.0}}});
               formfunctionpoly[1].set({{{0.0, 0.0}, {0.0}}, {{1.0}}});
               formfunctionpoly[2].set({{{0.0, 0.0}, {1.0}}, {{0.0}}});
               formfunctionpoly[3].set({{{0.0, 1.0}, {0.0}}, {{0.0}}});
               break;
          case 2:
               formfunctionpoly[0].set({{{1.0, -3.0, 2.0}, {-3.0, 4.0}, {2.0}}, {{-3.0, 4.0}, {4.0}}, {{2.0}}});
               formfunctionpoly[1].set({{{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{-1.0, 0.0}, {0.0}}, {{2.0}}});
               formfunctionpoly[2].set({{{0.0, 0.0, 0.0}, {-1.0, 0.0}, {2.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[3].set({{{0.0, -1.0, 2.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[4].set({{{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{4.0, -4.0}, {-4.0}}, {{-4.0}}});
               formfunctionpoly[5].set({{{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {4.0}}, {{0.0}}});
               formfunctionpoly[6].set({{{0.0, 0.0, 0.0}, {4.0, -4.0}, {-4.0}}, {{0.0, 0.0}, {-4.0}}, {{0.0}}});
               formfunctionpoly[7].set({{{0.0, 4.0, -4.0}, {0.0, -4.0}, {0.0}}, {{0.0, -4.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[8].set({{{0.0, 0.0, 0.0}, {0.0, 4.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[9].set({{{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 4.0}, {0.0}}, {{0.0}}});
               break;
          case 3:
               formfunctionpoly[0].set({{{1.0, -5.5, 9.0, -4.5}, {-5.5, 18.0, -13.5}, {9.0, -13.5}, {-4.5}}, {{-5.5, 18.0, -13.5}, {18.0, -27.0}, {-13.5}}, {{9.0, -13.5}, {-13.5}}, {{-4.5}}});
               formfunctionpoly[1].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{1.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{-4.5, 0.0}, {0.0}}, {{4.5}}});
               formfunctionpoly[2].set({{{0.0, 0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {-4.5, 0.0}, {4.5}}, {{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[3].set({{{0.0, 1.0, -4.5, 4.5}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[4].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{9.0, -22.5, 13.5}, {-22.5, 27.0}, {13.5}}, {{-22.5, 27.0}, {27.0}}, {{13.5}}});
               formfunctionpoly[5].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{-4.5, 4.5, 0.0}, {4.5, 0.0}, {0.0}}, {{18.0, -13.5}, {-13.5}}, {{-13.5}}});
               formfunctionpoly[6].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0, 0.0}, {-4.5, 0.0}, {0.0}}, {{0.0, 0.0}, {13.5}}, {{0.0}}});
               formfunctionpoly[7].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0, 0.0}, {-4.5, 0.0}, {13.5}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[8].set({{{0.0, 0.0, 0.0, 0.0}, {-4.5, 4.5, 0.0}, {18.0, -13.5}, {-13.5}}, {{0.0, 0.0, 0.0}, {4.5, 0.0}, {-13.5}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[9].set({{{0.0, 0.0, 0.0, 0.0}, {9.0, -22.5, 13.5}, {-22.5, 27.0}, {13.5}}, {{0.0, 0.0, 0.0}, {-22.5, 27.0}, {27.0}}, {{0.0, 0.0}, {13.5}}, {{0.0}}});
               formfunctionpoly[10].set({{{0.0, -4.5, 18.0, -13.5}, {0.0, 4.5, -13.5}, {0.0, 0.0}, {0.0}}, {{0.0, 4.5, -13.5}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[11].set({{{0.0, 9.0, -22.5, 13.5}, {0.0, -22.5, 27.0}, {0.0, 13.5}, {0.0}}, {{0.0, -22.5, 27.0}, {0.0, 27.0}, {0.0}}, {{0.0, 13.5}, {0.0}}, {{0.0}}});
               formfunctionpoly[12].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, -4.5, 13.5}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[13].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, -4.5, 0.0}, {0.0, 13.5}, {0.0}}, {{0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[14].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, -4.5, 13.5}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[15].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, -4.5, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 13.5}, {0.0}}, {{0.0}}});
               formfunctionpoly[16].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0, 0.0}, {27.0, -27.0}, {-27.0}}, {{0.0, 0.0}, {-27.0}}, {{0.0}}});
               formfunctionpoly[17].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 27.0, -27.0}, {0.0, -27.0}, {0.0}}, {{0.0, -27.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[18].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 27.0, -27.0}, {0.0, -27.0}, {0.0}}, {{0.0, 0.0, 0.0}, {0.0, -27.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               formfunctionpoly[19].set({{{0.0, 0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0}, {0.0}}, {{0.0, 0.0, 0.0}, {0.0, 27.0}, {0.0}}, {{0.0, 0.0}, {0.0}}, {{0.0}}});
               break;
          default:
               logs log;
               log.msg() << "Error in 'lagrangetetrahedron' namespace: Lagrange form functions of order 4 and above not defined" << std::endl;
               log.msg() << "If you are trying to write an expression on a volume to a file do so on a surface instead" << std::endl;
               log.error();
               break;
     }

     return formfunctionpoly;
}

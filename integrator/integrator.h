//
// Created by fede on 20/03/16.
//

#ifndef INTEGRATORE_INTEGRATORE_H
#define INTEGRATORE_INTEGRATORE_H

/**
 * The function to integrate
 */
double f(const double &x);

//Reference for methods https://en.wikipedia.org/wiki/Numerical_integration#Quadrature_rules_based_on_interpolating_functions
double rectangle(double leftExtreme, double rightExtreme, int numberOfSegments);

double trapezoidal(double leftExtreme, double rightExtreme, int numberOfSegments);

double simpson(double a, double b, int N);

#endif //INTEGRATORE_INTEGRATORE_H

/* =====================================================================================

                      The UQ Toolkit (UQTk) version 3.1.3
                          Copyright (2023) NTESS
                        https://www.sandia.gov/UQToolkit/
                        https://github.com/sandialabs/UQTk

     Copyright 2023 National Technology & Engineering Solutions of Sandia, LLC (NTESS).
     Under the terms of Contract DE-NA0003525 with NTESS, the U.S. Government
     retains certain rights in this software.

     This file is part of The UQ Toolkit (UQTk)

     UQTk is open source software: you can redistribute it and/or modify
     it under the terms of BSD 3-Clause License

     UQTk is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     BSD 3 Clause License for more details.

     You should have received a copy of the BSD 3 Clause License
     along with UQTk. If not, see https://choosealicense.com/licenses/bsd-3-clause/.

     Questions? Contact the UQTk Developers at <uqtk-developers@software.sandia.gov>
     Sandia National Laboratories, Livermore, CA, USA
===================================================================================== */
#ifndef GQ_H
#define GQ_H

/** \file gq.h
 * \brief Header for quadrature generation utilities 
 */

 
/**
  \brief Computes abscissas and weights for several quadrature rules.

  \param kind : defines quadrature type (1) Gauss-Legendre, (2) Gauss-Chebyshev 1st kind
                (3) Gauss-Chebyshev 2nd kind, (4) Gauss-Hermite, (5) Gauss-Jacobi
                (6) Gauss-Laguerre
  \param a : optional parameter needed by Gauss-Jacobi and Gauss-Laguerre rules
  \param b : optional parameter needed by Gauss-Jacobi rule
  \param x : on return it holds quadrature abscissas. Its initial size determines the quadrature order
  \param w : on return it holds quadrature weights. 

*/
void gq ( const int kind, const double a, const double b, Array1D<double> &x, Array1D<double> &w ) ;

/**
  \brief Computes abscissas and weights for several quadrature rules.

  \param kind : defines quadrature type (1) Gauss-Legendre, (2) Gauss-Chebyshev 1st kind
                (3) Gauss-Chebyshev 2nd kind, (4) Gauss-Hermite, (5) Gauss-Jacobi
                (6) Gauss-Laguerre
  \param n : quadrature order
  \param a : optional parameter needed by Gauss-Jacobi and Gauss-Laguerre rules
  \param b : optional parameter needed by Gauss-Jacobi rule
  \param x : on return it holds quadrature abscissas. 
  \param w : on return it holds quadrature weights. 

*/
void gq ( const int kind, const int n, const double a, const double b, double *x, double *w ) ;

/**
  \brief Computes abscissas and weights for a generic orthogonal polynomial recursion using the 
         Golub-Welsch algorithm

  \param a : array of parameters for the orthogonal polynomial recursion. 
             Its initial size determines the quadrature order
  \param b : array of parameters for the orthogonal polynomial recursion
  \param amu0 : parameter for custom scaling of quadrature weights
  \param x : on return it holds quadrature abscissas
  \param w : on return it holds quadrature weights. 

*/
void gq_gen(Array1D<double> &a, Array1D<double> &b, const double amu0, 
            Array1D<double> &x, Array1D<double> &w) ;


/**
  \brief Computes abscissas and weights for Newton-Cotes rules through the solution of a 
         Vandermonde matrix. This function was tested as an internal function only, called
         by the quadrature class

  \param x : holds quadrature abscissas
  \param w : on return it holds quadrature weights. 
  \param q : array of parameters needed to setup the Vandermonde matrix

*/
void vandermonde_gq(Array1D<double> &x, Array1D<double> &w, Array1D<double> &q) ;

/**
  \brief Computes abscissas and weights for Chebyshev quadrature rules.

  \param kind : defines quadrature type (1) Gauss-Chebyshev 1st kind
                (2) Gauss-Chebyshev 2nd kind
  \param n : quadrature order
  \param x : on return it holds quadrature abscissas.
  \param w : on return it holds quadrature weights. 

*/
void gchb(const int kind, const int n, double *x, double *w ) ;

#endif

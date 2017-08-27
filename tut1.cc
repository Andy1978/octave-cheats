// Copyright (C) 2017 Andreas Weber <andy@josoansi.de>
//
// GPLv3, see LICENSE


// Lines starting with "// oct>" show the equivalent/similar command in GNU Octave
 
#include <octave/oct.h>
#include <octave/oct-map.h>


DEFUN_DLD (tut1, args,, "Tutorial 1")
{
  // create 2x3 Matrix with ones
  // oct> a = ones (2, 3);
  Matrix a(2, 3, 1);        // rows, columns, fill value
  
  // create 3x2x4 Matrix with zeros
  // oct> b = zeros (3, 2, 4);
  dim_vector dimb = dim_vector (3, 2, 4);
  NDArray b (dimb, 0);

/*
  Array<int> coord (dim_vector (4, 1), 0);
  coord (0, 0) = 1;
  coord (1, 0) = 2;
  coord (2, 0) = 3;
  coord (3, 0) = 4;
  
  P(coord) = 123;;

  RowVector x(4);
  x(0) = 2;
  x(1) = 2;
  x(2) = 2;
  x(3) = 2;
  P(x) = 444;



  Array<octave_idx_type> perm (dim_vector (3, 1));
  perm(0) = 2;
  perm(1) = 1;
  perm(2) = 0;
*/


  return ovl (a, b);
}

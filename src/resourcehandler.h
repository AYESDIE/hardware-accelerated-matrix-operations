//
// Created by ayesdie on 15/03/20.
//

#ifndef MATRIX_ADDITION_OPENCL_RESOURCEHANDLER_H
#define MATRIX_ADDITION_OPENCL_RESOURCEHANDLER_H

#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#define INDEX(x, y, n) ((x * n) + y)

void readMatrix(const std::string& file_name,
                std::vector<double>& matrix,
                size_t& m,
                size_t& n);

void printMatrix(const std::vector<double>& matrix,
                 const size_t& m,
                 const size_t& n);


#endif //MATRIX_ADDITION_OPENCL_RESOURCEHANDLER_H

//
// Created by ayesdie on 15/03/20.
//

#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "resourcehandler.h"

void readMatrix(const std::string& file_name,
                std::vector<double>& matrix,
                size_t& m,
                size_t& n)
{
    m = 0;
    n = 0;
    std::string raw_matrix, line;
    std::ifstream fin(file_name);
    while (std::getline(fin, line))
    {
        raw_matrix += line + " ";
        m++;
    }
    raw_matrix.pop_back();

    std::stringstream ss(raw_matrix);
    float number;

    matrix.clear();
    while (ss >> number)
    {
        matrix.push_back(number);
    }

    n = matrix.size() / m;
}

void saveMatrix(const std::string &file_name,
                const std::vector<double> &matrix,
                const size_t &m,
                const size_t &n)
{
    std::ofstream fout(file_name);
    size_t count = 0;

    for (const auto &item : matrix)
    {
        fout << item << " ";
        count++;

        if (count % n == 0)
        {
            fout << "\n";
        }
    }
}

void printMatrix(const std::vector<double> &matrix,
                 const size_t &m,
                 const size_t &n)
{
    for (size_t i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << matrix[INDEX(i, j, n)] << " ";
        }

        std::cout << std::endl;
    }
}

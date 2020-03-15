//
// Created by ayesdie on 15/03/20.
//

#include "resourcehandler.h"

int main()
{
    std::string a_location = std::string(DATA_DIR) + "/a.txt";
    std::string c_location = std::string(DATA_DIR) + "/c.txt";
    std::vector<double> matA;
    size_t mA, nA;
    readMatrix(a_location, matA, mA, nA);

    saveMatrix(c_location, matA, mA, nA);

    printMatrix(matA, 2, 5);
    return 0;
}

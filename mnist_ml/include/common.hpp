//
// Created by Gabriel Leon de Matos on 7/8/20.
//

#ifndef __COMMON_HPP
#define __COMMON_HPP
#include "data.hpp"
#include <vector>
class CommonData
{
protected:
    std::vector<Data *> *trainingData;
    std::vector<Data *> *testData;
    std::vector<Data *> *validationData;
public:
    void setTrainingData(std::vector<Data *> * vect);
    void setTestData(std::vector<Data *> * vect);
    void setValidationData(std::vector<Data *> * vect);
};
#endif
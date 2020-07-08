//
// Created by Gabriel Leon de Matos on 7/8/20.
//

#ifndef __DATA_HANDLER_H
#define __DATA_HANDLER_H

#include "fstream"
#include "stdint.h"
#include "data.hpp"
#include <vector>
#include <string>
#include <map>
#include <unordered_set>
#include <math.h>

class DataHandler {
    std::vector<Data *> *dataArray;
    std::vector<Data *> *trainingData;
    std::vector<Data *> *validationData;
    int class_counts;
    int featureVectorSize;
    std::map<uint8_t, int> classFromInt;
    std::map<std::string, int> classFromString;

public:
    const double TRAIN_SET_PERCENT = .1;
    const double TEST_SET_PERCENT = 0.75;
    const double VALID_SET_PERCENT = 0.005;

    void readCsv(std::string, std::string);
    void readInputData(std::string path);
    void readLabelData(std::string path);
    void splitData();
    void countClasses();
    void normalize();
    void print();

    int getClassCounts();
    int getDataArraySize();
    int getTrainingDataSize();
    int getTestDataSize();
    int getValidationSize();

    uint32_t format(const unsigned char* bytes);

    std::vector<Data *> * getTrainingData();
    std::vector<Data *> * getTestData();
    std::vector<Data *> * getValidationData();
    std::map<uint8_t, int> getClassMap();
};

#endif
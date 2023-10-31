﻿#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../PR 6.1 iter/PR 6.1 iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(GenerateArrayTest) {
public:

    TEST_METHOD(GeneratesArrayWithCorrectSize) {
        int size = 26;
        int min = -20;
        int max = 40;

        std::vector<int> array = generateArray(size, min, max);

        Assert::AreEqual(size, static_cast<int>(array.size()));
    }

    TEST_METHOD(GeneratesArrayWithinSpecifiedRange) {
        int size = 20;
        int min = -20;
        int max = 40;

        std::vector<int> array = generateArray(size, min, max);

        for (int element : array) {
            Assert::IsTrue(element >= min && element <= max);
        }
    }
};


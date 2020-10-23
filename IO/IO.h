//
// Created by cigan on 23.10.2020.
//

#ifndef PROBLEMSOLVINGCLEANARHITECTURE_CPP_IO_H
#define PROBLEMSOLVINGCLEANARHITECTURE_CPP_IO_H

#include "../DataStructures/DataStructures.h"
#include "../Validations/Validations.h"

class AbstractIO {

public:
    AbstractIO() = default;

    virtual void OutputOneDimensionalArray() {}

    ~AbstractIO() = default;
};

class InputOutputOperations : public AbstractIO {

private:
    AbstractDataStructures DataStructures;
    AbstractValidations Validations;

public:

    InputOutputOperations () {

        DataStructures = DataStructuresFactory::GetOneDimensionalArrayTypeObject();
        Validations = ValidationsFactory::GetValidationsObject();
    }

    void OutputOneDimensionalArray() override {

        Validations.CheckValue(DataStructures.GetLengthOfOneDimensionalArray());

        for (int iterator = 0; iterator < DataStructures.GetLengthOfOneDimensionalArray(); iterator++)
            std::cout << *(DataStructures.GetOneDimensionalArray() + iterator);
    }

    ~InputOutputOperations() = default;
};

class IOFactory {

public:

    IOFactory() = default;

    static AbstractIO GetInputOutputOperationsObject() {

        return InputOutputOperations();
    }

    ~IOFactory() = default;
};

#endif //PROBLEMSOLVINGCLEANARHITECTURE_CPP_IO_H

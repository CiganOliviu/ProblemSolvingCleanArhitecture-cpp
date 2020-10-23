//
// Created by cigan on 23.10.2020.
//

#ifndef PROBLEMSOLVINGCLEANARHITECTURE_CPP_VALIDATIONS_H
#define PROBLEMSOLVINGCLEANARHITECTURE_CPP_VALIDATIONS_H

#include "../CoreDependencies/CoreDependencies.h"

class AbstractValidations {

public:
    AbstractValidations() = default;

    virtual void CheckValue(int Number) {}

    ~AbstractValidations() = default;
};

class Validations : public AbstractValidations {

public:

    Validations() = default;

    void CheckValue(int Number) override {

        if (Number <= 0)
            FAIL_EXIT;
    }

    ~Validations() = default;
};

class ValidationsFactory {

public:

    ValidationsFactory() = default;

    static AbstractValidations GetValidationsObject() {

        return Validations();
    }

    ~ValidationsFactory() = default;
};

#endif //PROBLEMSOLVINGCLEANARHITECTURE_CPP_VALIDATIONS_H

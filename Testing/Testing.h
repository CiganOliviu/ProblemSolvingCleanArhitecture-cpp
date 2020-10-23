//
// Created by cigan on 23.10.2020.
//

#ifndef PROBLEMSOLVINGCLEANARHITECTURE_CPP_TESTING_H
#define PROBLEMSOLVINGCLEANARHITECTURE_CPP_TESTING_H

#include "../DataStructures/DataStructures.h"
#include "../Validations/Validations.h"
#include "../ProblemSolution/ProblemSolution.h"

class AbstractTesting {

public:
    AbstractTesting() = default;

    virtual void TestCaseOne() {}

    ~AbstractTesting() = default;
};

class Testing : public AbstractTesting {

private:
    AbstractDataStructures DataStructures;
    AbstractValidations Validations;
    AbstractProblemSolution Problems;

public:

    Testing() {

        DataStructures = DataStructuresFactory::GetOneDimensionalArrayTypeObject();
        Validations = ValidationsFactory::GetValidationsObject();
        Problems = ProblemSolutionFactory::GetProblemSolutionObject();
    }

    void TestCaseOne() override {

        AbstractProblemSolution * Iproblem;
        ProblemSolution problem;

        Iproblem = &problem;

        Iproblem->SetProblemSolution();
    }

    ~Testing() = default;
};

class TestingFactory {

public:

    TestingFactory() = default;

    static AbstractTesting GetTestingObject() {

        return Testing();
    }

    ~TestingFactory() = default;
};

#endif //PROBLEMSOLVINGCLEANARHITECTURE_CPP_TESTING_H

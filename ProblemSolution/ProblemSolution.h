//
// Created by cigan on 23.10.2020.
//

#ifndef PROBLEMSOLVINGCLEANARHITECTURE_CPP_PROBLEMSOLUTION_H
#define PROBLEMSOLVINGCLEANARHITECTURE_CPP_PROBLEMSOLUTION_H

#include "../CoreDependencies/CoreDependencies.h"
#include "../DataStructures/DataStructures.h"
#include "../Validations/Validations.h"

class AbstractProblemSolution {

public:
    AbstractProblemSolution() = default;

    virtual void SetProblemSolution() {}

    ~AbstractProblemSolution() = default;
};

class ProblemSolution : public AbstractProblemSolution {

private:
    AbstractDataStructures DataStructures;
    AbstractValidations Validations;

public:
    ProblemSolution() {

        DataStructures = DataStructuresFactory::GetOneDimensionalArrayTypeObject();
        Validations = ValidationsFactory::GetValidationsObject();
    }

    void SetProblemSolution() override {

        std::cout << "SolutionProblem call";
    }

    ~ProblemSolution() = default;
};

class ProblemSolutionFactory {

public:
    ProblemSolutionFactory() = default;

    static AbstractProblemSolution GetProblemSolutionObject() {

        return ProblemSolution();
    }

    ~ProblemSolutionFactory() = default;
};

#endif //PROBLEMSOLVINGCLEANARHITECTURE_CPP_PROBLEMSOLUTION_H

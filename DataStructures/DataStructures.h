//
// Created by cigan on 23.10.2020.
//

#ifndef PROBLEMSOLVINGCLEANARHITECTURE_CPP_DATASTRUCTURES_H
#define PROBLEMSOLVINGCLEANARHITECTURE_CPP_DATASTRUCTURES_H

#ifndef STANDARD_LENGTH
#define STANDARD_LENGTH 1000
#endif

class AbstractDataStructures {

public:
    AbstractDataStructures () = default;

    virtual int GetLengthOfOneDimensionalArray() {}
    virtual void SetLengthOfOneDimensionalArray(int NewValue) {}

    virtual int * GetOneDimensionalArray() {}
    virtual void SetValueForOneElementInOneDimensionalArray(int PositionOfElement, int NewValue) {}

    ~AbstractDataStructures() = default;
};

class OneDimensionalArrayType : public AbstractDataStructures {

private:
    int Length;
    int OneDimensionalArray[STANDARD_LENGTH];

public:

    OneDimensionalArrayType() = default;

    int GetLengthOfOneDimensionalArray() override {

        return this->Length;
    }

    void SetLengthOfOneDimensionalArray(int NewValue) override {

        this->Length = NewValue;
    }

    int * GetOneDimensionalArray() override {

        int * PointerArray = this->OneDimensionalArray;

        return PointerArray;
    }

    void SetValueForOneElementInOneDimensionalArray(int PositionOfElement, int NewValue) override {

        this->OneDimensionalArray[PositionOfElement] = NewValue;
    }

    ~OneDimensionalArrayType() = default;
};

class DataStructuresFactory {

public:
    DataStructuresFactory() = default;

    static AbstractDataStructures GetOneDimensionalArrayTypeObject() {

        return OneDimensionalArrayType();
    }

    ~DataStructuresFactory() = default;
};

#endif //PROBLEMSOLVINGCLEANARHITECTURE_CPP_DATASTRUCTURES_H

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    Calculator();
    int add(int a, int b);
    int subtract(int a, int b);
    int getValue() const;
    void setValue(int value);

private:
    int value_;
};

#endif

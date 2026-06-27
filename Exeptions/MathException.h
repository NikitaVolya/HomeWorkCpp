#pragma once
#include "AppException.h"

class MathException : public AppException
{
public:
    MathException(const char* msg)
        : AppException(msg)
    {
    }
};

class NegativeLengthException final : public MathException
{
public:
    NegativeLengthException()
        : MathException("Length cannot be negative.")
    {
    }
};

class NegativeRadiusException final : public MathException
{
public:
    NegativeRadiusException()
        : MathException("Radius cannot be negative.")
    {
    }
};

class InvalidTriangleException final : public MathException
{
public:
    InvalidTriangleException()
        : MathException("Invalid triangle.")
    {
    }
};
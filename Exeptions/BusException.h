#pragma once
#include "AppException.h"

class BusException : public AppException
{
public:
    BusException(const char* msg)
        : AppException(msg)
    {
    }
};

class DuplicateBusException final : public BusException
{
public:
    DuplicateBusException()
        : BusException("Bus with this number already exists.")
    {
    }
};

class BusNotFoundException final : public BusException
{
public:
    BusNotFoundException()
        : BusException("Bus not found.")
    {
    }
};
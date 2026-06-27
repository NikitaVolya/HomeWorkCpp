#pragma once
#include "AppException.h"

class MemoryException final : public AppException
{
public:
    MemoryException()
        : AppException("Memory allocation failed.")
    {
    }
};
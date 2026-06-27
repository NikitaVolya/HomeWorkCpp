#pragma once
#include "AppException.h"

class FileException : public AppException
{
public:
    FileException(const char* msg)
        : AppException(msg)
    {
    }
};

class FileOpenException final : public FileException
{
public:
    FileOpenException()
        : FileException("Unable to open file.")
    {
    }
};

class FileWriteException final : public FileException
{
public:
    FileWriteException()
        : FileException("Unable to write to file.")
    {
    }
};
#pragma once
#include <exception>

class AppException : public std::exception
{
protected:
    const char* message;

public:
    AppException(const char* msg)
        : message(msg)
    {
    }

    const char* what() const noexcept override
    {
        return message;
    }
};
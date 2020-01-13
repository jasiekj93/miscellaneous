#pragma once


#include <stdint.h>


class ILogStream
{
public:
	virtual ~ILogStream() {}

	virtual void Print(const uint8_t *data, uint32_t size) = 0;
};

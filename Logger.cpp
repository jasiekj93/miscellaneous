#include "Logger.h"
#include <stdio.h>
#include <stdarg.h>


Logger::Logger(ILogStream & outputStream)
{
	SetOuputStream(outputStream);
}

void Logger::SetOuputStream(ILogStream & outputStream)
{
	m_logStream = &outputStream;
}

void Logger::Print(const char * format, ...)
{
	static char outputBuffer[BUFFER_SIZE];
	uint32_t outputCount = 0;

	va_list argumentList;
	va_start(argumentList, format);
	outputCount = snprintf(outputBuffer, BUFFER_SIZE, format, argumentList);

	m_logStream->Print((const uint8_t *)outputBuffer, outputCount);
}


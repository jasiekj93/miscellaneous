#pragma once


#include "IOutputStream.h"


class Logger
{
private:
	static constexpr uint32_t BUFFER_SIZE = 256;


	ILogStream *m_logStream;

public:
	Logger(ILogStream &);

	void SetOuputStream(ILogStream &);
	void Print(const char *, ...);

};


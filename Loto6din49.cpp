#include "Loto6din49.h"

int Loto::Extragere()
{
	this->m_bila_extrasa = rand() % 49 + 1;

	return this->m_bila_extrasa;
}
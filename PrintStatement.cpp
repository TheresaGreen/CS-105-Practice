// PrintStatement.cpp:
#include "PrintStatement.h"
using namespace std;

PrintStatement::PrintStatement(std::string variableName)
	: m_variableName( variableName )
{}


void PrintStatement::execute(ProgramState * state, std::ostream &outf)
{   //check if the item is there
	if (state->findname(m_variableName)==state->findend())
	{
		outf<<"No such item exists to print \n";
	}
	else
	{
		int printer = state->findamount(m_variableName);
		outf<<printer<<"\n";
	}
}



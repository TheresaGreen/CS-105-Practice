#include "ProgramState.h"

using namespace std;

ProgramState::ProgramState(int numLines)
{
	m_numLines=numLines;
}
void ProgramState::add(string name, int how_much)
{
	// if a value doesn't already exist make a new one
	if (map.find(name)==map.end())
	{
		map.insert(make_pair(name, how_much));
	}
	//if it does replace it's value with the new value
	else 
	{
		std::map<std::string, int>::iterator it = map.find(name);
		it->second=how_much;

	}
}

std::map<std::string, int>::iterator ProgramState::findname(string name)
{
	return map.find(name);
}

std::map<std::string, int>::iterator ProgramState::findend()
{
	return map.end();
}

int ProgramState::findamount(string name)
{
	int amount = map.find(name)->second;
	return amount;
}
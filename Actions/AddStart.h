#pragma once
#ifndef ADD_START_H
#define ADD_START_H
#include "Action.h"
#include "..\Statements\Start.h"


class AddStart : public Action
{


private:
	// in the data members of the actions
	// we put the paramaters of the action
	// to be set in ReadActionParameters() then used in Execute()

	Point Position;	//Position where the user clicks to add the stat.

public:
	AddStart(ApplicationManager* pAppManager);

	//Read Assignemt statements position
	virtual void ReadActionParameters();

	//Create and add an assignemnt statement to the list of statements
	virtual void Execute();

};
#endif
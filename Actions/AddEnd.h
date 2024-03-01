#pragma once
#ifndef ADD_END_H
#define ADD_END_H
#include "Action.h"
#include "..\Statements\End.h"


class AddEnd: public Action
{


private:
	// in the data members of the actions
	// we put the paramaters of the action
	// to be set in ReadActionParameters() then used in Execute()

	Point Position;	//Position where the user clicks to add the stat.

public:
	AddEnd(ApplicationManager* pAppManager);

	//Read Assignemt statements position
	virtual void ReadActionParameters();

	//Create and add an assignemnt statement to the list of statements
	virtual void Execute();



};
#endif
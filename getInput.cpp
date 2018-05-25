#include "stdafx.h"
#include "getInput.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "checkData.h"

void getInput::getStudentId()
{
	checkData dataCheck;

	system("cls");

	std::cout << "Please enter your student ID: ";
	std::cin >> this->studentId;
	dataCheck.checkUserInputData(this->studentId);
}

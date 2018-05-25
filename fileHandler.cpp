#pragma once
#include "stdafx.h"
#include "fileHandler.h"
#include <fstream>


void fileHandler::writeToFile()
{
	std::cout << "Enter Data as follows([student name] [student id]): ";
	std::cin >> studentName;
	std::cin >> studentId;

	std::ofstream inputFile;
	inputFile.open("./studentDatabase.txt", std::fstream::in | std::fstream::app);

	if (inputFile.is_open())
	{
		inputFile << studentName << "|" << studentId << std::endl;

	}
	inputFile.close();
}

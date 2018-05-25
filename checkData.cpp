#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "checkData.h"


void checkData::checkUserInputData(int key)
{
	system("cls");
	std::ifstream outputFile;
	outputFile.open("studentDatabase.txt", std::fstream::out | std::ios::app);

	if (outputFile.is_open())
	{
		std::string studentName;
		int studentId;
		
		while (std::getline(outputFile, studentName, '|') && !outputFile.eof())
		{
			outputFile >> studentId;
			if (key == studentId)
			{
				std::cout << "Your Student ID is verified. Welcome back " << studentName << "." << std::endl;

				std::ofstream inputAttend;
				inputAttend.open("./attendance.txt", std::fstream::in | std::ios::app);
				if (inputAttend.is_open())
				{
					inputAttend << studentName << " - PRESENT" <<  std::endl;
				}
			}
		}
	}
	outputFile.close();
	system("pause");
}

void checkData::viewDatavbase()
{
	system("cls");
	std::cout << "ID Number\tStudent Name";
	std::ifstream outputFile;
	outputFile.open("./studentDatabase.txt", std::fstream::out | std::ios::app);

	if (outputFile.is_open())
	{
		std::string studentName;
		int studentId;

		while (std::getline(outputFile, studentName, '|') && !outputFile.eof())
		{
			outputFile >> studentId;

			std::cout << "\n" << studentId << "\t\t" << studentName << std::endl;
		}
	}
	outputFile.close();
	system("pause");
}

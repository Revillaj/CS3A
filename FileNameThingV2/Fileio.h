//
// Created by Jose Revilla on 2/2/22.
//

#ifndef FILENAMETHINGV2_FILEIO_H
#define FILENAMETHINGV2_FILEIO_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

bool openFile(std::ofstream& fout, std::string FileName);
bool openFile(std::ifstream& fin, std::string FileName);
bool writeToFile(std::string FileName, std::vector<std::string> v);
void printVector(std::vector<std::string> v);
int getRanNum();
int getNumberOfLines(std::string FileName);
std::string getLineFromFile(std::string FileName, int lineNum);
std::vector<std::string> getUserInput(std::string message, std::string delimiter);
std::string getRandomLine(std::string FileName);


#endif //FILENAMETHINGV2_FILEIO_H

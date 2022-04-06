#include <iostream>
#include <fstream>
#include <vector>

bool openFile(std::ofstream& fout, std::string FileName);
bool openFile(std::ifstream& fin, std::string FileName);
bool writeToFile(std::string FileName, std::vector<std::string> v);
void printVector(std::vector<std::string> v);
int getRanNum();
int getNumberOfLines(std::string FileName);
std::stri
ng getLineFromFile(std::string FileName, int lineNum);
std::vector<std::string> getUserInput(std::string message, std::string delimiter);
std::string getRandomLine(std::string FileName);


int main()
{
    srand(time(NULL));
    //writeToFile("names.txt", getUserInput("Enter Name or Exit with -1", "-1"));
    std::cout << getRandomLine("names.txt");
    return 0;
}
bool openFile(std::ofstream& fout, std::string FileName)
{
    fout.open(FileName);
    return !fout.fail();
}
bool openFile(std::ifstream& fin, std::string FileName)
{
    fin.open(FileName);
    return !fin.fail();
}

std::vector<std::string> getUserInput(std::string message, std::string delimiter)
{
    std::vector<std::string> names;

    while(true)
    {
        std::string temp;
        std::cout << message;
        std::cin >> temp;
        if(temp == delimiter)
            break;
        names.push_back(temp);
    }
    return(names);

}
void printVector(std::vector<std::string> v)
{
    for(int i(0); i<v.size(); i++)
    {
        std::cout<<v[i] << " ";
    }
}
bool writeToFile(std::string FileName, std::vector<std::string> v)
{
    std::ofstream fout;
    if(!openFile(fout, FileName))
        return false;

    for(int i(0); i<v.size(); i++)
    {
        fout << v[i];
        if(i<=v.size() -1)
            fout<<std::endl;
    }
    fout.close();
    return true;
}

std::string getLineFromFile(std::string FileName, int lineNum)
{
    std::ifstream fin;
    openFile(fin, FileName);

    std::string data;// stores next line
    std::vector<std::string> lines;//stores all lines
    while(!fin.eof())//loop until end of file(EOF)
    {
        getline(fin, data);//uses the ifstream to store the next line to data
        lines.push_back(data);//adds data to vector
    }
    return lines[lineNum];
}

int getRanNum(int low, int high)
{
    return (rand() % (high - low + 1) + low);
}

int getNumberOfLines(std::string FileName)
{
    std::ifstream fin;
    int count(0);
    if(openFile(fin, FileName))
    {
        std::string data;
        while(!fin.eof())
        {
            getline(fin, data);
            count++;
        }
    }
    fin.close();
    return count;
}

std::string getRandomLine(std::string FileName)
{
    return getLineFromFile(FileName, getRanNum(0, getNumberOfLines(FileName)-1));
}
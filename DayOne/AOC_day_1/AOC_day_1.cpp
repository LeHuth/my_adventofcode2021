// AOC_day_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>


int main()
{   
    int isGreaterThan_Count = 0;
    int y = NULL;
    int x;
    int sumX = 0;
    std::vector<int> data;
    std::ifstream inFile;

    inFile.open("E:\\AdventOfCode\\DayOne\\Inputs\\input.txt");
    if (!inFile) {
        std::cout << "Unable to open file!";
        exit(1);
    };
    while (inFile >> x) {
        data.push_back(x);
    };

    inFile.close();

    for (int count = 1; count < data.size() - 2; count++)
    {
        x = data[count - 1] + data[count] + data[count + 1];
        y = data[count] + data[count + 1] + data[count + 2]; 

        if (x < y)
        {
            isGreaterThan_Count++;
        }
    }

    std::cout << isGreaterThan_Count << std::endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

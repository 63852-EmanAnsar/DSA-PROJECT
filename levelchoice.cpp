#include<iostream>
#include<fstream>
using namespace std;


int main(){

    int levelChoice;
    cout<<"Select Difficulty Level:" << endl;
    cout<<"1. Easy" << endl;
    cout<<"2. Medium" << endl;
    cout<<"3. Hard" << endl;
    cout<<"Enter your choice (1-3): ";
    cin>> levelChoice;
    cin.ignore();

    string filename;

    if (levelChoice == 1)
        filename = "easy.txt";
    else if (levelChoice == 2)
        filename = "medium.txt";
    else
    filename = "hard.txt";
}

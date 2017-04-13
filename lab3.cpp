#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main (int argc, char *argv[]){
    int number;
    vector<int> cows;
    int in;
    int total=0;

    ifstream inFile("file.in", ios::in);
    if (!inFile){
 cerr << "Open Failed" << endl;
 exit(1);
    }
    inFile >> number;
    for (int i=0; i<8; ++i){
 inFile >> in;
 cows.push_back(in);
    }

    sort(cows.begin(),cows.end());

    for (int i=3; i<8; ++i)
 total += cows[i];

    ofstream outFile("file.out", ios::out);
    outFile << total;
}

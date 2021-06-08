#include <vector>
#include <iostream>
#include "DSSorter.h"

using namespace std;

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "  ";
    }
    cout << endl;
}


int main(){

    // vector<int> a = {1, 4, 2, 4, 2, 3, 6, 4, 7, 1, 3, 8, 2, 9, 3, 4};

    DSSorter<int> *sortData = new DSSorter<int>();

    sortData->dataSet1();               // Sort Vector size 10
    sortData->dataSet2();               // Sort Vector size 100
    sortData->dataSet3();               // Sort Vector size 500
    sortData->dataSet4();               // Sort Vector size 1k
    sortData->dataSet5();               // Sort Vector size 5k

    sortData->printAllResults();        // prints best,worst & average case for each dataSet

    sortData->mysteryAnalyzer();

    delete sortData;

    return 0;
}

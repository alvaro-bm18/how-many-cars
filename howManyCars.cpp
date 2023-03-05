#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> parts;
    string inputArray;

    cout << "Dame el arreglo de 3 elementos : ";
    cin >> inputArray;

    string newInput = "";
    int lenInput = inputArray.length();

    //Clear the spaces
    for(int i = 0; i < lenInput; i++)
        if(inputArray[i] != ' ' && inputArray[i] != '[' && inputArray[i] != ']')
            newInput += inputArray[i];

    newInput += ',';
    int lenNewInput = newInput.length();
    string numberTXT = "";


    for(int i = 0; i < lenNewInput; i++){
        if(newInput[i] != ','){
          numberTXT += newInput[i];
        }
        else{
            int n = stoi(numberTXT);
            parts.push_back(n);
            numberTXT = "";
        }
    }

    int numberWheels{parts.at(0)}, numberCarBodies{parts.at(1)}, numberFigures{parts.at(2)};
    int wheels = numberWheels / 4;
    int figures = numberFigures / 2;

    int numberOfCars = min(min(wheels, numberCarBodies), min(numberCarBodies, figures));
    cout << "Total of Cars : " << numberOfCars << endl;
    cout << "Reciduos : " << numberWheels - (4 * numberOfCars) << " - wheels, " << numberCarBodies - numberOfCars << " - bodies, " << numberFigures - (2 * numberOfCars) << " - figures" << endl;

    return 0;
}

//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    int data =0;
    double Mean, deviation, sum, sum1;
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum1 += pow(atof(textline.c_str()),2);
        data++;
    }

    Mean = sum/data;
    deviation = pow(((sum1/data)-(pow(Mean,2))),0.5);

    cout << "Number of data = "<< data << '\n';
    cout << setprecision(3);
    cout << "Mean = " << Mean << '\n';
    cout << "Standard deviation = " << deviation;
}
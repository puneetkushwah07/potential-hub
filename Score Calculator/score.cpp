#include <iostream>
using namespace std;
// It's Simple tool to calculate your scorecard Percentage
int main(){
    //Initializing Variable
    int math;
    int sci;
    int soc;
    double Perc;

    //Requesting Math's Score
    cout<< "what is your math's score? ";
    cin>> math;
    while (math<0 || math > 100)
    {
        cout<< "please entre a value that is b/w 0 and 100; \n" ;
        cin >> math;
    }
    
    //Requesting Science's Score
    cout<< "what is your science's score? ";
    cin>> sci;
    while (sci<0 || sci > 100)
    {
        cout<< "please entre a value that is b/w 0 and 100; \n" ;
        cin >> sci;
    }

    //Requesting Social Science's Score
    cout<< "what is your Social Science's score? ";
    cin>> soc;
    while (soc<0 || soc > 100)
    {
        cout<< "please entre a value that is b/w 0 and 100; \n" ;
        cin >> soc;
    }

    //Calculating Overall Percentage
    Perc = (math + sci + soc)/3;
    
    //Displaying the Final Score
    cout << "Your Percentage is: " << Perc << "%"; 
    
    return 0;
}
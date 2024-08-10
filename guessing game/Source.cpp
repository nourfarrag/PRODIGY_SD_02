#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
   
 

    int M;
    int ct = 0;
    int randomNumber = rand() % 100 + 1;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess the number by inputting a number from 1-100" << endl;


    cin >> M;

    while (M != randomNumber) {
        if (M > randomNumber) {
            cout << "Too high!" << endl;
        }
        else if (M < randomNumber) {
            cout << "Too low!" << endl;
        }
        ct++;

        
        cout << "Enter your guess: ";
        cin >> M;
    }

    
    cout << "Congratulations, you've got it correct this time!" << endl;
    cout << "It took you " << ct << " tries to get it right" << endl;

    return 0;
}

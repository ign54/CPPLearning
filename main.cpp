#include <iostream>
// Shoutout to W3Schools

/*Eh, learning cpp lol. dont take this serious its just me screwing around in clion :)
 * - Dlx
 */

/*
* Things I learnt so far:
* CPP Syntax
* Integers, Variables (how to declare them)
* User Input
* Functions (67%)
 */



using namespace std;

int main() {
    int version;
    cout << "Please enter the current version number: " << endl;
    cin >> version;
    cout << "Welcome to Cpp" << endl;
    cout << endl;
    cout << "Untitled | Version: " << version << endl;
//    if (version <= 10) {
//        cout << "Congrats, you are on the latest version!" << endl;
//    }else if (version <= 20) {
//        cout << "Your version is: " << version << endl;
//    }else {
//        cout << "Your version is outdated" << endl;
//    }
    cout << endl;
    cout << "Cases: " << endl;
    switch (version) {
        case 1:
            cout << "Your version is: 1" << endl;
            break;
        case 2:
            cout << "Your version is: 2" << endl;
            break;
        case 3:
            cout << "Your version is: 3" << endl;
            break;
    }
    return 0;
}


/* *
 * i DONT fucking know what did up there but idrc it is what it is
 */
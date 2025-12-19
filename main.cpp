#include <iostream>
// Shoutout to W3Schools

/*Eh, learning cpp lol. dont take this serious its just me screwing around in clion :)
 * - Dlx
 */





using namespace std;

int main() {
    int version;
    cout << "Please enter the current version number: " << endl;
    cin >> version;
    cout << "Welcome to Cpp" << endl;
    cout << endl;
    cout << "Untitled | Version: " << version << endl;
    if (version <= 10) {
        cout << "Congrats, you are on the latest version!" << endl;
    }else if (version <= 20) {
        cout << "Your version is: " << version << endl;
    }else {
        cout << "Your version is outdated" << endl;
    }
    return 0;
}


/* *
 * i DONT fucking know what did up there but idrc it is what it is
 */
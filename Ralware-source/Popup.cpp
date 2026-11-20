#include <windows.h>
#include <cstdlib> // Needed for std::system

void restartComputer() {
    // /r = restart, /t 0 = 0-second delay
    std::system("C:\\Windows\\System32\\shutdown /r /t 0");
}

int main() {
    // Show the warning popup and capture the button click
    int response = MessageBoxA(
        NULL, 
        "The program you are about to run is malware. i am not responsible for any damage done.", 
        "WARNING!", 
        MB_OK | MB_ICONINFORMATION
    );

    // Trigger the restart if OK is clicked
    if (response == IDOK) {
        restartComputer();
        // Add another function call here
    }

    return 0;
}

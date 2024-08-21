#include <string>
#include <iostream>
#include <cstdio> 
#include <cstdlib> 
#include <direct.h>
#include <windows.h>


namespace fs= std::filesystem;


    void displayFiles(){
        system("dir);   
        system("pause"); //mag pause kadyot ang screen
    std::cout << "1. To display list of Files" << endl;
    std::cout << "2. To create new directory" << endl;
    std::cout << "3. To change the working directory" << endl;
    std::cout << "4. Exit" << endl;
    std::cout << "Enter a number: ";
    int choice;
    cin >> choice;

    if(choice == 1){
        std::cout << "\nList of all files\n";
        int count = 0;
    }
}

int main(){
    switch(choice){
        case 1:
        std::cout << "\nFile Details\n";
        std::cout << "1. List of files" << endl;
        std::cout << "2. List of extension files" << endl;
        std::cout << "3. list of name wise" << endl;
        break;

        case 2:
        

    }
    
}

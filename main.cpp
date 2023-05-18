#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cstring>
#include <cstdio>
#include <cctype>
#include "PassGenerator.h"


 int main()
{
    // Demande � l'utilisateur la longueur et les types de caract�res pour le mot de passe
    int length;
    bool useLowercase;
    bool useUppercase;
    bool useNumbers;
    bool useSpecialChars;
    cout << "Enter password length: ";
    cin >> length;
    cout << "Use lowercase characters? (y/n): ";
    char response;
    cin >> response;
    useLowercase = (response == 'y' || response == 'Y');
    cout << "Use uppercase characters? (y/n): ";
    cin >> response;
    useUppercase = (response == 'y' || response == 'Y');
    cout << "Use numbers? (y/n): ";
    cin >> response;
    useNumbers = (response == 'y' || response == 'Y');
    cout << "Use special characters? (y/n): ";
    cin >> response;
    useSpecialChars = (response == 'y' || response == 'Y');

    // Cr�e un g�n�rateur de mot de passe avec les param�tres sp�cifi�s
    PasswordGenerator generator(length, useLowercase, useUppercase, useNumbers, useSpecialChars);

    // G�n�re le mot de passe al�atoire et l'affiche � l'utilisateur
    string password = generator.generatePassword();
    cout << "Generated password: " << password << endl;


    return 0;
}
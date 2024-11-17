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
    // Demande à l'utilisateur la longueur et les types de caractères pour le mot de passe
    int length;
    bool useLowercase;
    bool useUppercase;
    bool useNumbers;
    bool useSpecialChars;
    cout << "Enter password length: ";
    cin >> length;
    cout << "Use lowercase characters ? (y/n): ";
    char response;
    cin >> response;
    useLowercase = (response == 'y' || response == 'Y');
    cout << "Use uppercase characters ? (y/n): ";
    cin >> response;
    useUppercase = (response == 'y' || response == 'Y');
    cout << "Use numbers? (y/n): ";
    cin >> response;
    useNumbers = (response == 'y' || response == 'Y');
    cout << "Use special characters ? (y/n): ";
    cin >> response;
    useSpecialChars = (response == 'y' || response == 'Y');

    // Crée un générateur de mot de passe avec les paramètres spécifiés
    PasswordGenerator generator(length, useLowercase, useUppercase, useNumbers, useSpecialChars);

    // Génère le mot de passe aléatoire et l'affiche à l'utilisateur
    string password = generator.generatePassword();
    cout << "Generated password: " << password << endl;


    return 0;
}

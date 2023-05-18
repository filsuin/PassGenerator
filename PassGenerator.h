#pragma once


using namespace std;

// Classe pour générer des mots de passe aléatoires
class PasswordGenerator
{
public:
    PasswordGenerator(int length, bool useLowercase, bool useUppercase, bool useNumbers, bool useSpecialChars) :
        length(length), useLowercase(useLowercase), useUppercase(useUppercase), useNumbers(useNumbers), useSpecialChars(useSpecialChars)
    {
        // Initialise les chaînes de caractères possibles pour chaque type de caractère
        lowercaseChars = "abcdefghijklmnopqrstuvwxyz";
        uppercaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        numberChars = "0123456789";
        specialChars = "!@#$%^&*()_+-=[]{}|;:,.<>/?";
        srand(time(nullptr)); // Initialise le générateur de nombres aléatoires avec l'heure actuelle
    }
    // Fonction pour générer un mot de passe aléatoire
    string generatePassword()
    {
        // Initialise la chaîne de caractères possibles pour le mot de passe
        string possibleChars = "";
        if (useLowercase)
            possibleChars += lowercaseChars;
        if (useUppercase)
            possibleChars += uppercaseChars;
        if (useNumbers)
            possibleChars += numberChars;
        if (useSpecialChars)
            possibleChars += specialChars;

        // Vérifie que la chaîne de caractères possibles contient au moins un type de caractère
        if (possibleChars.empty())
        {
            cout << "Error: no character type selected." << endl;
            return "";
        }

        string password = "";

        // Génère le mot de passe caractère par caractère
        for (int i = 0; i < length; ++i)
        {
            int randomIndex = rand() % possibleChars.length();
            password += possibleChars[randomIndex];
        }

        return password;
    }

private:
    int length;
    bool useLowercase;
    bool useUppercase;
    bool useNumbers;
    bool useSpecialChars;
    string lowercaseChars;
    string uppercaseChars;
    string numberChars;
    string specialChars;
};
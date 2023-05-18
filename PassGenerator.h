#pragma once


using namespace std;

// Classe pour g�n�rer des mots de passe al�atoires
class PasswordGenerator
{
public:
    PasswordGenerator(int length, bool useLowercase, bool useUppercase, bool useNumbers, bool useSpecialChars) :
        length(length), useLowercase(useLowercase), useUppercase(useUppercase), useNumbers(useNumbers), useSpecialChars(useSpecialChars)
    {
        // Initialise les cha�nes de caract�res possibles pour chaque type de caract�re
        lowercaseChars = "abcdefghijklmnopqrstuvwxyz";
        uppercaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        numberChars = "0123456789";
        specialChars = "!@#$%^&*()_+-=[]{}|;:,.<>/?";
        srand(time(nullptr)); // Initialise le g�n�rateur de nombres al�atoires avec l'heure actuelle
    }
    // Fonction pour g�n�rer un mot de passe al�atoire
    string generatePassword()
    {
        // Initialise la cha�ne de caract�res possibles pour le mot de passe
        string possibleChars = "";
        if (useLowercase)
            possibleChars += lowercaseChars;
        if (useUppercase)
            possibleChars += uppercaseChars;
        if (useNumbers)
            possibleChars += numberChars;
        if (useSpecialChars)
            possibleChars += specialChars;

        // V�rifie que la cha�ne de caract�res possibles contient au moins un type de caract�re
        if (possibleChars.empty())
        {
            cout << "Error: no character type selected." << endl;
            return "";
        }

        string password = "";

        // G�n�re le mot de passe caract�re par caract�re
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
// Mystere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



char pickLetter(string& word) {
    srand(time(0));

    int position = rand() % word.size();

    char leter = word.at(position);

    word.erase(position, 1);

    return leter;
}

string mixWord(string& word, string& mixed) {
    if (word.size() == 0) {
        return mixed;
    }
    else {
        char randomLetter = pickLetter(word);
        mixed = mixed + randomLetter;
        return mixWord(word, mixed);
    }
}


bool guess(string motMystère) {
    cout << "Joueur 2, trouve le mot : ";
    string userGuess;
    cin >> userGuess;
    return userGuess == motMystère;
}

int main()
{
    string motMystère;

    cout << "Joueur 1, saisissez un mot mystère :" << endl;

    cin >> motMystère;

    string motAMélanger = motMystère;
    string motMélangé;
    mixWord(motAMélanger, motMélangé);

    cout << "Le mot mélangé est : " << motMélangé;

    bool trouvé = false;

    while (!trouvé) {
        trouvé = guess(motMystère);
    }

    cout << "Félicitations ! Le mot mystère était " << motMystère;

    return 0;
}

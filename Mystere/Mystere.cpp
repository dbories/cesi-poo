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

   /* std::string pause;
    std::cin >> pause;*/

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

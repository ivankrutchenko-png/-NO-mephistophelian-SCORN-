#include <iostream>
#include <vector>
#include <string>

struct GreekTerm {

    std::string greek;
    std::string transliteration;
    std::string meaning;
    std::string author;

};


void displayTerm(const GreekTerm& term)
{
    std::cout << "Greek Term: " << term.greek << "\n";
    std::cout << "Transliteration: " << term.transliteration << "\n";
    std::cout << "Meaning: " << term.meaning << "\n";
    std::cout << "Associated Author: " << term.author << "\n";
    std::cout << "-----------------------------\n";
}


int main()
{

    std::vector<GreekTerm> lexicon = {

        {
            "προχέω",
            "procheō",
            "To pour forth; to flow forth",
            "Cyril of Alexandria"
        },

        {
            "ἐκπορεύω",
            "ekporeuō",
            "To proceed",
            "John 15:26"
        },

        {
            "προϊέναι",
            "proienai",
            "To go forth",
            "Greek theological usage"
        }

    };


    std::cout << "=== Greek Patristic Lexicon ===\n\n";


    for (const auto& term : lexicon)
    {
        displayTerm(term);
    }


    return 0;
}

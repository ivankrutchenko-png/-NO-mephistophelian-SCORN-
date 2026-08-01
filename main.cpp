#include <iostream>
#include <vector>
#include <string>

struct GreekTerm {
    std::string word;
    std::string meaning;
    std::string source;
};

int main() {

    std::vector<GreekTerm> lexicon = {

        {
            "προχέω",
            "To pour forth; used to describe the Spirit being poured forth.",
            "Cyril of Alexandria"
        },

        {
            "ἐκπορεύω",
            "To proceed; associated with the Spirit's procession from the Father.",
            "John 15:26"
        }

    };


    std::cout << "Greek Patristic Lexicon\n";
    std::cout << "=======================\n\n";


    for (const auto& term : lexicon) {

        std::cout << "Greek Term: "
                  << term.word << "\n";

        std::cout << "Meaning: "
                  << term.meaning << "\n";

        std::cout << "Source: "
                  << term.source << "\n\n";
    }


    return 0;
}

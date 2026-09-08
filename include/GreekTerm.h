#pragma once

#include <string>

// Semantic classifications reflecting Cyril's distinctions
enum class ModeOfOrigin {
    HYPOSTATIC_CAUSE,        // Father as sole aitia/arche (ekporeusis)
    ESSENTIAL_COMMUNICATION, // Consubstantiality / homoousion (procheo, proienai)
    ECONOMIC_MISSION         // Temporal sending / sanctification[cite: 1]
};

enum class Preposition {
    EK,   // "out of" (source/cause when applied hypostatically)
    DIA,  // "through" (mediation of manifestation/flow)[cite: 1]
    PARA  // "from the side of / alongside"[cite: 1]
};

struct LinguisticAssertion {
    std::string greekVerb;        // e.g., "προχεῖται", "ἐκπορεύεται"[cite: 1]
    std::string sourceAuthor;     // "Cyril of Alexandria" or "Theodoret of Cyrus"[cite: 1]
    std::string citation;         // e.g., "De adoratione 1 (PG 68:148)"[cite: 1]
    Preposition prep;             // EK vs DIA[cite: 1]
    ModeOfOrigin originMode;
    std::string subject;          // "Holy Spirit"[cite: 1]
    std::string target;           // "Father" or "Son"[cite: 1]
};

# Patristic Semantics: Formal Computational Ontology for Greek Pneumatological Lexicons

[![C++20](https://img.shields.io/badge/C%2B%2B-20-blue.svg)](https://en.cppreference.com/w/cpp/20)
[![Domain](https://img.shields.io/badge/Domain-Computational_Philology-darkgreen.svg)](#)
[![Status](https://img.shields.io/badge/Status-Formal_Model_Validated-orange.svg)](#)

A discrete computational semantics and relational ontology engine implemented in modern C++20. This engine formalizes, disambiguates, and audits Greek patristic terminology across 5th-century Trinitarian debates, specifically isolating the asymmetry between Alexandrian essential-communicative idioms and Antiochene hypostatic-causal constraints.

---

## 1. Problem Space: The Semantic Collapse in Translation

Historical-theological scholarship has established that Latin translations collapsed distinct Greek operational verbs into singular terms (e.g., translating both *ἐκπορεύεσθαι* and *προϊέναι* into *procedere*). This lexical flattening obscured structural distinctions carefully maintained in the original texts:

```text
[Greek Distinction]
  ├── ἐκπόρευσις (ekporeusis) ──> Father as Sole Aitia / Arche (Hypostatic Origin)
  └── προχεῖν    (prochein)    ──> Substantial Flow through the Son (Consubstantiality / Ousia)

[Latin Translation Collapse]
  └── procedere ───────────────> Conflates Hypostatic Cause with Essential Communication

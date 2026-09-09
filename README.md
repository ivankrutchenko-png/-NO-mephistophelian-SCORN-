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
This engine models these lexical structures using strict type-level invariants, preventing historical semantic conflations programmatically[cite: 1].

---

## 2. Linguistic Framework & Formal Taxonomy

The system enforces categorical typing across three primary dimensions:

### A. Asymmetric Verb Distribution
* **γεννάω / γέννησις (Beget / Generation):** Reserved exclusively for the Father generating the Son[cite: 1]. Cyril does not symmetrically apply "pouring forth" (προχέω) to the generation of the Son[cite: 1].
* **ἐκπορεύεσθαι / ἐκπόρευσις (Proceed / Procession):** Strictly reserved for the Spirit’s hypostatic origin from the Father as the unique, ultimate source (αἰτία)[cite: 1].
* **προχέω (προχεόμενον / προχεῖται) & προϊέναι (Flow / Pour Forth / Go Forth):** Employed flexibly for essential communication, the *homoousion*, and the inseparable unity of operation—the Spirit flowing essentially from the Father through the Son (ἐκ Πατρὸς δι' Υἱοῦ) without positing a secondary hypostatic cause[cite: 1].

### B. Prepositional Governance
* **ἐκ (Ek - Out of):** Governs originative cause when applied to personal hypostasis (ἐκ τοῦ Πατρός)[cite: 1].
* **διά (Dia - Through):** Governs essential manifestation and economic mission (δι' Υἱοῦ)[cite: 1].

---

## 3. Algorithmic Invariant: The Theodoret Compatibility Check

The engine programmatically encodes the dispute surrounding Cyril of Alexandria's Ninth Anathema and Theodoret of Cyrus's critique (*Reprehensio duodecim anathematismorum*), as reconciled in the Formula of Reunion (433 AD) and Epistle 171[cite: 1].

Let an assertion $A$ be defined as the tuple:
$$A = \langle V, P, M, S, T \rangle$$
where:
* $V \in \text{Verbs}$ (e.g., προχεόμενον, ἐκπορεύεται)[cite: 1]
* $P \in \{\text{ἐκ}, \text{διά}, \text{παρά}\}$[cite: 1]
* $M \in \{\text{Hypostatic Cause}, \text{Essential Flow}, \text{Economic Mission}\}$[cite: 1]
* $S \in \text{Persons}$ (Subject)[cite: 1]
* $T \in \text{Persons}$ (Target)[cite: 1]

$$\text{TheodoretAudit}(A) = \begin{cases}  \text{REJECTED} & \text{if } T = \text{Son} \land M = \text{Hypostatic Cause} \\ \text{PASSED} & \text{otherwise} \end{cases}$$

This formal rule ensures that assertions positing the Spirit having personal existence out of or through the Son (ἐξ Υἱοῦ ἢ δι' Υἱοῦ τὴν ὕπαρξιν ἔχον) are identified as non-compliant with historical patristic criteria, while consubstantial and economic formulas pass verification[cite: 1].

---

## 4. Architecture & System Layout

```text
├── include/
│   └── GreekTerm.h         # Formal enum typing & semantic assertion structs
├── src/
│   └── main.cpp            # Execution pipeline, AST instantiation & audit engine
├── data/
│   └── cyril_terms.txt     # Structured patristic corpus excerpts & loci
└── README.md               # Theoretical specification & operational manual
```
---

## 5. Output Verification Trace

Running the C++ verification pipeline yields the structured audit log:

```text
=======================
 PATRISTIC SEMANTIC AUDIT: CYRIL vs. THEODORET
=======================
Citation: De adoratione 1 (PG 68:148)
Author:   Cyril of Alexandria
Formula:  Holy Spirit [προχεόμενον] διά Son
Theodoret Antiochene Compatibility Check: PASSED (Orthodox/Consubstantial)
--------------------------------------------------------
Citation: Apologia contra Theodoretum
Author:   Cyril of Alexandria (citing John 15:26)
Formula:  Holy Spirit [ἐκπορεύεται] ἐκ Father
Theodoret Antiochene Compatibility Check: PASSED (Orthodox/Consubstantial)
--------------------------------------------------------
Citation: Reprehensio duodecim anathematismorum
Author:   Hypothetical Filioquist Error (contested by Theodoret)
Formula:  Holy Spirit [ἔχον τὴν ὕπαρξιν] ἐκ Son
Theodoret Antiochene Compatibility Check: REJECTED (Alleges Cause from Son)
--------------------------------------------------------

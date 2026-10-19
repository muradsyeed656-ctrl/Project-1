
# Project-1 | Architecting Industry-Standard C++ Repository

## BLUF (Bottom-Line-Up-Front)
This repository transforms a raw 2nd-semester C++ inheritance lab into a production-ready, self-documenting open-source project using Person and Student classes. It is architected so a remote team can clone, build, and verify the inheritance logic in under 60 seconds with zero verbal clarification.

## Mission
Transform a raw, undocumented 2nd-semester programming project into an industry-standard open-source repository that passes the Cambridge-Style Blind Usability Protocol (Developer A -> NO TALKING -> Developer B).

## Architecture
We follow BLUF with modular sections. Instead of burying details in long paragraphs:

- *Module 1 - Base:* Person class encapsulates core identity (name, age) with protected access for extension.
- *Module 2 - Derived:* Student class inherits publicly from Person and extends with roll_no, demonstrating code reusability.
- *Module 3 - Verification:* Isolated MWE proves the contract without running the entire application.

Amateur = "Trust me, it works."
Global Standard = Provides verifiable, copy-pasteable blocks.

## Dependencies
*Explicitly Listed:*

- *Operating System:* 
    - Windows 10 / 11 (with MinGW or Dev C++ 6.3+)
    - Linux - Ubuntu 20.04 LTS or higher
    - macOS 12 Monterey or higher

- *Language & Toolchain:*
    - Language: C++17 Standard
    - Compiler: GNU g++ 9.0+ / clang++ 10.0+
    - Git: 2.20+ for cloning

## Project Structure
```
Project-1/
├── personclassinheritiance.cpp  # Main source file
├── README.md                    # Industry-standard documentation
└── LICENSE                      # MIT License
```

## Installation - 3-Step Imperative Block
**Step 1: Clone the repository**
```bash
git clone https://github.com/muradsyeed656-ctrl/Project-1.git
```

**Step 2: Navigate to project**
```bash
cd Project-1
```

**Step 3: Compile and Execute**
```bash
g++ personclassinheritiance.cpp -o student_demo && ./student_demo
```

## Verification - Minimal Working Example (MWE)
Isolated 3-line MWE:

```cpp
Student s1("RAZA:", 35, 12);
s1.showdata();
```

**Expected Output:**
```
NAME:RAZA:
AGE:35
ROLL NO:12
```



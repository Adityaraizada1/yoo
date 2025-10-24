# yoo — C project

Simple, opinionated starter for a small C project.

## Description
Minimal C project layout with a Makefile, headers, source files, and tests. Each file includes a short header comment describing purpose and usage.

## Table of contents
- [Getting started](#getting-started)
- [Build & run](#build--run)
- [Project structure](#project-structure)
- [Makefile targets](#makefile-targets)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Getting started
Prerequisites
- C compiler (gcc or clang)
- make (optional, recommended)
- Optional: a unit test framework (Unity, CUnit, etc.)

Open the repository and inspect files. No additional runtime setup required.

## Build & run
Build with Make (preferred):
```bash
make            # builds binaries into bin/
```
Or compile manually:
```bash
gcc -Wall -O2 -Iinclude -o bin/yoo src/main.c src/utils.c
```
Run:
```bash
./bin/yoo [args]
```

## Project structure
Example layout and what each file "says" (short description included in file headers):

/ (root)
- Makefile
    - Declares build rules: default build, clean, test, install.
- README.md
    - Project overview and usage notes.

src/
- main.c
    - Entry point. Parses CLI args, initializes subsystems, calls run().
    - Typical header comment: "main.c — program entry; usage: ./yoo [options]".
    - Typical content: int main(int argc, char **argv) { /* parse args */ /* call app */ }
- utils.c
    - Helper implementations (string ops, logging, small utilities).
    - Header comment describes exported functions and error behavior.

include/
- utils.h
    - Declarations matching utils.c with brief comments for each function.
    - Example comment: "int safe_parse_int(const char *s, int *out) — returns 0 on success."

tests/
- test_main.c
    - Unit tests for core functions (uses chosen test framework).
    - Header comment: "Contains test cases for main app logic."

bin/
- (build outputs go here, not committed)

docs/
- DESIGN.md
    - Short rationale and API notes.

Example header comment inside src/main.c:
```c
/*
 * main.c — Entry point for Yoo app
 * Usage: ./yoo [--help] <input>
 * Initializes subsystems and runs the main processing loop.
 */
```

## Makefile targets
- all / default — build executable
- clean — remove build artifacts
- test — run unit tests
- install — optional installation step

## Contributing
1. Fork the repo.
2. Create a feature branch.
3. Add tests for new behavior.
4. Run `make` and `make test`.
5. Open a pull request with a concise description.

## Contact
Open an issue in the repository for questions or bug reports.

# CS50x - Harvard's Introduction to Computer Science

This repository documents my journey through Harvard University's CS50x: Introduction to Computer Science course, taught by the esteemed David J. Malan. It serves as a personal record of my progress, understanding, and solutions to the problem sets (PSets) assigned throughout the course.

## Repository Structure

The repository is organized by problem set, with each problem set having its own dedicated directory. Within each problem set directory, you will find:

-   **Problem Descriptions:** (Where applicable, links or brief descriptions of the problem)
-   **Solution Code:** My C source code files (`.c`) for each problem.
-   **Compiled Binaries:** Executable files generated after compiling my solutions.

## Contents

-   **`pset01/`**: Solutions and files for Problem Set 1.
    -   `cash/`: Implementation of a greedy algorithm for change.
    -   `credit/`: Implementation of Luhn's algorithm for credit card validation.
    -   `mario-less/`: Implementation of a less comfortable Mario pyramid.
    -   `mario-more/`: Implementation of a more comfortable Mario pyramid.
    -   `me/`: A simple "hello, world" program.
-   **`tests/`**: Contains various test programs and utilities.

## How to Navigate

Each problem set is contained within its respective `psetXX` directory. To view a specific problem's solution, navigate into its directory. For example, to see the `cash` problem from `pset01`:

```bash
cd pset01/cash
```

## Compiling and Running C Programs

To compile any `.c` file in this repository, you can use `clang` or `gcc`. For example:

```bash
clang -o cash cash.c -lcs50
./cash
```

Note: The `-lcs50` flag links against the CS50 library, which might be required for some problems. Ensure you have the CS50 library installed in your environment if you plan to compile and run these programs outside of the CS50 IDE.

## My Learning Journey

This repository reflects my learning process. Solutions may evolve as my understanding deepens. Feedback and suggestions are welcome!

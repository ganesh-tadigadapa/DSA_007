# DSA_007

**My daily DSA practice log in C++: LeetCode solutions and Striver sheet exercises.**

![C++](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)
![LeetCode](https://img.shields.io/badge/LeetCode-FFA116?logo=leetcode&logoColor=black)

## What is it?

This repo is where I keep the problems I solve while learning data structures and algorithms.

- The `LeetCode/` folder is filled automatically. When I get an accepted solution on LeetCode, my Chrome extension [Leetcode_extension](https://github.com/ganesh-tadigadapa/Leetcode_extension) commits it here, sorted into a folder by topic. That is why most commits look like `Add LeetCode: 1 Two Sum`.
- `1st_striver.cpp` holds my early practice programs from Striver's DSA sheet, written by hand.

## What's inside

### LeetCode solutions (13 in total)

| Folder | Solutions | Problems |
|---|---|---|
| `LeetCode/Arrays/` | 9 | 1 Two Sum, 27 Remove Element, 75 Sort Colors, 169 Majority Element, 189 Rotate Array, 283 Move Zeroes, 485 Max Consecutive Ones, 896 Monotonic Array, 1929 Concatenation of Array |
| `LeetCode/Binary_Search/` | 1 | 268 Missing Number |
| `LeetCode/Bit_Manipulation/` | 1 | 136 Single Number |
| `LeetCode/Two_Pointers/` | 2 | 125 Valid Palindrome, 541 Reverse String II |

Each file is named `<problem number>_<Problem_Name>.cpp` and contains the `class Solution { ... }` exactly as submitted on LeetCode.

### Striver sheet practice (`1st_striver.cpp`)

Small array programs, each one a full `main()` program:

- largest element
- smallest element
- second largest element
- check if an array is sorted
- remove duplicates (brute force, then an optimized version)
- left rotate by 1 element
- left rotate by d places

Every program in this file is commented out, so you uncomment the one you want to run.

## Tech stack

- C++ (uses the STL, e.g. `vector`)
- LeetCode + the [Leetcode_extension](https://github.com/ganesh-tadigadapa/Leetcode_extension) Chrome extension to sync solutions

## How to run

**LeetCode solutions:** these files have only the `Solution` class, with no `#include` lines and no `main()`, the same way LeetCode expects them. To run one, paste it into the problem's page on LeetCode. To run it on your computer, add `#include <bits/stdc++.h>`, `using namespace std;` and a small `main()` that calls the method.

**Striver programs:** uncomment the program you want in `1st_striver.cpp`, then:

```sh
g++ 1st_striver.cpp -o 1st_striver
./1st_striver
```

## Project structure

```
DSA_007/
├── LeetCode/
│   ├── Arrays/             9 solutions
│   ├── Binary_Search/      1 solution
│   ├── Bit_Manipulation/   1 solution
│   └── Two_Pointers/       2 solutions
└── 1st_striver.cpp         Striver sheet practice programs (commented out)
```

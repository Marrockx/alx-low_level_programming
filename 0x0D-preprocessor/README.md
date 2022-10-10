# 0x0D-preprocessor

## Tasks
### Mandatory
- [x] **[0. Object-like Macro](0-object_like_macro.h)**
- [x] **[1. Pi](1-pi.h)**
- [x] **[2. File name](2-main.c)**
- [x] **[3. Function_like Macro](3-function_like_macro.h)**
- [x] **[4. SUM](4-sum.h)**
## Resource Links
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [C Preprocessor and Macros](https://www.programiz.com/c-programming/c-preprocessor-macros)
- [Include Guards - Avoid Double Inclusion](https://en.wikipedia.org/wiki/Include_guard)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Advanced preprocessor tips and tricks](https://www.iar.com/sv/knowledge/learn/programming/advanced-preprocessor-tips-and-tricks/)
- [Stack Overflow - IFNDEF MACROS](https://stackoverflow.com/questions/42604374/do-ifdef-ifndef-and-undef-work-with-function-like-macros)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)
## My Thoughts
Still working on how to avoid double inclusion for function-like macros
- [x] done => had to add ifndef with filename in UPPERCASE and define filename with UPPERCASE then endif

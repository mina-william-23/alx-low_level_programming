# 0x09. C - Static libraries
## Resources
* [What Is A “C” Library? What Is It Good For?](./https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
* [Creating A Static “C” Library Using “ar” and “ranlib”](./https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
* [Using A “C” Library In A Program](./https://intranet.alxswe.com/rltoken/XB1iH0qE6gshx0x8TfRAPQ)
* [What is difference between Dynamic and Static library(Static and Dynamic linking)](./https://intranet.alxswe.com/rltoken/PexOGO-npR_ZDQk-SpOR9g)
* ar, ranlib, nm
## Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use [_putchar](./https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push 'putchar.c', we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
## **Tasks**
* ### [0. A library is not a luxury but one of the necessities of life](./libmy.a)
    > Create the static library libmy.a containing all the functions listed below: Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.
* ### [1. Without libraries what have we? We have no past and no future](./create_static_lib.sh)
    > Create a script called 'create_static_lib.sh' that creates a static library called liball.a from all the .c files that are in the current directory.

# K&R Learning/Unit Tests
This is a repo of my learning of C with the book "The C Programming Language" by Brian W. K. and Dennis M. R..The solutions in this repo are my own solutions to the examples written in the book, and may include code segments from the book as well (I will do my best to note these). 

This is additionally meant as a repo to provide test and background knowledge for anyone looking to better understand the examples in K&R. This is because a lot of the examples require some additional knowledge that is assummed to be known that is not included in the book, ie. what tab is really under the hood, two's compilment, binary knowledge (that if you are like me may have forgotten since school) etc. I have included links, and basics in the notes section of each chapter to try to help cover those.

***THIS IS A WIP***
My aim is to have this be a repo for anyone new to C to be able to better understand the examples, as well as learn the needed prerequesites efficently. These exercises are not easy, but I highly reccomend you do as many as you can, they have helped me improve not only in C but also in how I think about problems.

## Dependencies
I used [Check](https://libcheck.github.io/check/doc/check_html/index.html) as the unit testing framework for my exercises. Installation is pretty simple and if you are using Arch it is avaliable in the AUR.

That's it really. I do make use Make, but no CMake or additional build tooling (yet). So this should be pretty simple for anyone to extend even without much knowledge on build tooling or things outside of just the C discussed in K&R (which is kind of the point of me providing this in the first place)

### Structure
The structure of each Chapter dir is as follows:
```
Chapter_X
├── include
│   ├── related.h
│   └── anotherrelated.h
├── Makefile
├── notes
│   ├── topic1.c
│   ├── topic2.txt
│   └── topic3.md
├── src
│   ├── Exercise_X_1.c
│   └── Exercise_X_2.c
├── src_for_user
│   ├── Exercise_X_1.c
│   └── Exercise_X_2.c
└── test
    └── test.c
```
***Note on SRC***

You may notice something odd, there are two src directories. src is my own implemnetations and have all the answers. ***src_for_user*** has all of the boiler plate, but allows you to implement them for yourself!
To test against them you will need to open the Makefile in the chapter and replace 'SRC_DIR = src' with:

```bash
SRC_DIR = src_for_user
```
That's it !

You can swap back ot src to test against my own implementations. This should be set to test against your own implementations,otherwise if it is src you will be testing mine, which is not helpful if you are learning lol.

### Running the test

My assumption is that the reader of this has limited knowledge on Make so I will be a bit verbose here.

To run your implementations written in the src_for_user dir against the test, simply cd into the chapter directory you want to test, and then run Make:

```bash
    cd Chapter_2
    make
```

the make command, will generate a chapter test all exercises in the chapter. Said test for chapter 2 would be called: 'chapter2_test' and to run the test for the chapter simply run:

```bash
./chapter2_test
```

***I do plan to implement a way to test one exercise at a time, but rn I have a few more things to work on (like finishing this book)***

to get ride of the object files use:

```bash
make clean
```
***Note on Make***
Make is pretty useful, and CMake even more so, after you finish K&R I would highly suggest you familarize yourself with [Make](https://makefiletutorial.com/) and [CMake](https://cmake.org/). Stuck to only Make as I wanted things to be as simple as possible for someone learning C for the first time, and Make even without much knowledge on it, is pretty simple to follow and extend for a simple project like this. Although my intention for this is to make it so that you will not need to touch Make at all while learning C. One thing at a time c:

Make sure you have no spaces after any of the dirs...trust me lol

## Credit
Kernighan, B. W., & Ritchie, D. M. (1988). The C programming language (2nd ed.). Prentice Hall.

### License
This project is licensed under the MIT License.

# Rock_Paper_Scissors

This is a simple command-line rock, paper, scissors game. Written fully in C++, this is essentially a stab at using concepts learnt in C++ in a real situation. 

## The game
The game allows you to play against the computer by selecting one of three options: namely "rock", "paper", "scissors". The computer randomly picks one of these options presented, and the program determines whether the player won, lost or drew with the computer. 

## Download Instructions
### 1. Clone Repo:
```
git clone https://github.com/oudeagle/Rock_Paper_Scissors.git
```
Or download the source code as a ZIP file and extract it.

### 2. Compile the program
Use a C++ compiler (like 'g++') to compile the source code. (I personally g++, so I recommend you do the same):
```
g++ -std=c++20 -o Rock_Paper_Scissors rock_paper_scissors.cpp
```
> [!NOTE]
> I have used the formatting library which is exclusive to c++20 and upward. So you **need** to have option **-std=c++20** otherwise it won't work.

### 3. Execute the program
Execute the now compiled program:
```
./Rock_Paper_Scissors
```


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
### 4. Enter Your Choice:
The program will prompt you to enter either 'rock', 'paper' or 'scissors'. Type your choice and press Enter.
### 5. View the Result:
The program will compare your choice with the computer's choice and display the result, which could be either "You Win!!", "You Lose!!", or "DRAW!!"

### Example Output:
```
Enter either rock, paper or scissors: 
rock
You Lose!!

```
## Some Interesting Notes
- The program uses the srand(time(NULL)); function to seed the random number generator, ensuring that the computer's choice is different each time the game is played.
- User input is case-insensitive; the program converts all user input to lowercase before processing.
- If an invalid input is entered, the program will output "Invalid Input" and end the game.

## Requirements
- A C++ Compiler (g++ recommended)
- Basic knowledge of C++ and a command-line interface.




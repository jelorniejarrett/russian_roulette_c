# Russian Roulette (C Command Line Game)

A simple **command-line Russian Roulette game written in C**.
The game simulates a revolver with **7 chambers and 3 bullets** where the player and an AI opponent take turns deciding whether to **shoot or pass the gun**.

The objective is to survive while forcing the opponent to pull the trigger on a loaded chamber.

---

## Features

* Random bullet placement in a 7-chamber revolver
* Turn-based gameplay (Player vs Computer)
* Player choices:

  * **Shoot**
  * **Pass the gun**
* AI opponent that randomly decides actions
* Game ends when a loaded chamber is fired

---

## How the Game Works

1. The revolver cylinder contains **7 chambers**.
2. **3 bullets are randomly placed** in the cylinder at the start of the game.
3. The player chooses to:

   * **Shoot** (pull the trigger)
   * **Pass** the gun to the opponent
4. If a bullet is in the current chamber when the trigger is pulled, that player **loses the game**.
5. The chamber rotates after each turn.
6. The game continues until someone fires a loaded chamber.

---

## Technologies Used

* **C Programming Language**
* Standard C libraries:

  * `stdio.h`
  * `stdlib.h`
  * `time.h`

---

## How to Run the Program

### 1. Clone the Repository
```bash
https://github.com/jelorniejarrett/russian_roulette_c
```

### 2. Navigate to the Project Folder

```bash
cd russian-roulette-c
```

### 3. Compile the Program

Using GCC compiler:

```bash
gcc russian_roulette.c -o roulette
```

### 4. Run the Game

```bash
./roulette
```

(On Windows you may run:)

```bash
roulette.exe
```

---

## Example Gameplay

```
=== Russian Roulette ===
3 bullets in a 7 chamber revolver.
1 = Shoot | 2 = Pass

Your turn: 1
You pull the trigger...
Click! Empty chamber.

Opponent's turn...
Opponent shoots...
Click! Opponent survived.

Your turn:
```



---

## Concepts Demonstrated

This project demonstrates several important programming concepts:

* Arrays
* Random number generation
* Game loops
* Conditional logic
* Player vs AI gameplay
* Turn-based mechanics

---

## Future Improvements

Future enhancements could include:

* Adding multiple difficulty levels for the AI
* Implementing a graphical interface
* Tracking player statistics
* Allowing configurable number of bullets and chambers


## Author

Jelornie Jarrett

Computer Science / Programming Student
Project created as a learning exercise in Python programming.

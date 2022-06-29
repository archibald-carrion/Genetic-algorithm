# Genetic-Algorithm

## Preview of the project
In this project i will development different genetic algorithm that allow us to solve some basic problem.
Most of the time, the genetic algorithms are used to solve optimization problems.
### The Basic_genetic_algorithm
In this genetic algorithm I use a population of random numbers to find the square root of a given number.
The "difficulty" must be given as a float number, this way if the difficulty is 0.01, the algorithm evolve util the best cantidate square root multiplied by himself have a difference to the given number inferior or iqual to 0.01.

## To-do list
- [ ] finish Creature.h abstract struct
- [ ] finish a functional Algorithm class

## Usefull command line
Use the following command to compile the code on Windows
```
g++ -o algo *.cpp
```
For the moment the code doesn't need parameter at the momento of the execution, so we can easily execute the code with the following command line
```
algo.exe
```
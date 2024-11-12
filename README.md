/*  Project 2
    Name: Stephany Murillo Munoz and Andrewdai Truong
    Algorithm 1: Trick-or-Treat House Wait Times
    Class: CPSC-335-06
-------------------------------------------------------*/

## Executing Instruction
<p>
After cloning or copying the files into Visual Studio Code... <br>
1. use command "g++ -o [any_name_here] algo1.cpp" or "g++ -o [any_name_here] algo2.cpp" to make it an executable. <br>
2. then use command "./[any_name_here]" <br>
3. to remove the .exe file, use "rm [any_name_here].exe" <br>
Note: Do not include brackets when running the commands. You can type any name you want for <br> "[any_name_here]"
</p>

## Algorithm 1: Trick-or-Treat House Wait Times
<p>
As you go trick-or-treating on Halloween night, you visit a series of houses in a
neighborhood, each offering a different amount of candy. You have an array
houseCandies, where houseCandies[i] represents the amount of candy available at the
[i]th house you visit.

Your goal is to return an array waitHouses such that waitHouses[i] is the number of
houses you have to visit after the [i]th house to find one that offers more candy. If there is
no future house with more candy, set waitHouses[i] = 0

Input: A positive integer array houseCandies where each element represents the candy
available at each house.

Output: A positive integer array waitHouses where each element represents the number
of houses to wait until encountering a house with more candy, or 0 if no such house
exists.
</p>

**Sample 1:**
<br> Input: houseCandies = [3, 5, 8, 2, 1, 4, 10, 6]
<br> Output: waitHouses = [1, 1, 4, 2, 1, 1, 0, 0] <br>

**Sample 2:** 
<br> Input: houseCandies = [2, 4, 6, 9]
<br> Output: waitHouses = [1, 1, 1, 0] <br>

**Sample 3:** 
<br> Input: houseCandies = [7, 9, 8, 5, 11] 
<br> Output: waitHouses = [1, 3, 2, 1, 0] <br>

**Optional Constraint :** 
<br>Can you solve the problem in linear time complexity?
<br></p>

## Algorithm 2: Haunted House Duplicate Clues
<p>
You're exploring a haunted house with a series of spooky rooms, each room containing a single clue represented by a unique number. All rooms are connected in a chain-like
structure, forming a linked list where each room points to the next one.

Due to the haunted nature of the house, one of the clues is duplicated, and it’s causing
you to keep looping back to that clue. This loop traps you in the haunted maze! Your goal
is to find the duplicate clue so you can escape the endless cycle.
You are given the head of a linked list, rooms, where:
1. Each node in rooms has a value(clue) in the range [1, n], where n is the number of rooms.
2. The list has n + 1 nodes (with n unique clues and 1 duplicate). </p>

<p>Input:
<br> rooms = The head node of a linked list representing the rooms and their clues. Each node
has a value as your clue in the range [1, n], where n is the number of rooms.

Output:
<br> Returns an integer representing the duplicate clue that traps you in the haunted loop.

**Sample 1:**
<br> Input: rooms = [5,3,4,7,7] 
<br> Output: 7 <br>

**Sample 2:** 
<br> Input: rooms = [8,1,8,4,6,5,2] 
<br> Output: 8 <br>

**Sample 3:** 
<br> Input: rooms = [3,3,3,3,3] 
<br> Output: 3 <br>

**Optional Constraint :** 
<br> Can you solve the problem in linear time complexity and constant space? 
<br></p>


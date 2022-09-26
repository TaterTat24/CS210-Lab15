/** lab15functs.h
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 15
 * Purpose: 
 * ===========================================================
 */

#ifndef LAB15FUNCTS_H
#define LAB15FUNCTS_H

/**
* @brief This function will return the index (i.e., an integer) 
         containing the largest value.
* @param arrayIntegers an array of integers
* @param numberElements an int representing the # of elements in the array
* @return This function will return the index (i.e., an integer) 
         containing the largest value.
* @pre numberElements cannot exceed the number of elements in the arrayIntegers.
* @post N/A
*/
int findMaxIndex(const int arrayIntegers[], int numberElements);

/**
* @brief This function will return the number of players over a threshold 
         value for a given threshold and array.
* @param arrayIntegers an array of integers
* @param numberElements an int representing the # of elements in the array  
* @param thresholdValue a threshold value
* @return This function will return the number of players over a threshold 
         value for a given threshold and array.
* @pre numberElements cannot exceed the number of elements in the arrayIntegers.
* @post N/A
*/
int numPlayerOverX(const int arrayIntegers[], int numberElements, int thresholdValue);

/**
* @brief This function returns the index of the player with the max yards per 
         carry, whose # of attempts is greater than the threshold
* @param arrayAttempts an array of attempts
* @param arrayYards an array of yards
* @param numberElements an int representing the # of elements in the attempts and yards array
* @param thresholdValue a threshold value
* @return This function returns the index of the player with the max yards per carry, 
          whose # of attempts is greater than the threshold
* @pre numberElements cannot exceed the number of elements in the arrays.
* @post N/A
*/
int getMaxYardsPerCarryIndex(const int arrayAttempts[], const int arrayYards[], int numberElements, int thresholdValue);

/**
* @brief This function looks at the players whose # of attempts is greater than the 
         threshold, and from them, returns a double containing the maximum yards per per carry.
* @param arrayAttempts an array of attempts
* @param arrayYards an array of yards
* @param numberElements an int representing the # of elements in the attempts and yards array
* @param thresholdValue a threshold value
* @return This function looks at the players whose # of attempts is greater than the threshold, 
          and from them, returns a double containing the maximum yards per per carry.
* @pre numberElements cannot exceed the number of elements in the arrays.
* @post N/A
*/
double getMaxYardsPerCarry(const int arrayAttempts[], const int arrayYards[], int numberElements, int thresholdValue);

#endif
/** lab15.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 15
 * Purpose: In this lab, you will extract statistics from 
 *          National Football League player data. Specifically, 
 *          you will have the 2017 player data on rushing 
 *          attempts, total rushing yards, and touchdowns. 
 * ===========================================================
 */

#include <stdio.h>
#include "football.h"
#include "lab15functs.h"

int main()
{
    // This creates 3 arrays to hold the # of attempts, rushing yards, and touchdowns for NFL players
    int attempts[MAXPLAYERS];
    int yards[MAXPLAYERS];
    int TDs[MAXPLAYERS];

    // This code reads the FBdata2017.txt file, and fills in the data in the attempts, yards, and TDs arrays
    // It also stores the number of players read into the variable, numPlayers
    int numPlayers = readData(attempts, yards, TDs);
    printf("%d players data read.\n", numPlayers);


    // ----------------------------------------------------
    // Exercise 1:  Display Some Data
    // ----------------------------------------------------
    // Display name and # of touchdowns for player 0
    printf("Player ID 0 is %s and he scored %d touchdowns in 2017.\n", getPlayerName(0), TDs[0]);

    // Display name and # of rushing yards for player 122
    printf("Player ID 122 is %s and he rushed for %d yards in 2017.\n", getPlayerName(122), yards[122]);


    // ----------------------------------------------------
    // Exercise 2:  findMaxIndex
    //    - Declare the function in lab15functs.h
    //    - Define the function in lab15functs.c
    //    - THEN, use the function to print the following output
    // ----------------------------------------------------
    // Display the name of the player with the most yards
    int maxYardsPlayer;
    maxYardsPlayer = findMaxIndex(yards, numPlayers);
    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(maxYardsPlayer), yards[maxYardsPlayer]);

    // Display the name of the player with the most TDs in 2017
    int maxTDsPlayer;
    maxTDsPlayer = findMaxIndex(TDs, numPlayers);
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(maxTDsPlayer), TDs[maxTDsPlayer]);


    // ----------------------------------------------------
    // Exercise 3:  numPlayerOverX
    //    - Declare the function in lab15functs.h
    //    - Define the function in lab15functs.c
    //    - THEN, use the function to print the following output
    // ----------------------------------------------------
    // Display the number of players with more than 10 TDs in 2017
    printf("The number of players with more than 10 TDs in 2017 is %d.\n", numPlayerOverX(TDs, numPlayers, 10));

    // Display the number of players with more than 1000 yards in 2017
    printf("The number of players with more than 1000 yards in 2017 is %d.\n", numPlayerOverX(yards, numPlayers, 1000));

    // Display the number of players with more than 100 attempts in 2017
    printf("The number of players with more than 100 attempts in 2017 is %d.\n", numPlayerOverX(attempts, numPlayers, 100));


    // ----------------------------------------------------
    // Exercise 4:  getMaxYardsPerCarryIndex AND getMaxYardsPerCarry
    //    - Declare the functions in lab15functs.h
    //    - Define the functions in lab15functs.c
    //    - THEN, use the functions to print the following output
    // ----------------------------------------------------
    // Display the player with the max yards per carry with > 100 attempts
    int maxYardsPerCarryIndex100;
    maxYardsPerCarryIndex100 = getMaxYardsPerCarryIndex(attempts, yards, numPlayers, 100);
    double maxYardsPerCarry100;
    maxYardsPerCarry100 = getMaxYardsPerCarry(attempts, yards, numPlayers, 100);

    printf("The player with the most yards per carry (>100 attempts) is %s and he had %0.1lf.\n", getPlayerName(maxYardsPerCarryIndex100), maxYardsPerCarry100);
    
    // find the player with the max yards per carry with > 50 attempts
    int maxYardsPerCarryIndex50;
    maxYardsPerCarryIndex50 = getMaxYardsPerCarryIndex(attempts, yards, numPlayers, 50);
    double maxYardsPerCarry50;
    maxYardsPerCarry50 = getMaxYardsPerCarry(attempts, yards, numPlayers, 50);
    
    printf("The player with the most yards per carry (>50 attempts) is %s and he had %0.1lf.\n", getPlayerName(maxYardsPerCarryIndex50), maxYardsPerCarry50);

    // find the player with the max yards per carry with > 10 attempts
    int maxYardsPerCarryIndex10;
    maxYardsPerCarryIndex10 = getMaxYardsPerCarryIndex(attempts, yards, numPlayers, 10);
    double maxYardsPerCarry10;
    maxYardsPerCarry10 = getMaxYardsPerCarry(attempts, yards, numPlayers, 10);
    
    printf("The player with the most yards per carry (>10 attempts) is %s and he had %0.1lf.\n", getPlayerName(maxYardsPerCarryIndex10), maxYardsPerCarry10);

    return 0;
}
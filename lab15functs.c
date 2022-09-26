/** lab15functs.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 15
 * Purpose: 
 * ===========================================================
 */

int findMaxIndex(const int arrayIntegers[], int numberElements) {
    int i;
    int maxValue;
    int maxValueIndex;

    maxValue = arrayIntegers[0];

    for (i = 0; i < numberElements; i++) {
        if (arrayIntegers[i] > maxValue) {
            maxValue = arrayIntegers[i];
            maxValueIndex = i;
        }
    }
    
    return maxValueIndex;
}

int numPlayerOverX(const int arrayIntegers[], int numberElements, int thresholdValue) {
    int i;
    int runningCount = 0;

    for (i = 0; i < numberElements; i++) {
        if (arrayIntegers[i] > thresholdValue) {
            runningCount = runningCount + 1;
        }
    }
    
    return runningCount;
}

int getMaxYardsPerCarryIndex(const int arrayAttempts[], const int arrayYards[], int numberElements, int thresholdValue) {
    int i;
    double maxYardsPerCarry;
    int maxValueIndex;

    maxYardsPerCarry = (arrayYards[0] / arrayAttempts[0]);

    for (i = 0; i < numberElements; i++) {
        if ((((double)arrayYards[i] / (double)arrayAttempts[i]) > maxYardsPerCarry) && (arrayAttempts[i] > thresholdValue)) {
            maxYardsPerCarry = (double)((double)arrayYards[i] / (double)arrayAttempts[i]);
            maxValueIndex = i;
        }
    }
    
    return maxValueIndex;
}

double getMaxYardsPerCarry(const int arrayAttempts[], const int arrayYards[], int numberElements, int thresholdValue) {
    int i;
    double maxYardsPerCarry;

    maxYardsPerCarry = (double)((double)arrayYards[0] / (double)arrayAttempts[0]);

    for (i = 0; i < numberElements; i++) {
        if (((double)((double)arrayYards[i] / (double)arrayAttempts[i] ) > maxYardsPerCarry) && (arrayAttempts[i] > thresholdValue)) {
            maxYardsPerCarry = (double)((double)(arrayYards[i]) / (double)(arrayAttempts[i]));
        }
    }
    
    return maxYardsPerCarry;
}
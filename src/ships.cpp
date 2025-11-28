#include "ships.h"

#include <utility>
#include <iostream>


carrier::carrier(int startSquare, int endSquare) 
{
    int distance = endSquare - startSquare;

    bool consturctionSuccesful = false;

    if (distance == 40 || distance == -40) //proper 5 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 40)
        {
            for (int i = 0; i < 50; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(startSquare+i, false);
            }            
        }
        else
        {
            for (int i = 0; i < 50; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(endSquare-i, false);
            }            
        }        
    } 

    if (distance == 4 || distance == -4) //proper 5 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 4)
        {
            for (int i = 0; i < 5; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(startSquare+i, false);
            }
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(endSquare-i, false);
            }
        }
    }

    
    if (!consturctionSuccesful) {std::cout << "carrier construction failed: bad carrier";}
}


battleship::battleship(int startSquare, int endSquare)
{
    int distance = endSquare - startSquare;

    bool consturctionSuccesful = false;

    if (distance == 30 || distance == -30) //proper 4 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 30)
        {
            for (int i = 0; i < 40; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(startSquare+i, false);
            }            
        }
        else
        {
            for (int i = 0; i < 40; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(endSquare-i, false);
            }            
        }        
    } 

    if (distance == 3 || distance == -3) //proper 4 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 3)
        {
            for (int i = 0; i < 4; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(startSquare+i, false);
            }
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(endSquare-i, false);
            }
        }
    }

    
    if (!consturctionSuccesful) {std::cout << "carrier construction failed: bad battleship";}
}


cruiser::cruiser(int startSquare, int endSquare)
{
    int distance = endSquare - startSquare;

    bool consturctionSuccesful = false;

    if (distance == 20 || distance == -20) //proper 3 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 20)
        {
            for (int i = 0; i < 30; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(startSquare+i, false);
            }            
        }
        else
        {
            for (int i = 0; i < 30; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(endSquare-i, false);
            }            
        }        
    } 

    if (distance == 2 || distance == -2) //proper 3 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 2)
        {
            for (int i = 0; i < 3; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(startSquare+i, false);
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(endSquare-i, false);
            }
        }
    }

    
    if (!consturctionSuccesful) {std::cout << "carrier construction failed: bad cruiser";}
}


submarine::submarine(int startSquare, int endSquare)
{
    int distance = endSquare - startSquare;

    bool consturctionSuccesful = false;

    if (distance == 20 || distance == -20) //proper 3 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 20)
        {
            for (int i = 0; i < 30; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(startSquare+i, false);
            }            
        }
        else
        {
            for (int i = 0; i < 30; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(endSquare-i, false);
            }            
        }        
    } 

    if (distance == 2 || distance == -2) //proper 3 long vertical ships 
    //will give one of these values when subtracting their starting square from the endsqaure.
    {
        consturctionSuccesful = true;
        if (distance == 2)
        {
            for (int i = 0; i < 3; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(startSquare+i, false);
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(endSquare-i, false);
            }
        }
    }

    
    if (!consturctionSuccesful) {std::cout << "carrier construction failed: bad cruiser";}
}


destroyer::destroyer(int startSquare, int endSquare)
{
    int distance = endSquare - startSquare;

    bool consturctionSuccesful = false;

    if (distance == 10 || distance == -10) /*proper 2 long vertical ships will give one of these values when subtracting their starting square from the endsqaure.*/
    {
        consturctionSuccesful = true;
        if (distance == 10)
        {
            for (int i = 0; i < 20; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(startSquare+i, false);
            }            
        }
        else
        {
            for (int i = 0; i < 20; i+=10)
            {
                shipOccupation[i/10] = std::pair<int, bool>(endSquare-i, false);
            }            
        }        
    } 

    if (distance == 1 || distance == -1) /*proper 2 long vertical ships will give one of these values when subtracting their starting square from the endsqaure.*/
    {
        consturctionSuccesful = true;
        if (distance == 1)
        {
            for (int i = 0; i < 2; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(startSquare+i, false);
            }
        }
        else
        {
            for (int i = 0; i < 2; i++)
            {
                shipOccupation[i] = std::pair<int, bool>(endSquare-i, false);
            }
        }
    }

    
    if (!consturctionSuccesful) {std::cout << "carrier construction failed: bad destroyer";}
}

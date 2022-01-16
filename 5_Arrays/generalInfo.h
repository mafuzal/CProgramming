#include <stdio.h>
#include <stdlib.h>

typedef enum Planets
{
    Mercury = 1,
    Venus,
    Earth,
    Mars
} Planets;

static inline Planets getPlanets(int x)
{
    Planets value;
    switch (x)
    {
    case 1:
        value = Mercury;
        break;

    case 2:
        value = Venus;
        break;

    case 3:
        value = Earth;
        break;

    case 4:
        value = Mars;
        break;

    deafult:
        value = Mercury;
        break;
    }

    return value;
}
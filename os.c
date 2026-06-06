#include <stdio.h>

int main()
{

#ifdef _WIN32
    printf("Hello from windows\n");
#elif __linux__
    printf("Hello from linux\n");
#elif __APPLE__
    printf("Hello from MacOS");
#else
    printf("Unknows OS");

#endif
    return 0;
}
#include <stdio.h>

int main() { 
    char name[] = "YourName"; // Replace with the desired name 
    for (int i = 0; i < 100; i++) { // ANSI escape codes for different colors (e.g., red, green, yellow) 
    const char* colors[] = { "\x1b[31m", // Red 
    "\x1b[32m", // Green 
    "\x1b[33m", // Yellow 
    "\x1b[34m", // Blue 
    "\x1b[35m", // Magenta 
    "\x1b[36m" // Cyan 
    };


// Print the name with alternating colors 
printf("%s%s\x1b[0m\n",colors[i % 6], name); 
    } 
return 0; 
}
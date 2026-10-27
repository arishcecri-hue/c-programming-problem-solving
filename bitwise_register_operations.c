
#include <stdio.h>

unsigned char modify_register(unsigned char reg)
{
    // Set bit index 2 (3rd bit)
    reg = reg | (1U << 2);

    // Clear bit index 5 (6th bit)
    reg = reg & ~(1U << 5);

    // Toggle bit index 0 (1st bit)
    reg = reg ^ (1U << 0);

    return reg;
}

int main(void)
{
    unsigned char reg = 0x00;

    unsigned char result = modify_register(reg);

    printf("Original register: 0x%02X\n", reg);
    printf("Modified register: 0x%02X\n", result);
    printf("Modified register (decimal): %u\n",
           (unsigned int)result);

    return 0;
}

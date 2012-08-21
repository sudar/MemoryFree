/**
 * MemoryFree - Arduino library to find out the amount of free memory available.
 *
 * Includes code from the following places
 *
 * Original code from - http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1213583720/19#19
 * Minimum RAM Check from - http://github.com/ribbotson/USB-Host/tree/master/Memory_Free/
 *
 * Author: 
 *
 *   Sudar - <http://sudarmuthu.com> <http://hardwarefun.com>
 *   Refer to http://hardwarefun.com/projects/memory-free
 *
 * License: BeerWare ;)
 *    
 */

#include "MemoryFree.h"

// predefined variables
extern unsigned int __data_start;
extern unsigned int __data_end;
extern unsigned int __bss_start;
extern unsigned int __bss_end;
extern unsigned int __heap_start;
extern void *__brkval;

int memory_min = 0x7FFF; // default bigger value

/**
 * Get the total free memory 
 *
 * @return Available free memory in bytes
 */
int getFreeMemory()
{
    int free_memory;

    if((int)__brkval == 0)
        free_memory = ((int)&free_memory) - ((int)&__bss_end);
    else
        free_memory = ((int)&free_memory) - ((int)__brkval);

    return free_memory;
}

/**
 * Checks for the new minimum memory
 */
void memoryCheck()
{
    int free_memory = getFreeMemory();

    if (free_memory < memory_min) memory_min = free_memory;

    return;
}

/**
 * Get the minimum memory
 */
int getMinMemory()
{
    return memory_min;
}

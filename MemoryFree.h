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

#ifndef	MEMORY_FREE_H
#define MEMORY_FREE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Get the total free memory 
 */
int getFreeMemory();

/**
 * Checks for the new minimum memory
 */
void memoryCheck();

/**
 * Get the minimum memory
 */
int getMinMemory();

#ifdef  __cplusplus
}
#endif

#endif

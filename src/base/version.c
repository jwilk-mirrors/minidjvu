/*
 * version.c - a placeholder for a compiled-in version stamp
 */

#include "../base/mdjvucfg.h"
#include <minidjvu/minidjvu.h>

MDJVU_IMPLEMENT const char *mdjvu_get_version()
{
    return MDJVU_VERSION;
}

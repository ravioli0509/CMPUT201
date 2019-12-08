#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "lcs.h"

void LPS(char pali[], int len);
void EnterSequenceForLPS();
void LCPS(char pali[], int len);

void LPSOutputResult(char pali[], int len);

void EnterSequenceForLPSOutput();

//includes all the prototypes for LPS.c
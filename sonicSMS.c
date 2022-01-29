
//Welcome to the Sonic SMS Engine built from Scratch!
//Please forgive me if there's any bugs.
#include "title.h"

#include <stdlib.h>
#include <string.h>
#include <cv.h>
#include <cvu.h>

#include <stdio.h>

#include "SMSlib.h"
#include "assets.h"


void Start ();
void Update ();

int run = 1;

int main ( void ) 
{
    Start ();
    while (run == 1) { Update(); }
}

void Start ()
{
    printf("You look sussy");
}

void Update () 
{

}



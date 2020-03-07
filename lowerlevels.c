/* filename: lowerlevels.c
   Description:  Demonstrates the process of compilation to execution 

   Step 1.
     translate source code lowerlevels.c into assembly code (lowerlevels.s)
     $ gcc -S lowerlevels.c         # gcc compiler stops after translation phase

   Step 2.
     assemble lowerlevels.s into machine code (lowerlevels.o)
     $ gcc -c lowerlevels.s         # gcc calls assembler 'as' with appropriate flags
   
   Step 3.
     link object code lowerlevels.o into executable (lowerlevels)
     $ gcc -o lowerlevels lowerlevels.o   # gcc calls linker 'ld' with appropriate flags

   Step 4.
     Execute code        #  OS calls the loader
     $ ./lowerlevels           

   Or you can call each program yourself which is a bit of a hassle since
   you have to manually tell the linker what libraries to link in:

   $ gcc -S lowerlevels.c
   $ as -o lowerlevels.o lowerlevels.s
   $ ld /usr/lib/crt1.o  /usr/lib/crti.o /usr/lib/crtn.o  -o lowerlevels lowerlevels.o -lc
   $ ./lowerlevels 

*/

int main()
{
   int x = 5;
   write(1,"hello\n",6);
   return 0;
}

/*

Questions: Modify the program to write a different word to standard out. What was the output? Why?

*/

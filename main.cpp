#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {

  FILE *command;
  command = popen( "gnuplot", "w" ); 
  fprintf( command, "a=-1; b=-2; c=3;" );
  fprintf( command, "plot a*x*x+b*x+c\n");
  fflush( command );

  fgetc(stdin);  
  pclose( command );
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {

  FILE *command;
  //command = _popen( "\"C:\\Program Files\\gnuplot\\bin\\gnuplot\"", "w" ); // XP可用，Vista不行
  command = _popen( "pgnuplot", "w" ); // XP Vista 皆可
  fprintf( command, "a=-1; b=-2; c=3;" );
  fprintf( command, "plot a*x*x+b*x+c\n");
  fflush( command );

  system("PAUSE");
  _pclose( command );
  return 0;
}

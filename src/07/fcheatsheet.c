FILE * fopen ( const char * filename, const char * mode );
int fclose ( FILE * stream );
char * fgets ( char * str, int num, FILE * stream );
int fputs ( const char * str, FILE * stream );
int fprintf ( FILE * stream, const char * format, ... );
int fscanf ( FILE * stream, const char * format, ... );
int fseek ( FILE * stream, long int offset, int origin );
// origin: SEEK_SET - Beginning of file
//         SEEK_CUR - Current position of the file pointer
//         SEEK_END - End of file
long int ftell ( FILE * stream );
int feof ( FILE * stream );
size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );


== fopen ==
#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","w");
  if (pFile!=NULL)
  {
    fputs ("fopen example",pFile);
    fclose (pFile);
  }
  return 0;
}

== fclose ==
#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","wt");
  fprintf (pFile, "fclose example");
  fclose (pFile);
  return 0;
}

== fgets ==
#include <stdio.h>
int main()
{
   FILE * pFile;
   char mystring [100];
   pFile = fopen ("myfile.txt" , "r");
   if (pFile == NULL) perror ("Error opening file");
   else {
     if ( fgets (mystring , 100 , pFile) != NULL )
       puts (mystring);
     fclose (pFile);
   }
   return 0;
}

== fputs ==
#include <stdio.h>
int main ()
{
   FILE * pFile;
   char sentence [256];
   printf ("Enter sentence to append: ");
   fgets (sentence,256,stdin);
   pFile = fopen ("mylog.txt","a");
   fputs (sentence,pFile);
   fclose (pFile);
   return 0;
}

== fprintf() ==
#include <stdio.h>
int main ()
{
   FILE * pFile;
   int n;
   char name [100];
   pFile = fopen ("myfile.txt","w");
   for (n=0 ; n<3 ; n++)
   {
     puts ("please, enter a name: ");
     gets (name);
     fprintf (pFile, "Name %d [%-10.10s]\n",n+1,name);
   }
   fclose (pFile);
   return 0;
}

== fscanf() ==
#include <stdio.h>
int main ()
{
  char str [80];
  float f;
  FILE * pFile;
  pFile = fopen ("myfile.txt","w+");
  fprintf (pFile, "%f %s", 3.1416, "PI");
  rewind (pFile);
  fscanf (pFile, "%f", &f);
  fscanf (pFile, "%s", str);
  fclose (pFile);
  printf ("I have read: %f and %s \n",f,str);
  return 0;
}

== fseek() ==
#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ( "example.txt" , "wb" );
  fputs ( "This is an apple." , pFile );
  fseek ( pFile , 9 , SEEK_SET );
  fputs ( " sam" , pFile );
  fclose ( pFile );
  return 0;
}

== ftell() ==
#include <stdio.h>
int main ()
{
  FILE * pFile;
  long size;
  pFile = fopen ("myfile.txt","rb");
  if (pFile==NULL) perror ("Error opening file");
  else
  {
    fseek (pFile, 0, SEEK_END);   // non-portable
    size=ftell (pFile);
    fclose (pFile);
    printf ("Size of myfile.txt: %ld bytes.\n",size);
  }
  return 0;
}

== feof() ==
#include <stdio.h>
int main ()
{
  FILE * pFile;
  int n = 0;
  pFile = fopen ("myfile.txt","rb");
  if (pFile==NULL) perror ("Error opening file");
  else
  {
    while (fgetc(pFile) != EOF) {
      ++n;
    }
    if (feof(pFile)) {
      puts ("End-of-File reached.");
      printf ("Total number of bytes read: %d\n", n);
    }
    else puts ("End-of-File was not reached.");
    fclose (pFile);
  }
  return 0;
}

== fread() ==
#include <stdio.h>
#include <stdlib.h>
int main () {
  FILE * pFile;
  long lSize;
  char * buffer;
  size_t result;
  pFile = fopen ( "myfile.bin" , "rb" );
  if (pFile==NULL) {fputs ("File error",stderr); exit (1);}
  // obtain file size:
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  rewind (pFile);
  // allocate memory to contain the whole file:
  buffer = (char*) malloc (sizeof(char)*lSize);
  if (buffer == NULL) {fputs ("Memory error",stderr); exit (2);}
  // copy the file into the buffer:
  result = fread (buffer,1,lSize,pFile);
  if (result != lSize) {fputs ("Reading error",stderr); exit (3);}
  /* the whole file is now loaded in the memory buffer. */
  // terminate
  fclose (pFile);
  free (buffer);
  return 0;
}

== fwrite() ==
#include <stdio.h>
int main ()
{
  FILE * pFile;
  char buffer[] = { 'x' , 'y' , 'z' };
  pFile = fopen ("myfile.bin", "wb");
  fwrite (buffer , sizeof(char), sizeof(buffer), pFile);
  fclose (pFile);
  return 0;
}


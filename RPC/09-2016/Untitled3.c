int main()
{
   int   dict_word_count;
   char  dict[100][25];  /* dictionary */
   int   search_word_count, k, j, total_match;
   char  search_word[25];
   int   check_word();
   FILE  *in_fptr, *fopen();

   if ( (in_fptr = fopen("copious.in", "r")) == NULL )
     {
      printf("*** can't open input file *** \n");
      exit();
     }

   /* read in the dictionary words */
   fscanf(in_fptr, "%d\n", &dict_word_count);
   for ( k = 0;  k < dict_word_count;  ++k )
      fscanf(in_fptr, "%s\n", &dict[k][0]);

   /* read in the words to be searched and find the matches */
   fscanf(in_fptr, "%d\n", &search_word_count);
   for ( j = 1;  j <= search_word_count;  ++j )
     {
      fscanf(in_fptr, "%s\n", &search_word[0]);
      printf("Word #%d: %s\n", j, search_word);
      total_match = 0;
      /* check the search_word against every dictionary word */
      for ( k = 0;  k < dict_word_count;  ++k )
         if ( check_word(search_word, dict[k]) )
           {/* search_word matches the current dictionary word */
            ++total_match;
            printf("%s\n", dict[k]);
           }

      printf("Total number of candidate words = %d\n\n", total_match);

     }/* end for */

   if ( fclose(in_fptr) == EOF )
     {
      printf("*** can't close input file *** \n");
      exit();
     }

}/* end main */

/* ************************************************************ */

/* This functions compares two words and returns */
/* whether or not they match.                    */
int check_word(char search_word[], char dict_word[])
{
   int  k;

   if ( strlen(search_word) != strlen(dict_word) )
      /* different lengths; can't match */
      return(0);

   /* compare character by character */
   for ( k = 0;  k < strlen(search_word);  ++k )
      if ( search_word[k] != '-' && search_word[k] != dict_word[k] )
         return(0);

   return(1);

}

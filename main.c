//Block Level project
//Goal: Process "A"
//Then do b,c,d,e,f,g,h

//char array, yay!

#include <stdio.h>

typedef struct BLOCK_LETTER {
char letter;
char block[5][4];
} blockletter;

blockletter a = {
    'a',
    {
      {' ', 'A', 'A', ' '},
      {'A', ' ', ' ', 'A'},
      {'A', 'A', 'A', 'A'},
      {'A', ' ', ' ', 'A'},
      {'A', ' ', ' ', 'A'}
    }

  };
blockletter b = {
    'b',
    {
      {'B', 'B', 'B', ' '},
      {'B', ' ', ' ', 'B'},
      {'B', 'B', 'B', 'B'},
      {'B', ' ', ' ', 'B'},
      {'B', 'B', 'B', ' '}
    }

  };
 blockletter c = {
    'c',
    {
      {' ', 'C', 'C', ' '},
      {'C', ' ', ' ', 'C'},
      {'C', ' ', ' ', ' '},
      {'C', ' ', ' ', 'C'},
      {' ', 'C', 'C', ' '}
    }

  };
 
void print_blockletter(blockletter bl);

int main(void) {

  char userLetter;
  printf("letter? >:");
  scanf("%c", &userLetter);

  if (userLetter == 'a') {
    print_blockletter(a);
  }
  else if (userLetter == 'b') {
    print_blockletter(b);
  }
  else if (userLetter == 'c') {
    print_blockletter(c);
  else {
    print_blockletter(b);

    }
  return 0;
}

void print_blockletter(blockletter bl) {
  //loop through each row
  for (int row = 0; row < 5; row++) {
    //loop through each char in the row
    for (int col = 0; col < 4; col++) {
      printf("%c", bl.block[row][col]);
    }
    printf("\n");
  }
}


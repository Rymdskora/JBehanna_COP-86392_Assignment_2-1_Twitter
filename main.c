#include <stdio.h>
#include <string.h>


int main(void) {
  int maxPostLength = 140;
  int minPostLength = 1;
  
  // If a post is too large this will create a buffer overflow error!
  // And it will not be pretty. Also, this is a pretty Laissez-faire way of doing this. 
  // IT IS NOT GOOD, BUT IT WORKS (until it doesn't, lol)!
  char post[1000];


  printf("Input your message: ");
  scanf("%[^\n]", post);

  
  if (strlen(post) > maxPostLength || strlen(post) < minPostLength) {
    printf("\nRejected.");
  }
  else {
    printf("\nPosted.");
  }
  return 0;
}

#include<stdio.h>
#include<float.h>
#include"FORIntStack.h"
IntStack *top;

  int  main()
  {
	  
	  top->Link =NULL;;
	  long long int  a;
	  
	  
	  
	  while (true)
	  {
		  scanf_s("%ld", &a);
		  if (a < 0)break;
		  if ( !( Push(top, a) ) )
		  {
			  printf("error:buffer is run out ");
			  break;
		  }
		 
	  }

	  Pop(top);
	  

	  return 0;
  }
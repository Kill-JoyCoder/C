#include <stdio.h>
struct myst{
	int i;
	char n;
};  //struct is basically a container to store related variable which can be of different types 

void main(){
	struct myst s1; //<keyword> <struct_name> <struct_var>
	s1.i=18;  //<struct_var>.<struct_member>
	s1.n='A';
	printf("%d", s1.i);
}
//There you go! Basics of struct is complete.

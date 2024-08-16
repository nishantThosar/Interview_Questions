/*Typedef of struct*/

#include <stdio.h>
/*----------------------------- NORMAL STRUCTURE ----------------------------------*/
struct temp
{
	int z;
	int y;
};
/*----------------------------- NORMAL STRUCTURE ----------------------------------*/

/*----------------------------- TYPEDEF STRUCT ------------------------------------*/
typedef struct temp_
{
	int z;
	int y;
}tem2;
/*----------------------------- TYPEDEF STRUCT ------------------------------------*/

void display(struct temp); //function declaration

void display2(tem2); //function declaration with typedef struct
/*------------------------------ MAIN STARTS ---------------------------------------*/
int main(int argc, char const *argv[])
{
	struct temp str_var; //structure variable.
	str_var.z = 10;
	str_var.y = 20;
	display(str_var);

	tem2 struct_var; //struct variable
	struct_var.z = 50;
	struct_var.y = 90;
	display2(struct_var); //another display function has to be made as the struct passing has different name.

	return 0;
}//main ends

/*----------------------------- DISPLAY FUNCTION -----------------------------------*/
void display(struct temp t1)
{
	printf("%d\n",t1.z);
	printf("%d\n",t1.y);
}//display ends

/*----------------------------- DISPLAY2 FUNCTION -----------------------------------*/
void display2(tem2 t1) //display function for typedef function.
{
	printf("%d\n",t1.z);
	printf("%d\n",t1.y);
}//display ends
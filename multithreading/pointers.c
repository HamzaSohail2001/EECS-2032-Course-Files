// so in memory we have two things, one is the the address and the other thing is the value
// 

int x=4 ;
//  so we have assigned the int x = 4 which is stored in the memory for example in the place 0x1000



int * px = &x;
// when we have am asterik * it makes the variable as a pointer type
// then the & sign means "the address of : "
// we initilze another space in the memory which points to the variable x, so it would be in a manner like this:
// 0x1004 -> 0x1000

int y = *px;
 
 
printf("%d",y);
#include<stdio.h>
int first(int);
int second (int);
int third(int);
int main()
{
	int num,temp, n=3;
	int digit[3];
	printf("Enter a 3 digit Number\t");
	scanf("%d",&num);
	while(num!=0)
	{
	temp=num%10;
	digit[n]=temp;
	num=num/10;
	n=n-1;
    }
    //printf("%d",digit[1]);
    //int a=digit[3];
    printf("",third(digit[3]),second(digit[2]),first(digit[1]));
	return 0;
		
}

int first(int a){
if(a>0){

switch(a){
	case 1:
		printf("one hundred ");
		break;
	case 2:
		printf("two hundred ");
		break;
	case 3:
		printf("three hundred ");
		break;
	case 4:
		printf("four hundred ");
		break;
	case 5:
		printf("five hundred ");
		break;
	case 6:
		printf("six hundred ");
		break;
	case 7:
		printf("seven hundred ");
		break;
	case 8:
		printf("eight hundred ");
		break;
	case 9:
		printf("nine hundred ");
		break;
	default:
		printf("Out of bound!!");
		
	}
	}
	else
	printf(" ");	
}

int second(int a){

switch(a){
	case 1:
		printf("ten ");
		break;
	case 2:
		printf("twenty ");
		break;
	case 3:
		printf("thirdty ");
		break;
	case 4:
		printf("fourty ");
		break;
	case 5:
		printf("fivty ");
		break;
	case 6:
		printf("sixty ");
		break;
	case 7:
		printf("seventy ");
		break;
	case 8:
		printf("eighty ");
		break;
	case 9:
		printf("ninety ");
		break;
	default:
		printf(" ");
		
	}
	
}

int third(int a){
switch(a){
	case 1:
		printf("and one");
		break;
	case 2:
		printf("and two");
		break;
	case 3:
		printf("and three");
		break;
	case 4:
		printf("and four");
		break;
	case 5:
		printf("and five ");
		break;
	case 6:
		printf("and six ");
		break;
	case 7:
		printf("and seven ");
		break;
	case 8:
		printf("and eight ");
		break;
	case 9:
		printf("and nine ");
		break;
	default:
		printf(" ");
		
	}	
}



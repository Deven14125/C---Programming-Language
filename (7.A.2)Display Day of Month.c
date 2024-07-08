#include<stdio.h>

int main()
{
	int Month; // 1-Mon,2-Tue,3-Wed,4-Thu,5-Fri,6-Sat,7-Sun
    printf("Enter Month Number (1 to 12) : ");
    scanf("%d",&Month);
    
    switch (Month) { 
    	case 2   :printf("28 Days\n");
                  break;
        case 4   :  
        case 6   : 
        case 9   :
        case 11  :printf("30 Days\n");
                  break;
        case 1   :
        case 3   :
        case 5   :
        case 7   :
        case 8   :
        case 10  :
        case 12  :printf("31 Days");
        		  break;
        default  :printf("not a valid day \n");
        }
    return 0;
}
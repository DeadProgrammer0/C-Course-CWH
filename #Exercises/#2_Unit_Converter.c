#include <stdio.h>


double km_to_mile(double a){
    return a * 0.621371;
}

double inch_to_foot(double a){
    return a * 0.0833333;
}

double cm_to_inch(double a){
    return a * 0.393701;
}

double pound_to_kg(double a){
    return a * 0.453592;
}

double inch_to_metre(double a){
    return a * 0.0254;
}

int main(){
    


    while (1)
    {
        double value;
        printf("\n\nEnter the value for conversion : ");
        scanf("%lf",&value);

        printf("Conversion Program :-\n\n1.kms to miles\n2.inches to foot\n3.cms to inches\n4.pound to kgs\n5.inches to meters\n6.To Quit Program.");
        printf("\n\nEnter the number of the tool you want to use : ");

        int input;
        scanf("%d",&input);
        
        while (input<7)
        {   

            if (input==1)
            {   
                printf("\n%lf Kilometre(s) = %lf Mile(s)",value,km_to_mile(value));
                break;
            }

            if (input==2)
            {   
                printf("\n%lf Inch(s) = %lf Foot(s)",value,inch_to_foot(value));
                break;
            }

            if (input==3)
            {   
                printf("\n%lf Centimetre(s) = %lf Inch(s)",value,cm_to_inch(value));
                break;
            }

            if (input==4)
            {   
                printf("\n%lf Pound(s) = %lf Kilogram(s)",value,pound_to_kg(value));
                break;
            }

            if (input==5)
            {   
                printf("\n%lf Inches(s) = %lf Metre(s)",value,inch_to_metre(value));
                break;
            }

            if (input==6)
            {
                goto end;
            }
            

            scanf("%d",&input);
        }
        
    }
    end: printf("\nProgram Exited.");
    return 0;
}
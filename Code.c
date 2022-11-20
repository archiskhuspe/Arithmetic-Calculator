#include <stdio.h>
#include <math.h>

int main()
{

      int function_code;
      printf("-------------------------\n");
      printf(" 1 --> Area of 2D shapes\n");
      printf(" 2 --> Area of 3D shapes\n");
      printf(" 3 --> Volume of 3D shapes\n");
      printf(" 4 --> Summation of series\n");
      printf(" 5 --> Statistics \n");
      printf("-------------------------\n");
      printf("Enter the Function code\n");
      scanf("%d", &function_code);

      if (function_code == 1)
     {
        int fig_code;
        float side, base, base1, base2, length, breadth, height, area, radius, altitude,diagonal1, diagonal2, surface_area;
    
        printf("-------------------------\n");
        printf(" 1 --> Circle\n");
        printf(" 2 --> Rectangle\n");
        printf(" 3 --> Triangle\n");
        printf(" 4 --> Square\n");
        printf(" 5 --> Parallelogram\n");
        printf(" 6 --> Rhombus\n");
        printf(" 7 --> Trapezium\n");

        printf("-------------------------\n");
        printf("Enter the Figure code\n");
        scanf("%d", &fig_code);

        switch(fig_code)
       {
          case 1:
              printf("Enter the radius of the given Circle: \n");
              scanf("%f", &radius);
              printf("Area of circle is = 3.142 * radius * radius \n");
              area = 3.142 * radius * radius;
              printf("Therefore, Area of a circle = %.3f\n", area);
              break;
          case 2:
              printf("Enter the breadth and length of the given Rectangle: \n");
              scanf("%f %f", &breadth, &length);
              printf("Area of Rectangle is = breadth * length \n");
              area = breadth * length;
              printf("Therefore, Area of a Rectangle = %.3f\n", area);
              break;
          case 3:
              printf("Enter the base and height of the given Triangle: \n");
              scanf("%f %f", &base, &height);
              printf("Area of Triangle is = 0.5 * base * height \n");
              area = 0.5 * base * height;
              printf("Therefore, Area of a Triangle = %.3f\n", area);
              break;
          case 4:
              printf("Enter the side of the given Square: \n");
              scanf("%f", &side);
              printf("Area of Square is = side * side \n");
              area = side * side;
              printf("Therefore, Area of a Square = %.3f\n", area);
              break;
          case 5:
              printf("Enter the base and altitude of the given Parallelogram: \n");
              scanf("%f%f",&base,&altitude);
              printf("Area of Parallelogram is = base * altitude \n");
              area = base * altitude;
              printf("Therefore, Area of Parallelogram= %.3f\n", area);
              break;
          case 6:
              printf("Enter the diagonals of the given Rhombus: \n");
              scanf("%f%f", &diagonal1, &diagonal2);
              printf("Area of Rhombus is = 0.5 * diagonal1 * diagonal2 \n");
              area = 0.5 * diagonal1 * diagonal2;
              printf("Therefore, Area of rhombus is= %.3f\n", area);
              break;
          case 7:
              printf("Enter the value for two bases & height of the Trapezium: \n");
              scanf("%f%f%f", &base1, &base2, &height);
              printf("Area of Trapezium is = 0.5 * (base1 + base2) * height \n");
              area = 0.5 * (base1 + base2) * height ;
              printf("Therefore, Area of the Trapezium is: %.3f", area);
              break;  
          default:
              printf("Error in figure code\n");
              break;
        }
      }

    else if (function_code == 2)
     {
        int fig_code;
        float side, length, breadth, width, radius, height, base_edge, surface_area;

        printf("-------------------------\n");
        printf(" 1 --> Cube\n");
        printf(" 2 --> Cuboid\n");
        printf(" 3 --> Cylinder\n");
        printf(" 4 --> Cone\n");
        printf(" 5 --> Sphere\n");
        printf(" 6 --> Hemisphere\n");
        printf(" 7 --> Hexagonal Prism\n");
        printf(" 8 --> Tetrahedron\n");

        printf("-------------------------\n");
        printf("Enter the Figure code\n");
        scanf("%d", &fig_code);

      switch(fig_code)
       {
          case 1:
              printf("Enter the side of given Cube: \n");
              scanf("%f",&side);
              printf("Surface Area of Cube is = 6 * (side * side) \n");
              surface_area = 6 * (side * side);
              printf("Therefore, Surface area of cube= %.3f",surface_area);
              break;
          case 2:
              printf("Enter value of width, length & height of given Cuboid: \n");
              scanf("%f%f%f",&width,&length,&height);
              printf("Surface Area of Cuboid is = 2 *(width * length + length * height + height * width) \n");
              surface_area = 2 *(width * length + length * height +
              height * width);
              printf("Therefore, Surface area of cuboid= %.3f",surface_area);
              break;
          case 3:
              printf("Enter value of radius and height of given Cylinder: \n");
              scanf("%f%f",&radius,&height);
              printf("Surface Area of Cylinder is = 2 * (22 / 7) * radius * (radius + height) \n"); 
              surface_area = 2 * (22 / 7) * radius * (radius + height);
              printf("Therefore, Surface area of Cylinder= %.3f",surface_area);
              break;
          case 4:
              printf("Enter value of radius and height of given Cone: \n");
              scanf("%f%f",&radius,&height);
              printf("Surface Area of Cone is = (22 / 7) * radius * (radius + sqrt(radius * radius + height * height)) \n");
              surface_area = (22 / 7) * radius * (radius + sqrt(radius * radius + height * height));
              printf("Therefore, Surface area of Cone= %.3f",surface_area);
              break;
          case 5:
              printf("Enter radius of the Sphere: \n");
              scanf("%f", &radius);
              printf("Surface Area of Sphere is = 4 * (22/7) * radius * radius\n");
              surface_area =  4 * (22/7) * radius * radius;
              printf("Therefore, Surface Area of Sphere= %.3f", surface_area);
              break;
          case 6:
              printf("Enter radius of HemiSphere: \n");
              scanf("%f",&radius);
              printf("Surface Area of HemiSphere is = 3*3.143* radius* radius \n");
              surface_area=3*3.14*radius*radius;
              printf("Therefore, Surface Area of HemiSphere= %.3f",surface_area);
              break;
          case 7:
              printf("Enter base edge and height of Hexagonal Prism: \n");
              scanf("%f%f",&base_edge,&height);
              printf("Surface Area of Hexagonal Prism is = 6*a*h + 3√3*(a*a) \n");
              surface_area = 6 * base_edge * height + 3 * sqrt(3) * base_edge * base_edge;
              printf("Therefore, Surface Area of Hexagonal Prism= %.3f",surface_area);
              break;
          case 8:
              printf("Enter side of Tetrahedron: \n");
              scanf("%f",&side);
              printf("Surface Area of Tetrahedron is = √3*s*s\n");
              surface_area=(sqrt(3)*(side * side));
              printf("Therefore, Surface Area of Tetrahedron= %.3f",surface_area);
              break;
          default:
              printf("Error in figure code\n");
              break; 
        }
      }

    else if (function_code == 3)

     {
       int fig_code;
       float side, length, breadth, width, radius, height, base_edge, volume;

       printf("-------------------------\n");
       printf(" 1 --> Cube\n");
       printf(" 2 --> Cuboid\n");
       printf(" 3 --> Cylinder\n");
       printf(" 4 --> Cone\n");
       printf(" 5 --> Sphere\n");
       printf(" 6 --> Hemisphere\n");
       printf(" 7 --> Hexagonal Prism\n");
       printf(" 8 --> Tetrahedron\n");

       printf("-------------------------\n");
       printf("Enter the Figure code\n");
       scanf("%d", &fig_code);
       
       switch(fig_code)
       {
              case 1:
              printf("Enter the side of given Cube: \n");
              scanf("%f",&side);
              printf("Volume of cube is = side*side*side\n");
              volume = side * side * side;
              printf("Therefore, Volume of cube is : %.3f\n",volume);
              break;

              case 2:
              printf("Enter value of width, length & height of given Cuboid: \n");
              scanf("%f%f%f",&width,&length,&height);
              printf("Volume of cuboid is = width * length * height\n");
              volume = width * length * height;
              printf("Therefore, Volume of Cuboid is : %.3f\n",volume);
              break;

              case 3:
              printf("Enter value of radius and height of given Cylinder: \n");
              scanf("%f%f",&radius,&height);
              printf("Volume of Cylinder is = (22 / 7) * radius * radius * height\n");
              volume = 3.143 * radius * radius * height;
              printf("Therefore, Volume of Cylinder is : %.3f\n",volume);
              break;

              case 4:
              printf("Enter value of radius and height of given Cone: \n");
              scanf("%f%f",&radius,&height);
              printf("Volume of Cone is = (1.0/3) * (22 / 7) * radius * radius * height\n");
              volume = 0.33 * 3.143 * radius * radius * height;
              printf("Therefore, Volume of Cone is : %.3f\n",volume);
              break;

              case 5:
              printf("Enter radius of the Sphere: \n");
              scanf("%f", &radius);
              printf("Volume of Cone is = (4.0/3) * (22/7) * radius * radius * radius\n");
              volume = 1.33 * 3.143 * (radius * radius * radius);
              printf("Volume of Sphere is : %.3f\n",volume);
              break;

              case 6:
              printf("Enter radius of HemiSphere: \n");
              scanf("%f",&radius);
              printf("Volume of Hemisphere is = (2.0/3.0)*3.143*(r*r*r)\n");
              volume=0.66 * 3.143 * (radius*radius*radius);
              printf("Volume of Hemisphere is : %.3f\n",volume);
              break;

              case 7:
              printf("Enter radius of Hexagonal Prism: \n");
              scanf("%f%f",&base_edge,&height);
              printf("Volume of Hexagonal is = 3 * √3 * side * side * height / 2\n");
              volume = 3 * sqrt(3) * side * side * height / 2;
              printf("Therefore, Volume of Hexagonal is : %.3f\n",volume);
              break;

              case 8:
              printf("Enter side of Tetrahedron: \n");
              scanf("%f",&side);
              printf("Volume of Tetrahedron is = (side*side*side) / (6 * sqrt(2)))\n");
              volume = (pow(side, 3) / (6 * sqrt(2)));  
              printf("Therefore, Volume of Tetrahedron is : %.3f\n",volume);break;    

              default:
              printf("Error in figure code\n");
              break; 

      }
    }
  
  else if (function_code == 4)

     {
       int fig_code;
       int n,sum=0,i,N,t,h;
       double number,j,total;
       int Sum,numbers;

       printf("-------------------------\n");
       printf(" 1 --> Sum of all 'N' natural numbers\n");
       printf(" 2 --> Sum of all '1/N' natural numbers\n");
       printf(" 3 --> Sum of the square of all natural numbers from 1 to N.\n");
       printf(" 4 --> Sum of the cube of all natural numbers from 1 to N.\n");
       printf(" 5 --> Sum of all odd numbers from 1 to N\n");
       printf(" 6 --> Sum of all even numbers from 2 to 2N\n");
       printf(" 7 --> Sum of Natural Number/Factorial of Number of all natural numbers from 1 to N.\n");

       printf("-------------------------\n");
       printf("Enter the Figure code\n");
       scanf("%d", &fig_code);

       switch(fig_code)
       {
            case 1:
            printf("Enter the value of 'N': ");
            scanf("%d",&n);
            sum = (n * (n + 1)) / 2;
            printf("Sum of the series: ");
            for (i =1;i <= n;i++)
             {
            if (i!=n)
                   printf("%d + ",i);
            else
                  printf("%d = %d ",i,sum);
             }
            break;

            case 2:
            printf("\nEnter the value of 'N': ");
            scanf("%lf", &number);
            for (j = 1; j <= number; j++)
              {
                total = total + (1 / j);
                if (j == 1)
                    printf("\n 1 +");
                else if (j == number)
                    printf(" (1 / %.2lf)", j);
                else
                    printf(" (1 / %.2lf) + ", j);
              }
            printf("\n The sum of the given series is %.2lf", total);
            break ;

            case 3:
            printf("Enter the value of 'N': ");
            scanf("%d",&n);
            sum = (n * (n + 1) * (2 * n + 1 )) / 6;
            printf("Sum of the series : ");
            for (i =1;i<=n;i++) 
              {
                if (i != n)
                 printf("%d^2 + ",i);
                else
                 printf("%d^2 = %d ",i,sum);
              }
            break ;

            case 4:
            printf("Enter the value of 'N': ");
            scanf("%d",&n);
            sum = pow(((n * (n + 1) ) / 2),2);
            printf("Sum of the series : ");
            for (i =1;i<=n;i++) 
              {
                if (i != n)
                 printf("%d^3 + ",i); 
                else
                 printf("%d^3 = %d ",i,sum);
              }
            break ;

            case 5:
            printf("Enter the value of 'N': ");
            scanf("%d",&n);
            printf("\nThe odd numbers are :");
            for(i=1;i<=n;i++)
            {
               printf("%d ",2*i-1);
                sum+=2*i-1;
            }
            printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
            break ;

            case 6:
            printf("\nPlease Enter the Maximum Limit Value : ");
            scanf("%d", &numbers);
            for(i = 1; i <= numbers; i++)
              {
                if ( i%2 == 0 )
                {
                printf("%d  ", i);
                    Sum = Sum + i;
                }
              }
            printf("\n The Sum of All Even Numbers upto %d  = %d", numbers, Sum);
            break;

            case 7:
            printf("Enter number of 'N' terms : ");
            scanf("%d",&N);
            for(i=1;i<=N;i++)
              {
                t=1;
                h=i;
                  while(h)
                  {
                    t=t*h;
                    h--;
                  }
            sum=sum+t;
              }
            printf("Sum of 'N' factorial : %d\n",sum);
            break;
            
            default:
              printf("Error in figure code\n");
              break; 
        }
       }
    else  
      {
        int MAXSIZE=100, fig_code;
        float x[MAXSIZE];
        int  i, n;
        float mean, variance, std_deviation, sum = 0, sum1 = 0;
        printf("-------------------------\n");
                printf(" 1 --> Mean\n");
                printf(" 2 --> Variance and Standard Deviation \n");
        printf("-------------------------\n");
              printf("Enter the Figure code\n");
              scanf("%d", &fig_code);

        switch(fig_code)
         {
          case 1:
          printf("Enter number of elements: \n");
          scanf("%d", &n);
          printf("Enter %d real numbers: \n", n);
            for (i = 0; i < n; i++)
              {
                scanf("%f", &x[i]);
              }
            for (i = 0; i < n; i++)
              {
                sum = sum + x[i];
              }
        mean = sum / (float)n;
        printf("Sum of the given elements: %f\n",sum);
        printf("Mean = Sum of the elements/number of elements\n");
        printf("Mean of all elements = %.2f\n", mean);
        break;

         case 2:
          printf("Enter number of elements: \n");
          scanf("%d", &n);
          printf("Enter %d real numbers: \n", n);
            for (i = 0; i < n; i++)
              {
                scanf("%f", &x[i]);
              }
            for (i = 0; i < n; i++)
              {
                sum = sum + x[i];
              }
        mean = sum / (float)n;
            for (i = 0; i < n; i++)
            {
              sum1 = sum1 + pow((x[i] - mean), 2);
            }

        printf("Sum of the given elements: %f\n",sum);
        variance = sum1 / (float)n;
        std_deviation = sqrt(variance);
        printf("variance of all elements = %.2f\n", variance);
        printf("Standard deviation = %.2f\n", std_deviation);
        break;

        default:
            printf("Error in figure code\n");
            break; 
       }
     }
  return 0;
}
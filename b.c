#include <stdio.h>
#include <math.h>

int main(){
    double for_check[10][2] = {{-5., 5.}, {-4., -4.}, {5.,-1.}, {5., 5.}, {1., 8.}, {1.,2.},
	{3., 0.}, {0.,3.}, {0.,0.}, {1.,1.}};/* 1-ые координаты - ожид.: 0;2-ые координаты - ожид.:  0;3-ие координаты - ожид. 0;4-ые координаты - ожид. 0;5-ые координаты - ожид. 0;6-ые координаты - ожид. 1;7-ые координаты - ожид. 1;8-ые координаты - ожид. 1;9-ые координаты - ожид. 1;10-ые координаты - ожид. 1 */
    double x, y;
    printf ("Введите координату х: ");
	scanf ("%lf", &x);
	printf ("Введите координату y: ");
	scanf ("%lf", &y);

    if ((!(pow((x-5.),2.) + pow((y-5.),2.) < pow(5.,2.))) && (x <= 5.) && (y <= 5.) && (x>=0) && (y>=0))
	    printf("Результ oт проверки от пользователя: 1\n");
    else
        printf("Результат проверки от пользователя: 0\n");

}

#include <stdio.h>
#include <stdbool.h>

bool Bissectrice(double , double);
bool Vertical(double);
bool Horizontal(double);


int main(){
    double for_check[10][2] = {{5., 5.}, {-3., -4.}, {-4.,1.}, {-10., 4.}, {1., 10.}, {5.,-7.},
	{3., -1.}, {1.,1.}, {0.,0.}, {4.,-4.}}; //1-ые координаты - ожид.: 1; 2-ые координаты - входят ли они в третью четверть (ожид.:  1);3-ие координаты - ожид. 1;4-ые координаты - ожид. 0;5-ые координаты - ожид. 0;6-ые координаты - ожид. 0;7-ые координаты - ожид. 0;8-ые координаты - ожид. 0;9-ые координаты - ожид. 1;10-ые координаты - ожид. 1
    
    double x;
    double y;
    
    for (int i = 0; i < 10; i++) {
		printf("Проверка %d: %d\n", i+1, (Bissectrice(for_check[i][0], for_check[i][1]) 
		&& (!Vertical(for_check[i][0])) && (!Horizontal(for_check[i][1]))) || 
		(Vertical(for_check[i][0]) && Horizontal(for_check[i][1])));
	}
   
    printf ("Введите координату х: ");
	scanf ("%lf", &x);
	printf ("Введите координату y: ");
	scanf ("%lf", &y);
	printf("Проверка от пользователя: %d\n", (Bissectrice(x, y) 
	&& (!Vertical(x)) && (!Horizontal(y))) || 
	(Vertical(x) && Horizontal(y)));

}

bool Bissectrice(double x, double y){
    int resultat;
    resultat = (y <= -x);

    return resultat;
}
bool Vertical(double x){
    int resultat;
    resultat = (x > 4);

    return resultat;
}
bool Horizontal(double y){
    int resultat;
    resultat = (y > 3);

    return resultat;
}

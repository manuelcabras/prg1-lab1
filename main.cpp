/* ---------------------------
Laboratoire : 01
Auteur(s) : Manuel Cabras - manuel.cabras@heig-vd.ch
Date : 17.09.2024
But : me présenter via un programme cpp.
Remarque(s) :
--------------------------- */
#include <iostream>
#include <array>

#define PI_VALUE 3.14
#define THREE_ROOT 1.73

using namespace std;

// Ex. 3.06
void test_values(int x, int y) {
    bool both_zero = x == 0 && y == 0;
    bool at_least_one_zero = x*y == 0;
    bool at_most_one_zero =  x+y != 0 && (x+y == x || x+y == y);
    bool at_least_one_more_than_zeros = x != 0 || y != 0;
    cout << "inputs " << x << " - " << y << endl;
    cout << both_zero << at_least_one_zero << at_most_one_zero << at_least_one_more_than_zeros << endl;
}

// Ex. 3.09
const double PI = 3.14;

double calcul_volume_cone(int r1, int r2, int h) {
    return ((r1*r1)+(r2*r2)+r1*r2) *h * PI / 3;
}
double calcul_volume_cy(int r, int h) {
    return PI * r*r*h;

}

// Ex. 3.10
const double METER_IN_MILE = 0.000621371;
const double METER_IN_FEET = 3.280838879;
const double METER_IN_INCH = 39.3701;

double to_miles(const int *m) {
    return *m * METER_IN_MILE ;
}
double to_feet(const int *m) {
    return METER_IN_FEET * *m;
}
double to_inches(const int *m) {
    return METER_IN_INCH * *m;
}


int main() {

    // Hello world
    /*  const char* deco[2] = {"# # # # # # # # # #"," # # # # # # # # # "};

      for (int i = 0; i < 4; i++) {
          cout << deco[i%2] << endl;
      }

      cout << endl;
      cout << "    #####        Nom : Manuel Cabras" << endl;
      cout << " d## . . ##b     Kernel : Human v30.0 " << endl;
      cout << "   #  \\  #       Stack : Java, Kotlin, C#, Javascript, PHP, golang, powershell" << endl;
      cout << "    #(_)#        Experience : ████▒▒▒▒▒▒" << endl;
      cout << "      #          Experience (detailed) : Travaillé en environnement .NET et JS (Node) professionnellement" << endl;
      cout << "                 J'ai contribué pour un projet FOSS en Kotlin/Java, occasionnellement du c++" << endl;
      cout << "                 Je reste une pive en c++" << endl;
      cout << "                 Leisure : Musique, photographie, fitness, tout ce qui occupe ma tête avec des problèmes" << endl;
      cout << endl;
      cout << " ### On fait quoi avec la programmation? ### " << endl;
      cout << " Avec une optique optimiste, je dirais qu'on résout des problèmes avec. Avec le temps j'ai réalisé que " << endl;
      cout << " la programmation me rend flemmard, je délègue mes tâches à des programmes. En gros, cela me permet de " << endl;
      cout << " gagner du temps et optimiser les ressources en confiant des tâches répétitives et bien spécifiées à un ordinateur" << endl;
      cout << " Ce qu'on peut faire? Ce que l'on veut. S'amuser, donner vie à des machines, améliorer notre vie, " << endl;
      cout << " nous la compliquer si nous sommes du côté de l'IDE... En somme, nous mandatons une puce pour effectuer " << endl;
      cout << " des tâches de manière plus performante et précise par rapport à un humain afin de nous améliorer le quoticien" << endl;
      return 0;
      */

    // ####################### Introduction & Elements de base ######################

    // Ex. 01 - 04-02 - segfault
    /*int *p = nullptr;
    *p = 42;
    cout << "hello" << endl;*/

    //Ex. 01 - 04.03 - out_of_range
    /*std::array a { 1, 2, 3};
    for(int i = 0; i < 10; ++i)
        a.at(i) = i;
    cout << "hello" << endl;*/

    // 02.01
    /* // int _ = 2;
    // int _a = 2;
    // int __a = 4;
    // int j__a = 2;
    // int so = 1;
    //cout << __a + _a<< endl;
    //return 0;*/

    // Ex. 2.2
    /* // 1. oui
    // 2. non, on peut pas redéclarer une variable déjà déclarée
    // 3. non, k n'est pas défini
    // 4. non, car m n'est pas initialisé
    // 5. oui mais -1 devrait étre défini comme une constante
    // 6. oui - Correction : nb_produit est une constante et peut pas être modifiée
    */

    // Ex 2.3
    /*// 1. int
    // 2. double
    // 3. char
    // 4. double
    // 5. char
    // 6. bool
    // 7. double
    // 8. int
    // 9. int avec perte
    // 10. double
    */

    // Ex. 3.01
    /*int i, j, k;

    i = 0; k = i++; // i = 0 , k = 1
    cout << "A : i = " << i << " k = " << k << endl;
    // A : i = 0 k = 1
    // non car i a été incrémenté entre-temps
    i = 1; k = ++i;
    cout << "B : i = " << i << " k = " << k << endl;
    // B : 1 k = 2
    // non car i a été incrémenté entre-temps
    i = 2; j = 3;
    k = i++ * ++j;
    cout << "C : i = " << i << " j = " << j << " k = " << k << endl;
    // C : i = 2 j = 3 = 9
    // non car i a été incrémenté entre-temps mais après l'affectation de k, j avant
    i = 3; j = 4;
    k = i *= --j;
    cout << "D : i = " << i << " j = " << j << " k = " << k << endl;
    // D : i = 3 j = 4 k = 12
    // ici i = 3, j = 4, après k = 3*3 mais i aussi parce que i est multiplié avant l'affectation.
    */

    // Ex. 3.02
    /* int i = 5, j = 11;
    double x = 5, y = 11;
    double m = 0;
    m = j / i;	 // 2.2 -> faux car conversion int > double après opération
    m = y / x;	// 2.2
    m = j / i + 1.0; // 3.2 -> faux car conversion int > double après opération
    m = y / x + 1;	// 3.2
    m = y / x + j / i;	// 4.2
    m = i + y / x; // 7.2
    m = x + j / i; // 7.2 -> faux car conversion int > double après opération
    */

    // Ex. 3.03
    /*
    int i = 5, j = 11, n = 10;
    double x = 5, y = 11;
    1	j % i = 1
    2	n % i = 0
    3	y % x = compile error
    4	y % i = compile error
    5	-j % i = -1
    6	n % ++i = 4
    7	n++ % ++i = 4
    */

    // Ex. 3.04
    /*
    int i, j, k;

   i = j = k = 1;  // i, j, k = 1
   i += j += k;    // i= 3, j = 2, i=1
   cout << "A : i = " << i << " j = " << j << " k = " << k << endl;

   i = 3; j = 2;  // i = 3, j = 2, k = 1
   k = i++ > j || j++ != 3;  // i = 4, j = 2, k = 1
   cout << "B : i = " << i << " j = " << j << " k = " << k << endl;

   i = 3; j = 2;
   k = i++ < j || j++ != 3; // i = 4, j = 3, k = 1
   cout << "C : i = " << i << " j = " << j << " k = " << k << endl;

   i = 3; j = 2;
   k = ++i == 3 && ++j == 3; // i = 4, j = 2, k = 0
   cout << "D : i = " << i << " j = " << j << " k = " << k << endl;

   i = 3; j = 2;
   k = ++i > 3 && ++j == 3; // i = 4, j = 3, k = 1
   cout << "E : i = " << i << " j = " << j << " k = " << k << endl;

   return EXIT_SUCCESS;
     */

    // Ex. 3.05
    /*
    string s1 = "prg1";
    string s2 = "prg2";
    string s3 = "pdl";
    string s4 = "prg";
    string s5 = "pdg23";
    string s6 = "Prg1";

    1	s1 < s2	true car 1 < 2 dans ascii
    2	s1 > s3	true car d < r et plus long
    3	s1 < s4	false car d < r et s4 plus court
    4	s3 > s5	false car s3 est plus court  -> faux, car l > g donc comparaison s'arrête
    5	s1 > s6 true car minuscules > majuscules

    */

    //Ex. 3.06
    /*
    On suppose disposer de deux entiers x et y. Ecrire la condition permettant de tester :

    que nos deux entiers valent 0
    qu'au moins l'un de nos deux entiers vaut 0
    qu'un seul de nos deux entiers vaut 0
    qu'au moins un de nos deux entiers ne vaut pas 0

    test_values(3,4);
    test_values(0,1);
    test_values(1,0);
    test_values(0,0);
    */

    // Ex. 3.07
    /*
    char x = 'A'; // 65
    char y = '0'; // 48
    char z;

    z = x + 4; // E
    cout << "1. " << z << endl; E
    cout << "2. " << ++z << endl; F

    z = x + 0;
    cout << "3. " << z << endl; A

    z = x + '0'; q
    cout << "4. " << z << endl;
     */

    // Ex. 3.08
    /*
    string s = string("A") + "BC";
    // ABC
    string s = string("AB") + 'C';
    //ABC
    string s = "A" + "BC";
    //Erreur
    string s = "AB";
    s += 'C';
    //ABC
    string s = "AB";
    string ss = s + 5;
    //Erreur
    string s = "PRG";
    string s1 = "2023-01-01";
    s += s1[4];
    s += s1[6];
    //PRG-
    //PRG-1
     */

    // Ex. 3.09
    //4,1,12,1,3
    /*int r1, r2, h1, h2, hc;
    cout << "Entrez le rayon du cylindre 1 [cm]      :";
    cin >> r1;
    cout << endl << "Entrez le rayon du cylindre 2 [cm]      :";
    cin >> r2;
    cout << endl << "Entrez la hauteur du cylindre 1 [cm]    :";
    cin >> h1;
    cout << endl << "Entrez la hauteur du cylindre 2 [cm]    :";
    cin >> h2;
    cout << endl << "Entrez la hauteur du tronc de cone [cm] :";
    cin >> hc;

    double res = (calcul_volume_cy(r1,h1) + calcul_volume_cy(r2,h2) + calcul_volume_cone(r1,r2,hc))/1000;
    cout << "La contenance de la bouteille est de " << res << " litres.";
    */

    // Ex. 3.10
    /*
    cout << "Entrez le nombre de metres a convertir (entier > 0) :" ;
    int meters = 1;
    cin >> meters;
    int *m = &meters;
    if (cin.good() && meters > 0) {
    cout << endl << "= " << to_miles(m) << endl;
    cout << endl << "= " << to_feet(m) << endl;
    cout << endl << "= " << to_inches(m) << endl;
    }
    */

    // Ex. 4.01
    /*
    int i = 5;
    const int j = 10;

    int* ptr_i = &i;
    const int* ptr_j = &j;

    const int* ptr_i_1 = &i;
    int* const ptr_i_2 = &i;

    #	Instruction	Correcte ? (oui/non)	Explication	i	j
    *ptr_i = 15;	    // oui / on appelle la valeur à l'adresse contenue dans le pointeur et on la set à 15 / 15 / 10
    int *ptr_j_1 = &j;  // non car J est une const int, pas un int
    ptr_j = ptr_i;      // oui car on peut changer le pointage d'un const int*
    *ptr_i_1 = 25;      // non car const
    *ptr_i_2 = 30;      // oui car const pointer vers non const value
    ptr_i_1 = &j;       // oui car pointer réattribué
    ptr_i_2 = &j;       // non car const pointer

    */

    // Ex. 4.02
    /*int var1 = 1;
    int var2 = 2;

    const int cste = 3;

    int* ptr1;
    int* ptr2 = &var2;

    ptr1 = &var1;
    *ptr1 = 2;

    bool is_same_ref = ptr1 == ptr2;
    cout << is_same_ref ? "oui" : "non"<< endl;

    bool is_same_val = *ptr1 == *ptr2;
    cout << is_same_val ? "oui" : "non" << endl;

    cout << &var1 << endl;

    cout << ptr1 << endl;

    cout << &ptr1 << endl;

    //ptr1 = &cste;

    const int* ptr3 = &cste;
    */

    // Ex. 4.03
    /*
    int var1 = 1;
    int &ref1 = var1;

    //int &ref2;

    var1 = 2;
    ref1 = 3;
    cout << var1;
    cout << ref1;
    // à une référence à la variable var1
    int* const ptr1 = &var1;
    // à une référence qui ne peut pas modifier la valeur de la variable référencée
    const int* const ptr2 = &var1;
    */

    // Ex. 5.01
    /*int a = ((1 * 2) + ((3 / 4) * 2));

    //bool b = ((a + (b < (c * d))) + e) or (f - g + (h == i)) //faux
    //bool b = (((a + b) < ((c * d) + e)) or (((f - g) + h) == i))

    //bool c = (a == (b < c))

    //bool d = ((a < (b or c)) == ((d and e) > b)) // faux
    //bool d = ((a < b) or ((c == d) and (e > b)))

    //++++a
    //(++(++a))

    // (((+a) -(((-b) * (-c))) + (-(+d)))
    // (((+a) - ((-b) * (-c))) + (-(+d)))

    // ((((a * b) % c) + ((d % e) / f)) - g)
    // ((((a * b) % c) + ((d % e) / f)) - g)

    // ((+a (-b or c)) == ((d > e) < (f and g)))
    // + a - b or c == d > e < f and g
    // ((+a) - b) or (( c == ((d > e) < f)) and g))

    // (((+ a) - b) or ((c == ((d > e) < f)) and g))
    */

    // ####################### 03 - Structure de données ######################
    // 01-01 : non car pour 100 la valeur varie
    // 01-02 : b += a > 0 ? a : -2*a;      r = d == 0. ? 1e100 : n/d;         b = a > 0 ? b + 1 : a==0 ? 0 : b *2 ;
    /* 01-03
        if (a >= 1) { a =42} else { a*= a};
        if (a ==2) { b = 32} else if(a <5) { b = 12} else { b = 23} ;
        if(a < 0) {
            if (b < 0) {
                c = a
            } else {
                c = -a;
        } else {
            if(b <5) {
                c = a+b;
            else {
                c= a-b
            }
        }
    */
    //

    return EXIT_SUCCESS;


}


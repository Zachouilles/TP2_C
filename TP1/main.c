#include <stdio.h>
#include <stdlib.h>

int exercice1()
{
    int age = -1;

    printf("Quel est ton age ? ");
    scanf("%d", &age);

    if (age < 0 || age > 150)
    {
        printf("ERREUR : Valeur Incorrecte\n");
    }
    else if (age >= 18)
    {
        printf("Tu as %d ans\n", age);
        printf("Tu es Majeur !\n");
        main();
    }
    else
    {
        printf("Tu as %d ans\n", age);
        printf("Tu es Mineur !\n");
        main();
    }
}


int exercice2()
{
    float x = 0;
    printf("Calcule de : ");
    printf("((347 - 467 ) + 120)/( ( 17 + 95 ) * 5 )\n");
    printf("Calcule en cours...\n");
    x = ((347-467)+120)/((17+95)*50);

    if (x != 0)
    {
        printf("Oups");
        main();
    }
    else
    {
        int resultat = x;
        printf("((347 - 467 ) + 120)/( ( 17 + 95 ) * 5 ) = %d\n", resultat);
        main();
    }

}


int exercice3()
{
    float taille_m = 0.00;
    int taille_cm = 0;

    printf("Quelle est ta taille en metres [ex : 1.75] ? ");
    scanf("%f", &taille_m);
    if (taille_m <= 0.00 || taille_m > 3.00)
    {
        printf("ERREUR : Valeur Incorrecte !\n");
    }
    else
    {
        taille_cm = taille_m * 100;
        printf("Tu mesures donc %d centimetres !\n", taille_cm);
        main();
    }

}

int exercice4()
{
    int nombre_un = 0;
    int nombre_deux = 0;

    printf("Donne moi un nombre : ");
    scanf("%d", &nombre_un);
    printf("Donne moi un autre nombre : ");
    scanf("%d", &nombre_deux);
    if (nombre_un > nombre_deux)
    {
        printf("Le plus grand des nombres est %d.\n", nombre_un);
        main();
    }
    else if (nombre_un == nombre_deux)
    {
        printf("Les deux nombres sont egaux !");
        main();
    }
    else
    {
        printf("Le plus grand des nombres est %d.\n", nombre_deux);
        main();
    }

}

int exercice5()
{
    int note_1 = 0;
    int note_2 = 0;
    int note_3 = 0;
    float moyenne = 0.00;
    printf("Donne moi ta premiere note : ");
    scanf("%d", &note_1);
    printf("Donne moi ta deuxieme note : ");
    scanf("%d", &note_2);
    printf("Donne moi ta troisieme note : ");
    scanf("%d", &note_3);
    moyenne = (note_1+note_2+note_3)/3;
    printf("La moyenne de %d, %d et %d est de %f\n", note_1, note_2, note_3, moyenne);
    main();
}

int exercice6()
{
    int valeur = 0;
    int valeurAbsolue = 0;

    printf("Donne moi un nombre : ");
    scanf("%d", &valeur);
    valeurAbsolue = abs(valeur);
    printf("La valeur Absolue de %d est %d\n", valeur, valeurAbsolue);
    main();
}

int exercice7()
{
    int valeur = 0;

    printf("Donne moi un nombre : ");
    scanf("%d", &valeur);
    int pairImpair = valeur%2; // CALCULE PAIR/IMPAIR
    if (pairImpair == 0)
    {
        printf("%d est Pair !\n", valeur);
        main();
    }
    else
    {
        printf("%d est Impair !\n", valeur);
        main();
    }
    printf("%d", valeur);
}

int exercice8()
{
    int choix = 0;
    printf("Programme : 1.Kebab\n");
    printf("            2.Cote de Boeuf\n");
    printf("            3.Salade Lyonnaise\n");
    printf("Quel est votre choix ? ");
    scanf("%d", &choix);
    if (choix == 1)
    {
        printf("\n");
        printf("Salade, tomate, oignon ?\n");
        printf("1. OUI || 2. NON        \n");
        printf("Quel est votre choix ? ");
        scanf("%d", &choix);
        if (choix == 1 || choix == 2)
        {
            printf("\n");
            printf("La sauce ?\n");
            printf("1. KETCHUP || 2. MAYO    || 3. ALGERIENNE || 4. BBQ\n");
            printf("5. BLANCHE || 6. HARISSA || 7. SAMOURAI   || 8. ANDALOUSE\n");
            printf("Quel est votre choix ? ");
            scanf("%d", &choix);
            printf("\n");
            printf("Excellent choix !\n");
            main();
        }
        else
        {
            printf("ERREUR : Valeur Incorrecte !");
        }

    }
    if (choix == 2)
    {
        printf("\n");
        printf("Une cote bien saignante, tres bon choix!\n");
        main();
    }
    if (choix == 3)
    {
        printf("\n");
        printf("Une salade ?! Bon ok..\n");
        main();
    }
    else
    {
        printf("ERREUR : Valeur Incorrecte !");
    }
}

int exercice9()
{
    float taille_m = 0.00;
    float poids_kg = 0.00;
    float imc = 0.00;

    printf("Calcule ton IMC (Indice de Masse Corporelle)\n");
    printf("\n");
    printf("Quelle est ta taille en metres [ex: 1.75] ? ");
    scanf("%f", &taille_m);
    printf("Quel est ton poids en kilos [ex: 72.8] ? ");
    scanf("%f", &poids_kg);

    imc = poids_kg/(taille_m*taille_m); // CALCULE DE L'IMC
    if(imc < 16.5) // DENUTRITION
    {
        printf("Ton IMC est de %f, tu es en Denutrition\n", imc);
        main();
    }
    else if(imc >= 16.5 || imc < 18.5) // MAIGREUR
    {
        printf("Ton IMC est de %f, tu es en Maigreur\n", imc);
        main();
    }
    else if(imc >= 18.5 || imc < 25) // CORPULANCE NORMALE
    {
        printf("Ton IMC est de %f, tu as une Corpulance Normale\n", imc);
        main();
    }
    else if(imc >= 25 || imc < 30) // SURPOIDS
    {
        printf("Ton IMC est de %f, tu es en Surpoids\n", imc);
        main();
    }
    else if(imc >= 30 || imc < 35) // OBESITE MODEREE
    {
        printf("Ton IMC est de %f, tu es en Obesite Moderee\n", imc);
        main();
    }
    else if(imc >= 35 || imc < 40) // OBESITE SEVERE
    {
        printf("Ton IMC est de %f, tu es en Obesite Severe\n", imc);
        main();
    }
    else if(imc >= 40) // OBESITE MORBIDE
    {
        printf("Ton IMC est de %f, tu es en Obesite Morbide\n", imc);
        main();
    }
}

int puissance(int x, int y)
{
    // Déclaration des variables
    int compteur = 0;
    int resultat = 1;
    // SI puissance = 0
    if (y == 0)
    {
        resultat = 1;
        return resultat;
    }
    else
    {
        while (compteur < y)
        {
            resultat = resultat * x;
            compteur ++;
        }
        return resultat;
    }
}

int exercice10()
{
    // Déclaration/Initalisation des variables
    int nombre3chiffre = 0;

    int dividende = 0;
    int diviseur = 0;
    int quotient = 0;
    int reste = 0;

    int nombreFinal = 0;
    int i = 2;
    printf("Donne moi un nombre a trois chiffres : ");
    scanf("%d", &nombre3chiffre);

    if (nombre3chiffre < 100 || nombre3chiffre > 999)
    {
        printf("ERREUR : Valeur Incorrecte !");
    }
    else
    {
        dividende = nombre3chiffre;
        do
        {
            diviseur = 10;
            reste = dividende%diviseur;
            quotient = dividende/diviseur;
            nombreFinal = nombreFinal + (reste*puissance(10, i));

            dividende = quotient;
            i -= 1;
        } while (reste > 0);
        printf("Voici le nombre inverse : %d\n", nombreFinal);
        main();
    }
}

int exercice11()
{
    int A = 0;
    int B = 0;
    int C = 0;

    printf("Donne moi une valeur pour A : ");
    scanf("%d", &A);
    printf("Donne moi une valeur pour B : ");
    scanf("%d", &B);
    printf("Avant permutation: A = %d, B = %d\n", A, B);
    C = A;
    A = B;
    B = C;
    printf("Apres permutation: A = %d, B = %d\n", A, B);
    main();
}

int exercice12()
{
    int A = 0;
    int B = 0;

    printf("Donne moi une valeur pour A : ");
    scanf("%d", &A);
    printf("Donne moi une valeur pour B : ");
    scanf("%d", &B);
    printf("Avant permutation: A = %d, B = %d\n", A, B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("Apres permutation: A = %d, B = %d\n", A, B);
    main();
}

int main()
{
    int exercice = 0;
    printf("\n");
    printf("Selectionne un Exercice :\n");
    printf("-------------------------------\n");
    printf("[1] Exercice 1 : Majeur ou Mineur ?\n");
    printf("[2] Exercice 2 : Calcule\n");
    printf("[3] Exercice 3 : Taille en cm\n");
    printf("[4] Exercice 4 : Nombre le plus Grand\n");
    printf("[5] Exercice 5 : La Moyenne\n");
    printf("[6] Exercice 6 : La Valeur Absolue\n");
    printf("[7] Exercice 7 : Pair ou Impair ?\n");
    printf("[8] Exercice 8 : Menu de Restaurant\n");
    printf("[9] Exercice 9 : Calcule ton IMC\n");
    printf("[10] Exercice 10 : Le Nombre Inverse\n");
    printf("[11] Exercice 11 : Permute les Valeurs\n");
    printf("[12] Exercice 12 : Permute les Valeurs V2\n");
    printf("[0] QUITTER \n");
    printf("-------------------------------\n");
    printf("Selection : ");
    scanf("%d", &exercice);
    printf("\n");

    switch(exercice)
    {
    case 1:
        exercice1();
        break;

    case 2:
        exercice2();
        break;

    case 3:
        exercice3();
        break;

    case 4:
        exercice4();
        break;

    case 5:
        exercice5();
        break;

    case 6:
        exercice6();
        break;

    case 7:
        exercice7();
        break;

    case 8:
        exercice8();
        break;

    case 9:
        exercice9();
        break;

    case 10:
        exercice10();
        break;

    case 11:
        exercice11();
        break;

    case 12:
        exercice12();
        break;

    default :
        exit(0);
    }

    return 0;
}

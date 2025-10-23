#include <stdio.h>
#include <stdlib.h>

int exercice1()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Hello World !\n");
    }
}

int exercice2()
{
    int nombre = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);
    if (nombre > 0)
    {
        printf("Je vais compter jusqu'a %d\n\n", nombre);
        for (int i = 0; i <= nombre; i++)
        {
            printf("%d\n", i);
        }
        main();
    }
    else
    {
        printf("ERREUR : Valeur invalide !\n\n");
        exercice2();
    }
}

int exercice3()
{
    int nombre = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);
    printf("Je vais compter jusqu'a %d\n\n", nombre);
    if (nombre > 0)
    {
        for (int i = 0; i <= nombre; i++)
        {
            printf("%d\n", i);
        }
        main();
    }
    else if (nombre < 0)
    {
        for (int i = 0; i >= nombre; i--)
        {
            printf("%d\n", i);
        }
        main();
    }
    else
    {
        printf("0\n");
        main();
    }
}

int exercice4()
{
    int nombre = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);
    printf("Je vais compter de 3 en 3 jusqu'a %d\n\n", nombre);
    if (nombre > 0)
    {
        for (int i = 0; i <= nombre; i += 3)
        {
            printf("%d\n", i);
            main();
        }
    }
    else if (nombre < 0)
    {
        for (int i = 0; i >= nombre; i -= 3)
        {
            printf("%d\n", i);
            main();
        }
    }
    else
    {
        printf("0\n");
        main();
    }
}

int exercice5()
{
    int nombre = 0;
    int comptage = 1;
    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);
    printf("Donne moi le pas de comptage : ");
    scanf("%d", &comptage);
    if (comptage > 0)
    {
        printf("Je vais compter de %d en %d jusqu'a %d\n\n", comptage, comptage, nombre);
        if (nombre > 0)
        {
            for (int i = 0; i <= nombre; i += comptage)
            {
                printf("%d\n", i);
                main();
            }
        }
        else if (nombre < 0)
        {
            for (int i = 0; i >= nombre; i -= comptage)
            {
                printf("%d\n", i);
                main();
            }
        }
        else
        {
            printf("0\n");
            main();
        }
    }
    else
    {
        printf("ERREUR : Valeur de comptage invalide !\n\n");
        exercice5();
    }
}

int exercice6()
{
    int nombre = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d + %d = ", nombre, i);
        nombre += i;
        printf("%d\n", nombre);
    }
    printf("La somme des 10 premiers entiers vaut %d.\n", nombre);
    main();
}

int exercice7()
{
    int nombre = 0;
    int somme = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);
    if(nombre > 0)
    {
        for (int i = 1; i <= nombre; i++)
        {
            printf("%d + %d = ", somme, i);
            somme += i;
            printf("%d\n", somme);
        }
        printf("La somme des %d premiers entiers vaut %d.\n", nombre, somme);
        main();
    }
    else
    {
        printf("ERREUR : Valeur de comptage invalide !\n\n");
        exercice7();
    }
}

int exercice8()
{
    float note_1 = 0.00;
    float note_2 = 0.00;
    float note_3 = 0.00;
    float moyenne = 0.00;
    printf("Donne moi ta premiere note : ");
    scanf("%f", &note_1);
    printf("Donne moi ta deuxieme note : ");
    scanf("%f", &note_2);
    printf("Donne moi ta troisieme note : ");
    scanf("%f", &note_3);
    moyenne = (note_1+note_2+note_3)/3;
    printf("La moyenne de %d, %d et %d est de %f\n", note_1, note_2, note_3, moyenne);
    moyenne *= 100;
    int moyenneInt = moyenne;
    moyenne = moyenneInt;
    moyenne /= 100;
    printf("Ta moyenne arrondi est de %f\n", moyenne);
    main();
}

int exercice9()
{
    float note = 0.00;
    float moyenne = 0.00;
    int nombre2notes = 0;

    printf("Combien de notes voulez-vous saisir ?\n");
    printf("Nombre de Notes : ");
    scanf("%d", &nombre2notes);
    printf("\n");

    if (nombre2notes > 0)
    {
        for (int i = 1; i <= nombre2notes; i++)
        {
            printf("Note %d : ", i);
            scanf("%f", &note);
            if (note >= 0)
            {
                moyenne += note;
            }
            else
            {
                printf("\nERREUR : Valeur Invalide !\n\n");
                i--;
            }
        }
        moyenne /= nombre2notes;
        printf("Ta moyenne est de %f\n", moyenne);
        moyenne *= 100;
        int moyenneInt = moyenne;
        moyenne = moyenneInt;
        moyenne /= 100;
        printf("Ta moyenne arrondi est de %f\n", moyenne);
        main();
    }
    else
    {
        printf("ERREUR : Valeur Invalide !\n\n");
        exercice9();
    }
}

int exercice10()
{
    int nombre = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);

    printf("\nLa table de %d :\n", nombre);
    for (int i = 1; i <= 10; i++)
    {
        int resultat = nombre * i;
        printf("   %d x %d = %d\n", nombre, i, resultat);
    }
    main();
}

int exercice11()
{
    int nombre = 0;
    int puissance = 0;

    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);
    printf("Donne moi la puissance : ");
    scanf("%d", &puissance);
    if (puissance > 0)
    {
        int resultat = 1;
        for (int i = 0; i < puissance; i++)
        {
            resultat *= nombre;
        }
        printf("\n%d puissance %d vaut %d\n", nombre, puissance, resultat);
        main();
    }
    else if (puissance == 0)
    {
        printf("\n%d puissance %d vaut 1\n", nombre, puissance);
        main();
    }
    else
    {
        printf("ERREUR : Valeur Invalide !\n\n");
        exercice11();
    }
}

int exercice12()
{
    int nombre = 0;
    int resultat = 1;
    printf("Donne moi un nombre : ");
    scanf("%d", &nombre);
    if(nombre > 0)
    {
        for (int i = 1; i <= nombre; i++)
        {
            resultat *= i;
        }
        printf("   %d! = %d\n", nombre, resultat);
        main();
    }
    else
    {
        printf("ERREUR : Valeur Invalide !\n");
        exercice12();
    }
}

int exercice13()
{
    int jours = 0, mois = 0, annees = 0;
    printf("Donne moi une date entre le XVe et le XXVe siecle.\n");

    printf("Annees : ");
    scanf("%d", &annees);
    if(annees >= 1401 && annees <= 2500)
    {
        printf("  Mois : ");
        scanf("%d", &mois);
        if(mois >= 1 && mois <= 12)
        {
            printf(" Jours : ");
            scanf("%d", &jours);
            if(mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12)
            {
                if(jours >= 1 && jours <= 31)
                {
                    printf("\n   Date Valide %d/%d/%d\n", jours, mois, annees);
                    main();
                }
                else
                {
                    printf("ERREUR : Jours Invalide !\n\n");
                    exercice13();
                }
            }
            else if (mois == 2)
            {
                if(jours >= 1 && jours <= 28)
                {
                    printf("\n   Date Valide %d/%d/%d\n", jours, mois, annees);
                    main();
                }
                else
                {
                    printf("ERREUR : Jours Invalide !\n\n");
                    exercice13();
                }
            }
            else
            {
                if(jours >= 1 && jours <= 30)
                {
                    printf("\n   Date Valide %d/%d/%d\n", jours, mois, annees);
                    main();
                }
                else
                {
                    printf("ERREUR : Jours Invalide !\n\n");
                    exercice13();
                }
            }
        }
        else
        {
            printf("ERREUR : Mois Invalide !\n\n");
            exercice13();
        }
    }
    else
    {
        printf("ERREUR : Annees Invalide !\n\n");
        exercice13();
    }

}

int exercice14()
{
    int a = 1, b = 1, n = 0;
    printf("Programme permettant de calculer le N-eme terme de la suite de Fibonacci\n");
    printf("Donne moi un nombre positive : ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("ERREUR : Ah.ah.. J'ai dis positive !\n\n");
        exercice14();
    }
    else if(n > 200)
    {
        printf("ERREUR : Abuse pas.. Donne un nombre entre 1 et 200, simple.\n\n");
        exercice14();
    }
    else
    {
        printf("\n");
        printf("Voici les %d premiers termes de la suite de Fibonacci : %d %d ", n, a, b);
        for(int i = 0; i < n-2; i++)
        {
            int c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }
        printf("\n");
        main();
    }
}

// EXERCICE 15
// Variables :
char username[251], password[255], filepath[255], ext[] = ".txt";
float money = 0.00;
int tentative = 0;

int exercice15() // MAIN MENU
{
    username[251] = "";
    password[255] = "";
    filepath[255] = "";
    money = 0.00;
    int choix = 0;
    printf("____________________________________________________________________________\n");
    printf("                                                                   _        \n");
    printf("      _____ _____ _____ _____ __ __   _____ _____ _____ _____    _| |_      \n");
    printf("     |     |     |   | |   __|  |  | | __  |  _  |   | |  |  |  |   __|     \n");
    printf("     | | | |  |  | | | |   __|_   _| | __ -|     | | | |    -|  |__   |     \n");
    printf("     |_|_|_|_____|_|___|_____| |_|   |_____|__|__|_|___|__|__|  |_   _|     \n");
    printf("                                                                  |_|       \n");
    printf("____________________________________________________________________________\n");
    printf("\n");
    printf("    [1] Se Connecter\n");
    printf("\n");
    printf("    [2] Creer un Compte\n");
    printf("\n");
    printf("    [3] Quitter\n");
    printf("\n");
    printf("____________________________________________________________________________\n");
    printf("Choix : ");
    scanf("%d", &choix);
    switch(choix)
    {
    case 1:
        login();
        break;
    case 2:
        create();
        break;
    case 3:
        main();
        break;
    default:
        exercice15();
        break;
    }
    main();
}

int login() // SE CONNECTER
{
    printf("____________________________________________________________________________\n");
    printf("                                                                            \n");
    printf("    _____ _____    _____ _____ _____ _____ _____ _____ _____ _____ _____    \n");
    printf("   |   __|   __|  |     |     |   | |   | |   __|     |_   _|   __| __  |   \n");
    printf("   |__   |   __|  |   --|  |  | | | | | | |   __|   --| | | |   __|    -|   \n");
    printf("   |_____|_____|  |_____|_____|_|___|_|___|_____|_____| |_| |_____|__|__|   \n");
    printf("                                                                            \n");
    printf("____________________________________________________________________________\n");
    printf("\n");
    printf("    NOM DE COMPTE : ");
    scanf("%251s", &username);
    printf("\n");
    printf("    MOT DE PASSE : ");
    scanf("%255s", &password);
    printf("\n");

    // On colle le nom de compte avec l'extention ".txt" pour avoir le nom du fichier
    strcpy(filepath, username);
    strcat(filepath, ext);
    // Ouverture du FICHIER + "r" lecture seule
    FILE *data = fopen(filepath, "r");
    // On test que le FICHIER soit bien ouvert sinon return ERREUR
    if (data == NULL)
    {
        printf("____________________________________________________________________________\n");
        printf("ERREUR : Nom de Compte Incorrect\n");
        exercice15(); // Retour au menu
    }
    else
    {
        // Variables temporaire pour comparer avec les valeurs de l'utilisateur
        char _password[255];
        float _money = 0;
        // On charge les valeurs
        fscanf(data, "%s", &_password);
        fscanf(data, "%f", &_money);
        // On ferme le FICHIER
        fclose(data);

        if(compareStrings(password, _password) == 0)
        {
            money = _money;
            menu();
        }
        else
        {
            printf("____________________________________________________________________________\n");
            printf("ERREUR : Mot de Passe Incorrect\n");
            exercice15(); // Retour au menu
        }
    }
}

int create() // CREER UN COMPTE
{
    char password2[255];
    printf("_______________________________________________________________________________________\n");
    printf("                                                                                       \n");
    printf("  _____ _____ _____ _____ _____    _____ _____    _____ _____ _____ _____ _____ _____  \n");
    printf(" |     | __  |   __|   __| __  |  |  |  |   | |  |     |     |     |  _  |_   _|   __| \n");
    printf(" |   --|    -|   __|   __|    -|  |  |  | | | |  |   --|  |  | | | |   __| | | |   __| \n");
    printf(" |_____|__|__|_____|_____|__|__|  |_____|_|___|  |_____|_____|_|_|_|__|    |_| |_____| \n");
    printf("                                                                                       \n");
    printf("_______________________________________________________________________________________\n");
    printf("\n");
    printf("    NOM DE COMPTE : ");
    scanf("%251s", &username);
    printf("\n");
    printf("    MOT DE PASSE : ");
    scanf("%255s", &password);
    printf("\n");
    printf("    CONFIRMER MOT DE PASSE : ");
    scanf("%255s", &password2);
    printf("\n");
    if(compareStrings(password, password2) == 0)
    {
        sauvegarder();
        menu();
    }
    else
    {
        printf("_______________________________________________________________________________________\n");
        printf("ERREUR : Les deux Mots de Passe DOIVENT etre Identiques !\n");
        exercice15();
    }
}

int menu() // MON COMPTE
{
    int choix = 0;
    printf("____________________________________________________________________________\n");
    printf("                                                                            \n");
    printf("          _____ _____ _____    _____ _____ _____ _____ _____ _____          \n");
    printf("         |     |     |   | |  |     |     |     |  _  |_   _|   __|         \n");
    printf("         | | | |  |  | | | |  |   --|  |  | | | |   __| | | |   __|         \n");
    printf("         |_|_|_|_____|_|___|  |_____|_____|_|_|_|__|    |_| |_____|         \n");
    printf("                                                                            \n");
    printf("____________________________________________________________________________\n");
    printf("\n");
    printf("    UTILISATEUR : %s\n", username);
    printf("\n");
    printf("    SOLDE : %f\n", money);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("____________________________________________________________________________\n");
    printf("    [1] Deposer Montant       [2] Retirer Montant\n");
    printf("    [3] Options du Compte     [4] Deconnexion\n");
    printf("____________________________________________________________________________\n");
    printf(" Choix : ");
    scanf("%d", &choix);
    switch(choix)
    {
    case 1:
        deposit();
        break;
    case 2:
        withdraw();
        break;
    case 3:
        option();
        break;
    case 4:
        disconnect();
        break;
    default:
        menu();
        break;
    }
}

int deposit() // DÉPOT
{
    float montant = 0.00;
    printf("_______________________________________________________________________________________\n");
    printf("                                                                                       \n");
    printf("   _____ _____ _____ _____ _____ _____ _____    _____ _____ _____ _____ _____ _____    \n");
    printf("  |     |   __|  _  |     |   __|   __| __  |  |  _  | __  |   __|   __|   | |_   _|   \n");
    printf("  |  |  |   __|   __|  |  |__   |   __|    -|  |     |    -|  |  |   __| | | | | |     \n");
    printf("  |____/|_____|__|  |_____|_____|_____|__|__|  |__|__|__|__|_____|_____|_|___| |_|     \n");
    printf("                                                                                       \n");
    printf("_______________________________________________________________________________________\n");
    printf("\n");
    printf("\n");
    printf("                MONTANT : ");
    scanf("%f", &montant);
    printf("\n");
    printf("\n");
    if(montant<0)
    {
        printf("_______________________________________________________________________________________\n");
        printf(" |!| ERREUR : Montant incorrect |!| (doit etre > a 0)\n");
        Sleep(1500);
        deposit();
    }
    else if(montant>999999999999)
    {
        printf("_______________________________________________________________________________________\n");
        printf(" |!| ERREUR : Montant incorrect |!| (doit etre < a 1.000.000.000.000) grand fou..\n");
        Sleep(1500);
        deposit();
    }
    else
    {
        money += montant;
        sauvegarder();
        menu();
    }
}

int withdraw() // RETRAIT
{
    float montant = 0.00;
    int choix = 0;
    printf("_______________________________________________________________________________________\n");
    printf("                                                                                       \n");
    printf("   _____ _____ _____ _____ _____ _____ _____    _____ _____ _____ _____ _____ _____    \n");
    printf("  | __  |   __|_   _|     | __  |   __| __  |  |  _  | __  |   __|   __|   | |_   _|   \n");
    printf("  |    -|   __| | | |-   -|    -|   __|    -|  |     |    -|  |  |   __| | | | | |     \n");
    printf("  |__|__|_____| |_| |_____|__|__|_____|__|__|  |__|__|__|__|_____|_____|_|___| |_|     \n");
    printf("                                                                                       \n");
    printf("_______________________________________________________________________________________\n");
    printf("\n");
    printf("    MONTANT A RETIRER\n");
    printf("\n");
    printf("    [1] 20$         |   [4] 200$\n");
    printf("\n");
    printf("    [2] 50$         |   [5] 500$\n");
    printf("\n");
    printf("    [3] 100$        |   [6] AUTRE MONTANT\n");
    printf("\n");
    printf("_______________________________________________________________________________________\n");
    printf(" Choix : ");
    scanf("%d", &choix);
    switch(choix)
    {
    case 1:
        money -= 20;
        sauvegarder();
        menu();
        break;
    case 2:
        money -= 50;
        sauvegarder();
        menu();
        break;
    case 3:
        money -= 100;
        sauvegarder();
        menu();
        break;
    case 4:
        money -= 200;
        sauvegarder();
        menu();
        break;
    case 5:
        money -= 500;
        sauvegarder();
        menu();
        break;
    case 6:
        printf("_______________________________________________________________________________________\n");
        printf("                                                                                       \n");
        printf("   _____ _____ _____ _____ _____ _____ _____    _____ _____ _____ _____ _____ _____    \n");
        printf("  | __  |   __|_   _|     | __  |   __| __  |  |  _  | __  |   __|   __|   | |_   _|   \n");
        printf("  |    -|   __| | | |-   -|    -|   __|    -|  |     |    -|  |  |   __| | | | | |     \n");
        printf("  |__|__|_____| |_| |_____|__|__|_____|__|__|  |__|__|__|__|_____|_____|_|___| |_|     \n");
        printf("                                                                                       \n");
        printf("_______________________________________________________________________________________\n");
        printf("\n");
        printf("\n");
        printf("                MONTANT : ");
        scanf("%f", &montant);
        printf("\n");
        printf("\n");
        if(montant<0)
        {
            printf("_______________________________________________________________________________________\n");
            printf(" |!| ERREUR : Montant incorrect |!| (doit etre > a 0)\n");
            Sleep(1500);
            withdraw();
        }
        else if(montant>999999999999)
        {
            printf("_______________________________________________________________________________________\n");
            printf(" |!| ERREUR : Montant incorrect |!| (doit etre < a 1.000.000.000.000) grand fou..\n");
            Sleep(1500);
            withdraw();
        }
        else
        {
            money -= montant;
            sauvegarder();
            menu();
        }
        break;
    default:
        menu();
        break;
    }
}

int option() // OPTION DU COMPTE
{
    int choix = 0;
    char newpass[255], newpass2[255];
    printf("____________________________________________________________________________\n");
    printf("                                                                            \n");
    printf("             _____ _____ _____ _____ _____ _____ _____                      \n");
    printf("            |     |  _  |_   _|     |     |   | |   __|                     \n");
    printf("            |  |  |   __| | | |-   -|  |  | | | |__   |                     \n");
    printf("            |_____|__|    |_| |_____|_____|_|___|_____|                     \n");
    printf("                                                                            \n");
    printf("____________________________________________________________________________\n");
    printf("\n");
    printf("    [1] Changer de Mot de Passe\n");
    printf("\n");
    printf("    [2] Retour au Menu\n");
    printf("\n");
    printf("____________________________________________________________________________\n");
    printf(" Choix : ");
    scanf("%d", &choix);
    switch(choix)
    {
    case 1:
        printf("____________________________________________________________________________\n");
        printf("                                                                            \n");
        printf("             _____ _____ _____ _____ _____ _____ _____                      \n");
        printf("            |     |  _  |_   _|     |     |   | |   __|                     \n");
        printf("            |  |  |   __| | | |-   -|  |  | | | |__   |                     \n");
        printf("            |_____|__|    |_| |_____|_____|_|___|_____|                     \n");
        printf("                                                                            \n");
        printf("____________________________________________________________________________\n");
        printf("\n");
        printf("    Nouveau Mot de Passe : ");
        scanf("%s", &newpass);
        printf("\n");
        printf("    Confirmer Mot de Passe : ");
        scanf("%s", &newpass2);
        printf("\n");
        printf("____________________________________________________________________________\n");
        if(compareStrings(newpass, newpass2) == 0)
        {
            strcpy(password, newpass);
            printf(" Mot de Passe changer avec succes !\n");
            sauvegarder();
            option();
        }
        else if(compareStrings(newpass, password) == 0)
        {
            printf(" ERREUR : Doit etre different du mot de passe actuel !\n");
            option();
        }
        else
        {
            printf(" ERREUR : Les mots de passe sont differents !\n");
            option();
        }
        break;
    case 2:
        menu();
        break;
    default:
        menu();
        break;
    }
}

int disconnect() // SE DECONNECTER
{
    printf("____________________________________________________________________________\n");
    printf("                                                                   _        \n");
    printf("      _____ _____ _____ _____ __ __   _____ _____ _____ _____    _| |_      \n");
    printf("     |     |     |   | |   __|  |  | | __  |  _  |   | |  |  |  |   __|     \n");
    printf("     | | | |  |  | | | |   __|_   _| | __ -|     | | | |    -|  |__   |     \n");
    printf("     |_|_|_|_____|_|___|_____| |_|   |_____|__|__|_|___|__|__|  |_   _|     \n");
    printf("                                                                  |_|       \n");
    printf("____________________________________________________________________________\n");
    printf("                                                                            \n");
    printf("                                                                            \n");
    printf("                                                       __                   \n");
    printf("                     _____            _____           |  |                  \n");
    printf("                    | __  |_ _ ___   | __  |_ _ ___   |  |                  \n");
    printf("                    | __ -| | | -_|  | __ -| | | -_|  |__|                  \n");
    printf("                    |_____|_  |___|  |_____|_  |___|  |__|                  \n");
    printf("                          |___|            |___|                            \n");
    printf("                                                                            \n");
    printf("                                                                            \n");
    printf("____________________________________________________________________________\n");
    Sleep(1000);
    exercice15();
}

int compareStrings(const char *s1, const char *s2) // OUTILS POUR COMPARER 2 STRING
{
    int i = 0;

    // On parcourt les deux chaînes tant qu'aucune n'est terminée
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return 1; // Différents
        }
        i++;
    }

    // Si on sort de la boucle, soit les deux sont finies, soit une seule
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0; // Identiques
    else
        return 1; // Différents (une chaîne est plus longue que l’autre)
}

int sauvegarder() // Save
{
    filepath[255] = "";
    // On colle le nom de compte avec l'extention ".txt" pour avoir le nom du fichier
    strcpy(filepath, username);
    strcat(filepath, ext);
    // Ouverture du FICHIER + "w" pour créer/écraser un fichier
    FILE *data = fopen(filepath, "w");
    // On test que le FICHIER soit bien ouvert sinon return ERREUR
    if (data == NULL)
    {
        printf(" ERREUR FATALE : Fichier Introuvable");
        return 0;
    }
    // On sauvegarde les valeurs
    fprintf(data, "%s\n", password); // Sauvegarde du mot de passe
    fprintf(data, "%f\n", money); // Sauvegarde du l'argent
    printf(" SAUVEGARDE OK\n");
    // On ferme le FICHIER
    fclose(data);
}

int main()
{
    int exercice = 0;
    printf("\n");
    printf("Selectionne un Exercice :\n");
    printf("-------------------------------\n");
    printf("[1] Exercice 1 : Hello World x10\n");
    printf("[2] Exercice 2 : Compte de 0 a X\n");
    printf("[3] Exercice 3 : Compte de 0 a +X ou -X\n");
    printf("[4] Exercice 4 : Compte de 3 en 3\n");
    printf("[5] Exercice 5 : Compte de X en X\n");
    printf("[6] Exercice 6 : Somme des 10 Premiers Entiers\n");
    printf("[7] Exercice 7 : Somme des X Premiers Entiers\n");
    printf("[8] Exercice 8 : Moyenne 3 notes + Arrondi\n");
    printf("[9] Exercice 9 : Moyenne X notes + Arrondi\n");
    printf("[10] Exercice 10 : Table de Multiplication de X\n");
    printf("[11] Exercice 11 : Puissance\n");
    printf("[12] Exercice 12 : Factorielle\n");
    printf("[13] Exercice 13 : La Date\n");
    printf("[14] Exercice 14 : N-eme terme de la suite de Fibonacci\n");
    printf("[15] Exercice 15 : BANK ACCOUNT\n");
    printf("[0] QUITTER \n");
    printf("-------------------------------\n");
    printf("Selection : ");
    scanf("%d", &exercice);
    printf("\n");

    switch(exercice)
    {
    case 0:
        exit(0);
        break;
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
    case 13:
        exercice13();
        break;
    case 14:
        exercice14();
        break;
    case 15:
        exercice15();
        break;

    default :
        printf("    |!| RECOMMENCE |!|\n");
        Sleep(1500);
        main();
        break;
    }
    return 0;
}

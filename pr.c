#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void searchSomething()
{
    char line[100];
    char query[100];
    int found = 0;

    printf("What are you looking for: ");
    fgets(query, 100, stdin);

    if (fgets(query, sizeof(query), stdin) == NULL)
    {
        printf("Error reading input.\n");
    }

    FILE *file = fopen("search.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        if (strstr(line, query) != NULL)
        {
            printf("Found: %s", line);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("'%s' not found in the file.\n", query);
    }

    fclose(file);
}

int main()
{
    struct Youtube
    {
        struct channel
        {
            char channelname[50];
            char channelcategory[30];
            char ownername[50];
        } chinfo;

        struct useradhar
        {
            char adhar[13];
        } adinfo;

        struct socialmedia
        {
            char instaid[30];
            char gmail[50];
        } sminfo;

        struct dte
        {
            int dd;
            int mm;
            int yy;
        } dtinfo;

        struct add
        {
            char village[30];
            char city[30];
            char state[30];
            char country[30];
            int pin;
        } adrinfo;

    } user[10];

    int choice, i = 0;

    do
    {
        // Display the main menu
        printf("***********************Welcome To YouTube **********************************\n");
        printf("Hello Guy's, What do you want to do?\n");
        printf("1. Create New YouTube Channel \n");
        printf("2. Watch YouTube videos \n");
        printf("3. Search Something \n");
        printf("4. Maximum Subscriber's YouTube channel Names\n");
        printf("5. Maximum Likes YouTube videos \n");

        printf("6. Compare Two Youtube Channels\n");
        printf("7. YouTube some Records \n");
        printf("8. Subscribe To Youtube Channels\n");
        printf("9. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Create New YouTube Channel
            printf("Enter Your Name: ");
            scanf(" %[^\n]", user[i].chinfo.ownername);

            printf("Enter Your YouTube Channel Name: ");
            scanf(" %[^\n]", user[i].chinfo.channelname);

            printf("Enter Your YouTube Channel Category: ");
            scanf(" %s", user[i].chinfo.channelcategory);

            printf("Enter your Aadhar No: ");
            scanf("%s", user[i].adinfo.adhar);

            printf("Enter Account Opening Date (dd/mm/yyyy):");
            scanf("%d%d%d", &user[i].dtinfo.dd, &user[i].dtinfo.mm, &user[i].dtinfo.yy);

            printf("Enter Your Instagram ID: ");
            scanf("%s", user[i].sminfo.instaid);

            printf("Enter Your Gmail ID: ");
            scanf("%s", user[i].sminfo.gmail);

            printf("Enter Your Village:  ");
            scanf("%s", user[i].adrinfo.village);

            printf("Enter Your City: ");
            scanf("%s", user[i].adrinfo.city);

            printf("Enter Your State: ");
            scanf("%s", user[i].adrinfo.state);

            printf("Enter Your Country: ");
            scanf("%s", user[i].adrinfo.country);

            printf("Enter Your PIN:");
            scanf("%d", &user[i].adrinfo.pin);

            printf("Your channel has been created successfully.\n");

            FILE *fp;
            fp = fopen("create.txt", "w");
            if (fp == NULL)
            {
                printf("Error opening file.\n");
                break;
            }

            fprintf(fp, "%s\n", user[i].chinfo.ownername);
            fprintf(fp, "%s\n", user[i].chinfo.channelname);
            fprintf(fp, "%s\n", user[i].chinfo.channelcategory);
            fprintf(fp, "%s\n", user[i].adinfo.adhar);
            fprintf(fp, "%d/%d/%d\n", user[i].dtinfo.dd, user[i].dtinfo.mm, user[i].dtinfo.yy);
            fprintf(fp, "%s\n", user[i].sminfo.instaid);
            fprintf(fp, "%s\n", user[i].sminfo.gmail);
            fprintf(fp, "%s\n", user[i].adrinfo.village);
            fprintf(fp, "%s\n", user[i].adrinfo.city);
            fprintf(fp, "%s\n", user[i].adrinfo.state);
            fprintf(fp, "%s\n", user[i].adrinfo.country);
            fprintf(fp, "%d\n", user[i].adrinfo.pin);

            fclose(fp);
            i++;
            break;

        case 2:
        {
            char opinion;
            do
            {
                printf("----> a. Watch long videos\n");
                printf("----> b. Watch Shorts\n");
                printf("----> c. My mood is \n");
                printf("----> e. Exit \n");
                printf("What do you want to watch: ");
                scanf(" %c", &opinion);

                switch (opinion)
                {
                case 'a':
                {

                    printf("--------> p. music & entertainment\n");
                    printf("--------> q. cartoon\n");
                    printf("--------> r. Cricket\n");
                    printf("--------> g. Gaming Videos\n");

                    char guess;
                    printf("Enter your choice : ");
                    scanf(" %c", &guess);

                    switch (guess)
                    {
                    case 'p':
                    {
                        char er1[600];
                        FILE *fp4 = fopen("ytmusic.txt", "r");
                        if (fp4 == NULL)
                        {
                            printf("Error opening file.\n");
                            break;
                        }

                        while (fgets(er1, 600, fp4) != NULL)
                        {
                            printf("%s", er1);
                        }
                        fclose(fp4);
                    }
                    break;

                    case 'q':
                    {
                        char er3[600];
                        FILE *fp7 = fopen("ytcartoon.txt", "r");
                        if (fp7 == NULL)
                        {
                            printf("Error opening file.\n");
                            break;
                        }

                        while (fgets(er3, 600, fp7) != NULL)
                        {
                            printf("%s", er3);
                        }
                        fclose(fp7);
                    }
                    break;

                    case 'r':
                    {
                        char er4[600];
                        FILE *fp8 = fopen("ytcricket.txt", "r");
                        if (fp8 == NULL)
                        {
                            printf("Error opening file.\n");
                            break;
                        }

                        while (fgets(er4, 600, fp8) != NULL)
                        {
                            printf("%s", er4);
                        }
                        fclose(fp8);
                    }
                    break;

                    case 'g':
                    {
                        char er5[600];
                        FILE *fp9 = fopen("ytgaming.txt", "r");
                        if (fp9 == NULL)
                        {
                            printf("Error opening file.\n");
                            break;
                        }

                        while (fgets(er5, 600, fp9) != NULL)
                        {
                            printf("%s", er5);
                        }
                        fclose(fp9);
                    }
                    break;

                    default:
                        printf("invalid choice\n");
                        break;
                    }
                }
                break;

                case 'b':
                {
                    char er2[200];
                    FILE *fp5 = fopen("ytshorts.txt", "r");
                    if (fp5 == NULL)
                    {
                        printf("Error opening file.\n");
                        break;
                    }

                    while (fgets(er2, 200, fp5) != NULL)
                    {
                        printf("%s", er2);
                    }
                    fclose(fp5);
                }
                break;

                case 'c': // Handling mood
                {
                    char mood;
                    printf("Enter your mood (h for Happy  , s for Sad : ");
                    scanf(" %c", &mood);

                    if (mood == 'h') // Happy mood
                    {
                        char er6[600];
                        FILE *fpHappy = fopen("happymood.txt", "r");
                        if (fpHappy == NULL)
                        {
                            printf("Error opening happymood.txt file.\n");
                            break;
                        }

                        printf("You seem to be in a Happy mood! Here's something for you:\n");
                        while (fgets(er6, 600, fpHappy) != NULL)
                        {
                            printf("%s", er6);
                        }
                        fclose(fpHappy);
                    }
                    else if (mood == 's') // Sad mood
                    {
                        char er7[600];
                        FILE *fpSad = fopen("sadmood.txt", "r");
                        if (fpSad == NULL)
                        {
                            printf("Error opening sadmood.txt file.\n");
                            break;
                        }

                        printf("You seem to be in a Sad mood. Here's something to lift your spirits:\n");
                        while (fgets(er7, 600, fpSad) != NULL)
                        {
                            printf("%s", er7);
                        }
                        fclose(fpSad);
                    }
                    else // Invalid input for mood
                    {
                        printf("Invalid mood entered. Please choose 'h' for Happy or 's' for Sad.\n");
                    }
                }
                break;

                case 'e':
                    printf("Exiting video options...\n");
                    break;

                default:
                    printf("Not a valid entry.\n");
                    break;
                }

            } while (opinion != 'e');
        }
        break;

        case 3:
        {
            searchSomething();
        }
        break;

        case 4:
        {
            char da[100];
            FILE *fp1 = fopen("maxsub.txt", "r");
            if (fp1 == NULL)
            {
                printf("Error opening file.\n");
                break;
            }

            while (fgets(da, 100, fp1) != NULL)
            {
                printf("%s", da);
            }
            fclose(fp1);
        }
        break;

        case 5:
        {
            printf("Please Watch this video.....");
            char cs[100];
            FILE *fp5 = fopen("mostlikeyt.txt", "r");
            if (fp5 == NULL)
            {
                printf("Error opening file.\n");
                break;
            }

            while (fgets(cs, 100, fp5) != NULL)
            {
                printf("%s", cs);
            }
            fclose(fp5);
        }
        break;

        case 6:
        {
            char cs1[100];
            FILE *fp6 = fopen("cmpytchannels.txt", "r");
            if (fp6 == NULL)
            {
                printf("Error opening file.\n");
                break;
            }

            while (fgets(cs1, 100, fp6) != NULL)
            {
                printf("%s", cs1);
            }
            fclose(fp6);
        }
        break;

        case 7:
        {
            char ytr[100];
            FILE *fp2 = fopen("ytrecords.txt", "r");
            if (fp2 == NULL)
            {
                printf("Error opening file.\n");
                break;
            }

            while (fgets(ytr, 100, fp2) != NULL)
            {
                printf("%s", ytr);
            }
            fclose(fp2);
        }
        break;
        case 8:
        {
            char gh[10][20] = {"mrbeast", "totalgaming", "manojsaru", "codewithharry",
                               "godmines", "tv9marathi", "carryminati", "icc",
                               "telusco", "tseries" };
            int i;
            char click[20];

            printf("YouTube channel list:\n");
            for (i = 0; i < 10; i++)
            {
                printf("%s\n", gh[i]);
            }

            printf("Enter a YouTube channel to subscribe:\n");
            fgets(click, 100, stdin);
            if (fgets(click, 100, stdin) != NULL)
            {

                click[strcspn(click, "\n")] = '\0';
            }
            else
            {
                printf("Error reading input.\n");
                return 1;
            }

            int found = 0;
            for (i = 0; i < 10; i++)
            {
                if (strcmp(click, gh[i]) == 0)
                {
                    found = 1;
                    break;
                }
            }

            if (found)
            {
                printf("You are subscribing to channel: %s\n", click);

                FILE *fp10 = fopen("subsclist.txt", "a");
                if (fp10 == NULL)
                {
                    printf("Error opening file.\n");
                    break;
                }

                fprintf(fp10, "%s\n", click);
                fclose(fp10);
            }
            else
            {
                printf("Channel not found. Not subscribed.\n");
            }
            break;
        }

        case 9:
            printf("Exiting the program. Goodbye!\n");
            exit(0);

        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
        }
        printf("\n");
    } while (choice != 9);
}

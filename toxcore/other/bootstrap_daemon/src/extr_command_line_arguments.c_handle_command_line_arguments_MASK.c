
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int member_2; int const member_1; } ;
typedef int LOG_BACKEND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*,struct option*,int *) ;

 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;

 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;

void FUNC_5(int VAR_8, char *VAR_9[], char **VAR_10, LOG_BACKEND *VAR_11,
                                   bool *VAR_12)
{
    if (VAR_8 < 2) {
        FUNC_4(VAR_3, "Error: No arguments provided.\n\n");
        FUNC_2();
        FUNC_0(1);
    }

    VAR_6 = 0;

    static struct option VAR_13[] = {
        {"config", 128, 0, 'c'},
        {"foreground", 129, 0, 'f'},
        {"help", 129, 0, 'h'},
        {"log-backend", 128, 0, 'l'},
        {"version", 129, 0, 'v'},
        {0, 0, 0, 0 }
    };

    bool VAR_14 = 0;
    bool VAR_15 = 0;

    *VAR_12 = 0;

    int VAR_16;

    while ((VAR_16 = FUNC_1(VAR_8, VAR_9, ":", VAR_13, ((void*)0))) != -1) {

        switch (VAR_16) {

            case 'c':
                *VAR_10 = VAR_5;
                VAR_14 = 1;
                break;

            case 'f':
                *VAR_12 = 1;
                break;

            case 'h':
                FUNC_2();
                FUNC_0(0);

            case 'l':
                if (FUNC_3(VAR_5, "syslog") == 0) {
                    *VAR_11 = VAR_2;
                    VAR_15 = 1;
                } else if (FUNC_3(VAR_5, "stdout") == 0) {
                    *VAR_11 = VAR_1;
                    VAR_15 = 1;
                } else {
                    FUNC_4(VAR_3, "Error: Invalid BACKEND value for --log-backend option passed: %s\n\n", VAR_5);
                    FUNC_2();
                    FUNC_0(1);
                }

                break;

            case 'v':
                FUNC_4(VAR_4, "Version: %lu\n", VAR_0);
                FUNC_0(0);

            case '?':
                FUNC_4(VAR_3, "Error: Unrecognized option %s\n\n", VAR_9[VAR_7 - 1]);
                FUNC_2();
                FUNC_0(1);

            case ':':
                FUNC_4(VAR_3, "Error: No argument provided for option %s\n\n", VAR_9[VAR_7 - 1]);
                FUNC_2();
                FUNC_0(1);
        }
    }

    if (!VAR_15) {
        *VAR_11 = VAR_2;
    }

    if (!VAR_14) {
        FUNC_4(VAR_3, "Error: The required --config option wasn't specified\n\n");
        FUNC_2();
        FUNC_0(1);
    }
}

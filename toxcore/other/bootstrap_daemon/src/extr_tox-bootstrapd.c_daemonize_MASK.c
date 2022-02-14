
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ LOG_BACKEND ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*,int const) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;

void FUNC_9(LOG_BACKEND VAR_7, char *VAR_8)
{

    FILE *VAR_9;

    if ((VAR_9 = FUNC_4(VAR_8, "r"))) {
        FUNC_8(VAR_3, "Another instance of the daemon is already running, PID file %s exists.\n", VAR_8);
        FUNC_3(VAR_9);
    }


    VAR_9 = FUNC_4(VAR_8, "a+");

    if (VAR_9 == ((void*)0)) {
        FUNC_8(VAR_1, "Couldn't open the PID file for writing: %s. Exiting.\n", VAR_8);
        FUNC_2(1);
    }


    const pid_t VAR_10 = FUNC_5();

    if (VAR_10 > 0) {
        FUNC_6(VAR_9, "%d", VAR_10);
        FUNC_3(VAR_9);
        FUNC_8(VAR_2, "Forked successfully: PID: %d.\n", VAR_10);
        FUNC_2(0);
    } else {
        FUNC_3(VAR_9);
    }

    if (VAR_10 < 0) {
        FUNC_8(VAR_1, "Forking failed. Exiting.\n");
        FUNC_2(1);
    }


    if (FUNC_7() < 0) {
        FUNC_8(VAR_1, "SID creation failure. Exiting.\n");
        FUNC_2(1);
    }



    if ((FUNC_0("/")) < 0) {
        FUNC_8(VAR_1, "Couldn't change working directory to '/'. Exiting.\n");
        FUNC_2(1);
    }


    if (VAR_7 != VAR_0) {
        FUNC_1(VAR_6);
        FUNC_1(VAR_5);
        FUNC_1(VAR_4);
    }
}

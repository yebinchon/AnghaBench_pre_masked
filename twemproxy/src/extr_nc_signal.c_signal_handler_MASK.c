
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal {int signo; int signame; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;







 int FUNC_2 (int) ;
 void FUNC_3 () ;
 void FUNC_4 () ;
 void FUNC_5 () ;
 int FUNC_6 (char*,int,int ,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int const) ;
 struct signal* VAR_0 ;

void
FUNC_9(int VAR_1)
{
    struct signal *VAR_2;
    void (*VAR_3)(void);
    char *VAR_4;
    bool VAR_5;

    for (VAR_2 = VAR_0; VAR_2->signo != 0; VAR_2++) {
        if (VAR_2->signo == VAR_1) {
            break;
        }
    }
    FUNC_0(VAR_2->signo != 0);

    VAR_4 = "";
    VAR_3 = ((void*)0);
    VAR_5 = 0;

    switch (VAR_1) {
    case 129:
        break;

    case 128:
        break;

    case 131:
        VAR_4 = ", up logging level";
        VAR_3 = FUNC_4;
        break;

    case 130:
        VAR_4 = ", down logging level";
        VAR_3 = FUNC_3;
        break;

    case 134:
        VAR_4 = ", reopening log file";
        VAR_3 = FUNC_5;
        break;

    case 133:
        VAR_5 = 1;
        VAR_4 = ", exiting";
        break;

    case 132:
        FUNC_7();
        VAR_4 = ", core dumping";
        FUNC_8(132);
        break;

    default:
        FUNC_1();
    }

    FUNC_6("signal %d (%s) received%s", VAR_1, VAR_2->signame, VAR_4);

    if (VAR_3 != ((void*)0)) {
        VAR_3();
    }

    if (VAR_5) {
        FUNC_2(1);
    }
}

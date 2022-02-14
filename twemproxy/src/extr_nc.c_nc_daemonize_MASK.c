
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rstatus_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static rstatus_t
FUNC_11(int VAR_10)
{
    rstatus_t VAR_11;
    pid_t VAR_12, VAR_13;
    int VAR_14;

    VAR_12 = FUNC_4();
    switch (VAR_12) {
    case -1:
        FUNC_5("fork() failed: %s", FUNC_9(VAR_9));
        return VAR_0;

    case 0:
        break;

    default:

        FUNC_0(0);
    }



    VAR_13 = FUNC_7();
    if (VAR_13 < 0) {
        FUNC_5("setsid() failed: %s", FUNC_9(VAR_9));
        return VAR_0;
    }

    if (FUNC_8(VAR_3, VAR_5) == VAR_4) {
        FUNC_5("signal(SIGHUP, SIG_IGN) failed: %s", FUNC_9(VAR_9));
        return VAR_0;
    }

    VAR_12 = FUNC_4();
    switch (VAR_12) {
    case -1:
        FUNC_5("fork() failed: %s", FUNC_9(VAR_9));
        return VAR_0;

    case 0:
        break;

    default:

        FUNC_0(0);
    }




    if (VAR_10 == 0) {
        VAR_11 = FUNC_1("/");
        if (VAR_11 < 0) {
            FUNC_5("chdir(\"/\") failed: %s", FUNC_9(VAR_9));
            return VAR_0;
        }
    }


    FUNC_10(0);



    VAR_14 = FUNC_6("/dev/null", VAR_2);
    if (VAR_14 < 0) {
        FUNC_5("open(\"/dev/null\") failed: %s", FUNC_9(VAR_9));
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_14, VAR_7);
    if (VAR_11 < 0) {
        FUNC_5("dup2(%d, STDIN) failed: %s", VAR_14, FUNC_9(VAR_9));
        FUNC_2(VAR_14);
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_14, VAR_8);
    if (VAR_11 < 0) {
        FUNC_5("dup2(%d, STDOUT) failed: %s", VAR_14, FUNC_9(VAR_9));
        FUNC_2(VAR_14);
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_14, VAR_6);
    if (VAR_11 < 0) {
        FUNC_5("dup2(%d, STDERR) failed: %s", VAR_14, FUNC_9(VAR_9));
        FUNC_2(VAR_14);
        return VAR_0;
    }

    if (VAR_14 > VAR_6) {
        VAR_11 = FUNC_2(VAR_14);
        if (VAR_11 < 0) {
            FUNC_5("close(%d) failed: %s", VAR_14, FUNC_9(VAR_9));
            return VAR_0;
        }
    }

    return VAR_1;
}

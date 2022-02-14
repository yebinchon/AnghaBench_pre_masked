
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_pid; int ut_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 char* FUNC_2 (char*) ;
 struct utmpx* FUNC_3 (struct utmpx*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(int *VAR_3, int *VAR_4) {
        struct utmpx *VAR_5, VAR_6 = { .ut_type = VAR_0 };
        int VAR_7;
        const char *VAR_8;

        FUNC_0(VAR_3);
        VAR_8 = FUNC_2("RUNLEVEL");
        if (VAR_8 && VAR_8[0] > 0) {
                *VAR_3 = VAR_8[0];

                if (VAR_4) {


                        VAR_8 = FUNC_2("PREVLEVEL");
                        if (VAR_8 && VAR_8[0] > 0)
                                *VAR_4 = VAR_8[0];
                        else
                                *VAR_4 = 0;
                }

                return 0;
        }

        if (FUNC_5(VAR_1) < 0)
                return -VAR_2;

        FUNC_4();

        VAR_5 = FUNC_3(&VAR_6);
        if (!VAR_5)
                VAR_7 = -VAR_2;
        else {
                int VAR_9, VAR_10;

                VAR_9 = VAR_5->ut_pid & 0xFF;
                VAR_10 = (VAR_5->ut_pid >> 8) & 0xFF;

                *VAR_3 = VAR_9;
                if (VAR_4)
                        *VAR_4 = VAR_10;

                VAR_7 = 0;
        }

        FUNC_1();

        return VAR_7;
}

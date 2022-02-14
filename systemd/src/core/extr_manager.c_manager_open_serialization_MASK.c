
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Manager ;
typedef int FILE ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int * FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

int FUNC_4(Manager *VAR_1, FILE **VAR_2) {
        int VAR_3;
        FILE *VAR_4;

        FUNC_0(VAR_2);

        VAR_3 = FUNC_2("systemd-state");
        if (VAR_3 < 0)
                return VAR_3;

        VAR_4 = FUNC_1(VAR_3, "w+");
        if (!VAR_4) {
                FUNC_3(VAR_3);
                return -VAR_0;
        }

        *VAR_2 = VAR_4;
        return 0;
}

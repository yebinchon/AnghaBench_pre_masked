
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_2, char* VAR_3[]) {
        int VAR_4, VAR_5, VAR_6;

        FUNC_5(VAR_1);

        VAR_4 = FUNC_2();
        FUNC_0(VAR_4 >= 0);
        VAR_5 = FUNC_4();
        FUNC_0(VAR_5 >= 0);
        VAR_6 = FUNC_3();
        FUNC_0(VAR_6 >= 0);

        if (VAR_4 == 0 && VAR_5 == 0 && VAR_6 == 0)
                return FUNC_1("access to firmware variables not possible");

        return VAR_0;
}

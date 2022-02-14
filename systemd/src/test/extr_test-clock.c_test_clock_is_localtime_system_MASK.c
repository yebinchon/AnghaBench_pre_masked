
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(void) {
        int VAR_1;
        VAR_1 = FUNC_3(((void*)0));

        if (FUNC_1("/etc/adjtime", VAR_0) == 0) {
                FUNC_4("/etc/adjtime exists, clock_is_localtime() == %i", VAR_1);


                FUNC_2(FUNC_0(VAR_1, 0, 1));
        } else

                FUNC_2(VAR_1 == 0);
}

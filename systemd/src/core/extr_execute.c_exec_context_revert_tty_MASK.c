
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,char*,char const*) ;

void FUNC_6(ExecContext *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);


        FUNC_4(VAR_3, ((void*)0));





        if (FUNC_2(VAR_3)) {
                const char *VAR_5;

                VAR_5 = FUNC_3(VAR_3);
                if (VAR_5) {
                        VAR_4 = FUNC_1(VAR_5, VAR_2, 0, VAR_1);
                        if (VAR_4 < 0 && VAR_4 != -VAR_0)
                                FUNC_5(VAR_4, "Failed to reset TTY ownership/access mode of %s, ignoring: %m", VAR_5);
                }
        }
}

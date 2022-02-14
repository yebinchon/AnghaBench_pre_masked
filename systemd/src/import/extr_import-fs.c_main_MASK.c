
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(int VAR_3, char *VAR_4[]) {
        int VAR_5;

        FUNC_4(VAR_2, "");
        FUNC_2();
        FUNC_1();

        VAR_5 = FUNC_3(VAR_3, VAR_4);
        if (VAR_5 <= 0)
                goto finish;

        VAR_5 = FUNC_0(VAR_3, VAR_4);

finish:
        return VAR_5 < 0 ? VAR_0 : VAR_1;
}

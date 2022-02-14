
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int FUNC_3(int VAR_3, char* VAR_4[]) {
        int VAR_5;

        FUNC_2(VAR_2);

        VAR_5 = FUNC_1();
        if (VAR_5 < 0)
                FUNC_0(VAR_5, "loopback: %m");

        return VAR_5 >= 0 ? VAR_1 : VAR_0;
}

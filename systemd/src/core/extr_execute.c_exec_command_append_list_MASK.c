
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ExecCommand ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(ExecCommand **VAR_1, ExecCommand *VAR_2) {
        ExecCommand *VAR_3;

        FUNC_2(*VAR_1);
        FUNC_2(VAR_2);

        if (*VAR_1) {

                FUNC_0(VAR_0, *VAR_1, VAR_3);
                FUNC_1(VAR_0, *VAR_1, VAR_3, VAR_2);
        } else
              *VAR_1 = VAR_2;
}

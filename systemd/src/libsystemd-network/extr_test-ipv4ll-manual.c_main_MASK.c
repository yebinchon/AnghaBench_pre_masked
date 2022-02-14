
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;

int FUNC_3(int VAR_3, char *VAR_4[]) {
        FUNC_2(VAR_1);

        if (VAR_3 == 2)
                return FUNC_1(VAR_4[1], ((void*)0));
        else if (VAR_3 == 3)
                return FUNC_1(VAR_4[1], VAR_4[2]);
        else {
                FUNC_0("This program takes one or two arguments.\n"
                          "\t %s <ifname> [<seed>]", VAR_2);
                return VAR_0;
        }
}

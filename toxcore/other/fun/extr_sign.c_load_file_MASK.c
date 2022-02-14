
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(char *VAR_2, char **VAR_3)
{
    int VAR_4 = 0;
    FILE *VAR_5 = FUNC_1(VAR_2, "rb");

    if (VAR_5 == ((void*)0)) {
        *VAR_3 = ((void*)0);
        return -1;
    }

    FUNC_4(VAR_5, 0, VAR_0);
    VAR_4 = FUNC_5(VAR_5);
    FUNC_4(VAR_5, 0, VAR_1);
    *VAR_3 = (char *)FUNC_6(VAR_4 + 1);

    if (VAR_4 != FUNC_2(*VAR_3, sizeof(char), VAR_4, VAR_5)) {
        FUNC_3(*VAR_3);
        FUNC_0(VAR_5);
        return -2;
    }

    FUNC_0(VAR_5);
    (*VAR_3)[VAR_4] = 0;
    return VAR_4;
}

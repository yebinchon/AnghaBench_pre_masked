
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,int ,size_t) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, size_t *VAR_2)
{
    const unsigned VAR_3 = 512;

    if(VAR_0 - *VAR_2 < VAR_3 + 255)
        return 1;

    char *VAR_4 = *VAR_1;


    size_t VAR_5 = ((*VAR_2 + VAR_3) / 255 + 1) * 255 - 1;
    char *VAR_6 = FUNC_1(VAR_4, VAR_5);
    if (VAR_6 == ((void*)0))
        return 1;
    VAR_4 = VAR_6;

    FUNC_0(VAR_4 + *VAR_2, 0, VAR_5 - *VAR_2);
    *VAR_1 = VAR_4;
    *VAR_2 = VAR_5;
    return 0;
}

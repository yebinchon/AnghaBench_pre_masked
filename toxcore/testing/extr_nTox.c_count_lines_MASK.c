
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

int FUNC_1(char *VAR_0)
{
    size_t VAR_1, VAR_2 = FUNC_0(VAR_0);
    int VAR_3 = 1;

    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
        if (VAR_0[VAR_1] == '\n')
            VAR_3++;
    }

    return VAR_3;
}

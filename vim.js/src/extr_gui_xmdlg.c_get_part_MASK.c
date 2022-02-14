
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char *VAR_0, int VAR_1, char *VAR_2)
{
    int VAR_3;
    int VAR_4;

    *VAR_2 = '\0';

    for (VAR_3 = 0; (VAR_1 > 0) && (VAR_0[VAR_3] != '\0'); ++VAR_3)
 if (VAR_0[VAR_3] == '-')
     VAR_1--;

    if (VAR_0[VAR_3] == '\0')
 return;

    for (VAR_4 = 0; (VAR_0[VAR_3] != '-') && (VAR_0[VAR_3] != '\0'); ++VAR_3, ++VAR_4)
 VAR_2[VAR_4] = VAR_0[VAR_3];
    VAR_2[VAR_4] = '\0';
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int const) ;
 int FUNC_1 (int ,char*,char*) ;

void FUNC_2(const uint8_t *VAR_2)
{
    char VAR_3[2 * VAR_1 + 1];
    int VAR_4 = 0;

    size_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_4 += FUNC_0(VAR_3 + VAR_4, "%02hhX", VAR_2[VAR_5]);
    }

    FUNC_1(VAR_0, "Public Key: %s\n", VAR_3);

    return;
}

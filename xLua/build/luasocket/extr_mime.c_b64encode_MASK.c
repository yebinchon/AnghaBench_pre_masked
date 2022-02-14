
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;
typedef scalar_t__ UC ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static size_t FUNC_1(UC VAR_1, UC *VAR_2, size_t VAR_3,
        luaL_Buffer *VAR_4)
{
    VAR_2[VAR_3++] = VAR_1;
    if (VAR_3 == 3) {
        UC VAR_5[4];
        unsigned long VAR_6 = 0;
        VAR_6 += VAR_2[0]; VAR_6 <<= 8;
        VAR_6 += VAR_2[1]; VAR_6 <<= 8;
        VAR_6 += VAR_2[2];
        VAR_5[3] = VAR_0[VAR_6 & 0x3f]; VAR_6 >>= 6;
        VAR_5[2] = VAR_0[VAR_6 & 0x3f]; VAR_6 >>= 6;
        VAR_5[1] = VAR_0[VAR_6 & 0x3f]; VAR_6 >>= 6;
        VAR_5[0] = VAR_0[VAR_6];
        FUNC_0(VAR_4, (char *) VAR_5, 4);
        VAR_3 = 0;
    }
    return VAR_3;
}

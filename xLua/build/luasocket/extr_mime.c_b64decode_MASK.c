
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;
typedef size_t UC ;


 int* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static size_t FUNC_1(UC VAR_1, UC *VAR_2, size_t VAR_3,
        luaL_Buffer *VAR_4)
{

    if (VAR_0[VAR_1] > 64) return VAR_3;
    VAR_2[VAR_3++] = VAR_1;

    if (VAR_3 == 4) {
        UC VAR_5[3];
        int VAR_6, VAR_7 = 0;
        VAR_7 = VAR_0[VAR_2[0]]; VAR_7 <<= 6;
        VAR_7 |= VAR_0[VAR_2[1]]; VAR_7 <<= 6;
        VAR_7 |= VAR_0[VAR_2[2]]; VAR_7 <<= 6;
        VAR_7 |= VAR_0[VAR_2[3]];
        VAR_5[2] = (UC) (VAR_7 & 0xff); VAR_7 >>= 8;
        VAR_5[1] = (UC) (VAR_7 & 0xff); VAR_7 >>= 8;
        VAR_5[0] = (UC) VAR_7;

        VAR_6 = (VAR_2[2] == '=') ? 1 : (VAR_2[3] == '=') ? 2 : 3;
        FUNC_0(VAR_4, (char *) VAR_5, VAR_6);
        return 0;

    } else return VAR_3;
}

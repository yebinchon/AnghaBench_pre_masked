
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;
typedef char UC ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static size_t FUNC_1(const UC *VAR_1, size_t VAR_2,
        luaL_Buffer *VAR_3)
{
    unsigned long VAR_4 = 0;
    UC VAR_5[4] = {'=', '=', '=', '='};
    switch (VAR_2) {
        case 1:
            VAR_4 = VAR_1[0] << 4;
            VAR_5[1] = VAR_0[VAR_4 & 0x3f]; VAR_4 >>= 6;
            VAR_5[0] = VAR_0[VAR_4];
            FUNC_0(VAR_3, (char *) VAR_5, 4);
            break;
        case 2:
            VAR_4 = VAR_1[0]; VAR_4 <<= 8;
            VAR_4 |= VAR_1[1]; VAR_4 <<= 2;
            VAR_5[2] = VAR_0[VAR_4 & 0x3f]; VAR_4 >>= 6;
            VAR_5[1] = VAR_0[VAR_4 & 0x3f]; VAR_4 >>= 6;
            VAR_5[0] = VAR_0[VAR_4];
            FUNC_0(VAR_3, (char *) VAR_5, 4);
            break;
        default:
            break;
    }
    return 0;
}

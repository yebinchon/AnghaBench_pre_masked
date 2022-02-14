
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int UChar ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int const) ;

__attribute__((used)) static char *FUNC_2(const UChar *VAR_0, int32_t VAR_1)
{
    char *VAR_2 = (char *) FUNC_0(VAR_1 * 5 + 1);
    char *VAR_3 = VAR_2;
    if (!VAR_2)
        return "";

    while (VAR_1 > 0) {
        FUNC_1(VAR_3, 6, "%04hX ", *VAR_0);
        VAR_1--;
        VAR_0++;
        VAR_3 += 5;
    }

    return VAR_2;
}

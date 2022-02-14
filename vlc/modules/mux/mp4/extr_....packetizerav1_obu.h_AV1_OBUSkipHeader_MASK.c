
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*,size_t,scalar_t__*) ;

__attribute__((used)) static bool FUNC_3(const uint8_t **VAR_0, size_t *VAR_1)
{
    if(*VAR_1 < 1)
        return 0;
    size_t VAR_2 = 1 + !!FUNC_0(*VAR_0);
    if(FUNC_1(*VAR_0))
    {
        uint8_t VAR_3;
        (void) FUNC_2(*VAR_0, *VAR_1, &VAR_3);
        if(VAR_3 == 0)
            return 0;
        VAR_2 += VAR_3;
    }
    if(VAR_2 > *VAR_1)
        return 0;
    *VAR_0 += VAR_2;
    *VAR_1 -= VAR_2;
    return 1;
}

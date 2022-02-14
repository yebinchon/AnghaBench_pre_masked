
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__ const*,size_t,scalar_t__*) ;

__attribute__((used)) static uint32_t FUNC_4(const uint8_t *VAR_0, size_t VAR_1, uint8_t *VAR_2)
{
    if(!FUNC_1(VAR_0))
    {
        if(FUNC_0(VAR_0) && VAR_1 < 2)
            return 0;
        return VAR_1 - 1 - FUNC_0(VAR_0);
    }

    if(FUNC_0(VAR_0))
    {
        if(VAR_1 == 1)
        {
            *VAR_2 = 0;
            return 0;
        }

        VAR_0 += 1;
        VAR_1 -= 1;
    }
    uint64_t VAR_3 = FUNC_3(&VAR_0[1], VAR_1 - 1, VAR_2);
    if(VAR_3 > (FUNC_2(1) << 32) - 1)
    {
        *VAR_2 = 0;
        return 0;
    }
    return VAR_3;
}

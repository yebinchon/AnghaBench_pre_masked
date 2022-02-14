
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static inline int FUNC_2(uint32_t *VAR_0, const uint8_t *VAR_1, unsigned int *VAR_2, int VAR_3, int VAR_4)
{
    switch(VAR_4&0x03)
    {
    case 1:
        if (VAR_3 < 1)
            return -1;
        *VAR_0 = VAR_1[*VAR_2]; *VAR_2 += 1;
        return 0;
    case 2:
        if (VAR_3 < 2)
            return -1;
        *VAR_0 = FUNC_1(&VAR_1[*VAR_2]); *VAR_2 += 2;
        return 0;
    case 3:
        if (VAR_3 < 4)
            return -1;
        *VAR_0 = FUNC_0(&VAR_1[*VAR_2]); *VAR_2 += 4;
        return 0;
    case 0:
    default:
        return 0;
    }
}

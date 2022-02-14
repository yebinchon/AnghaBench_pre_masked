
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, const uint8_t *VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    if (VAR_2 != (void *)4)
        return 1;

    if (VAR_5 != 5)
        return 1;

    if (FUNC_0(VAR_3, VAR_1) != 0)
        return 1;

    if (VAR_4[0] == 1 && VAR_4[1] == 2 && VAR_4[2] == 3 && VAR_4[3] == 4 && VAR_4[4] == 5) {
        VAR_0++;
        return 0;
    }

    return 1;
}

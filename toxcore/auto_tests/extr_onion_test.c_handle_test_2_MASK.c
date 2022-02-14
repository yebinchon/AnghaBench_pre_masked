
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int IP_Port ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, IP_Port VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    if (VAR_4 != sizeof("\x84 install Gentoo"))
        return 1;

    if (FUNC_0(VAR_3, (uint8_t *)"\x84 install gentoo", sizeof("\x84 install gentoo")) != 0)
        return 1;

    VAR_0 = 1;
    return 0;
}

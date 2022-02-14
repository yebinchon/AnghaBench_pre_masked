
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int const*,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*,unsigned int,int const*,int const*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const uint8_t *VAR_2, unsigned int VAR_3, const uint8_t *VAR_4,
                                uint16_t VAR_5)
{
    if (VAR_5 != 6)
        return -1;

    if (FUNC_0(VAR_4, "Gentoo", VAR_5) != 0)
        return -1;

    if (FUNC_1(VAR_1, VAR_3, VAR_2, VAR_4, VAR_5) == 0)
        VAR_0 = 1;

    return 0;
}

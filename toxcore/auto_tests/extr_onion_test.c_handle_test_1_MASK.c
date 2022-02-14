
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int net; } ;
typedef TYPE_1__ Onion ;
typedef int IP_Port ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,char*,int) ;
 int FUNC_1 (int ,int ,int *,int,int const*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, IP_Port VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    Onion *VAR_5 = VAR_1;

    if (FUNC_0(VAR_3, "\x83 Install Gentoo", sizeof("\x83 Install Gentoo")) != 0)
        return 1;

    if (FUNC_1(VAR_5->net, VAR_2, (uint8_t *)"\x84 install gentoo", sizeof("\x84 install gentoo"),
                            VAR_3 + sizeof("\x83 Install Gentoo")) == -1)
        return 1;

    VAR_0 = 1;
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* uint8; int * uint32; } ;
struct TYPE_6__ {int* uint8; int uint32; } ;
struct TYPE_7__ {scalar_t__ family; TYPE_5__ ip6; TYPE_1__ ip4; } ;
typedef TYPE_1__ IP4 ;
typedef TYPE_2__ IP ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__) ;
 scalar_t__ FUNC_1 (TYPE_2__) ;

int FUNC_2(IP VAR_2)
{
    if (FUNC_1(VAR_2))
        return 0;

    if (VAR_2.family == VAR_0) {
        IP4 VAR_3 = VAR_2.ip4;


        if (VAR_3[0] == 10)
            return 0;


        if (VAR_3[0] == 172 && VAR_3[1] >= 16 && VAR_3[1] <= 31)
            return 0;


        if (VAR_3[0] == 192 && VAR_3[1] == 168)
            return 0;


        if (VAR_3[0] == 169 && VAR_3[1] == 254 && VAR_3[2] != 0
                && VAR_3[2] != 255)
            return 0;



        if ((VAR_3[0] == 100) && ((VAR_3[1] & 0xC0) == 0x40))
            return 0;

    } else if (VAR_2.family == VAR_1) {



        if (((VAR_2.ip6.uint8[0] == 0xFF) && (VAR_2.ip6.uint8[1] < 3) && (VAR_2.ip6.uint8[15] == 1)) ||
                ((VAR_2.ip6.uint8[0] == 0xFE) && ((VAR_2.ip6.uint8[1] & 0xC0) == 0x80)))
            return 0;


        if (FUNC_0(VAR_2.ip6)) {
            IP VAR_4;
            VAR_4 = VAR_0;
            VAR_4 = VAR_2.ip6.uint32[3];
            return FUNC_2(VAR_4);
        }
    }

    return -1;
}

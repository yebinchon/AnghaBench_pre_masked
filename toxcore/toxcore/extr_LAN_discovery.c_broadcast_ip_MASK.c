
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ sa_family_t ;
struct TYPE_7__ {void* uint32; } ;
struct TYPE_6__ {int* uint8; void** uint32; } ;
struct TYPE_8__ {TYPE_2__ ip4; scalar_t__ family; TYPE_1__ ip6; } ;
typedef TYPE_3__ IP ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static IP FUNC_2(sa_family_t VAR_3, sa_family_t VAR_4)
{
    IP VAR_5;
    FUNC_1(&VAR_5);

    if (VAR_3 == VAR_1) {
        if (VAR_4 == VAR_1) {
            VAR_5.family = VAR_1;



            VAR_5.ip6.uint8[ 0] = 0xFF;
            VAR_5.ip6.uint8[ 1] = 0x02;
            VAR_5.ip6.uint8[15] = 0x01;
        } else if (VAR_4 == VAR_0) {
            VAR_5.family = VAR_1;
            VAR_5.ip6.uint32[0] = 0;
            VAR_5.ip6.uint32[1] = 0;
            VAR_5.ip6.uint32[2] = FUNC_0(0xFFFF);
            VAR_5.ip6.uint32[3] = VAR_2;
        }
    } else if (VAR_3 == VAR_0) {
        if (VAR_4 == VAR_0) {
            VAR_5.family = VAR_0;
            VAR_5.ip4.uint32 = VAR_2;
        }
    }

    return VAR_5;
}

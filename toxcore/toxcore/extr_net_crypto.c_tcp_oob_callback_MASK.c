
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {unsigned int* uint32; } ;
struct TYPE_6__ {TYPE_1__ ip6; int family; } ;
struct TYPE_7__ {TYPE_2__ ip; scalar_t__ port; } ;
typedef int Net_Crypto ;
typedef TYPE_3__ IP_Port ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__,scalar_t__ const*,int ) ;
 int FUNC_1 (int *,unsigned int,scalar_t__ const*,scalar_t__ const*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, const uint8_t *VAR_5, unsigned int VAR_6,
                            const uint8_t *VAR_7, uint16_t VAR_8)
{
    if (VAR_8 == 0 || VAR_8 > VAR_0)
        return -1;

    Net_Crypto *VAR_9 = VAR_4;

    if (VAR_7[0] == VAR_1) {
        return FUNC_1(VAR_9, VAR_6, VAR_5, VAR_7, VAR_8);
    } else if (VAR_7[0] == VAR_2) {
        IP_Port VAR_10;
        VAR_10.port = 0;
        VAR_10.ip.family = VAR_3;
        VAR_10.ip.ip6.uint32[0] = VAR_6;

        if (FUNC_0(VAR_9, VAR_10, VAR_7, VAR_8) != 0)
            return -1;

        return 0;
    } else {
        return -1;
    }
}

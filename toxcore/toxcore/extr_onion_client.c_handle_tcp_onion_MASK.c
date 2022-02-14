
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int family; } ;
struct TYPE_6__ {TYPE_1__ ip; int member_0; } ;
typedef TYPE_2__ IP_Port ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,TYPE_2__,scalar_t__ const*,int ) ;
 int FUNC_1 (void*,TYPE_2__,scalar_t__ const*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    if (VAR_5 == 0)
        return 1;

    IP_Port VAR_6 = {0};
    VAR_6.ip.family = VAR_2;

    if (VAR_4[0] == VAR_0) {
        return FUNC_0(VAR_3, VAR_6, VAR_4, VAR_5);
    } else if (VAR_4[0] == VAR_1) {
        return FUNC_1(VAR_3, VAR_6, VAR_4, VAR_5);
    }

    return 1;
}

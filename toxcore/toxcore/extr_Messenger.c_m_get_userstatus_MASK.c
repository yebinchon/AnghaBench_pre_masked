
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {scalar_t__ userstatus; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;

uint8_t FUNC_1(const Messenger *VAR_2, int32_t VAR_3)
{
    if (FUNC_0(VAR_2, VAR_3))
        return VAR_0;

    uint8_t VAR_4 = VAR_2->friendlist[VAR_3].userstatus;

    if (VAR_4 >= VAR_0) {
        VAR_4 = VAR_1;
    }

    return VAR_4;
}

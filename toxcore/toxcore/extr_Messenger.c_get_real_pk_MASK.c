
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {int real_pk; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(const Messenger *VAR_1, int32_t VAR_2, uint8_t *VAR_3)
{
    if (FUNC_0(VAR_1, VAR_2))
        return -1;

    FUNC_1(VAR_3, VAR_1->friendlist[VAR_2].real_pk, VAR_0);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {int statusmessage; int statusmessage_length; } ;
typedef TYPE_2__ Messenger ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

int FUNC_4(const Messenger *VAR_0, int32_t VAR_1, uint8_t *VAR_2, uint32_t VAR_3)
{
    if (FUNC_1(VAR_0, VAR_1))
        return -1;

    int VAR_4 = FUNC_0(VAR_3, VAR_0->friendlist[VAR_1].statusmessage_length);

    FUNC_2(VAR_2, VAR_0->friendlist[VAR_1].statusmessage, VAR_4);
    FUNC_3(VAR_2 + VAR_4, 0, VAR_3 - VAR_4);
    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {int user_istyping; scalar_t__ user_istyping_sent; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ FUNC_0 (TYPE_2__*,size_t) ;

int FUNC_1(Messenger *VAR_0, int32_t VAR_1, uint8_t VAR_2)

{
    if (VAR_2 != 0 && VAR_2 != 1)
        return -1;

    if (FUNC_0(VAR_0, VAR_1))
        return -1;

    if (VAR_0->friendlist[VAR_1].user_istyping == VAR_2)
        return 0;

    VAR_0->friendlist[VAR_1].user_istyping = VAR_2;
    VAR_0->friendlist[VAR_1].user_istyping_sent = 0;

    return 0;
}

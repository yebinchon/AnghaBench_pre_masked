
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t int32_t ;
struct TYPE_10__ {scalar_t__ status; int friendcon_id; int real_pk; } ;
struct TYPE_9__ {int numfriends; TYPE_5__* friendlist; int fr_c; int fr; int friend_connectionstatuschange_internal_userdata; int (* friend_connectionstatuschange_internal ) (TYPE_1__*,size_t,int ,int ) ;} ;
typedef TYPE_1__ Messenger ;
typedef int Friend ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,size_t,int ,int ) ;

int FUNC_10(Messenger *VAR_4, int32_t VAR_5)
{
    if (FUNC_3(VAR_4, VAR_5))
        return -1;

    if (VAR_4->friend_connectionstatuschange_internal)
        VAR_4->friend_connectionstatuschange_internal(VAR_4, VAR_5, 0, VAR_4->friend_connectionstatuschange_internal_userdata);

    FUNC_0(VAR_4, VAR_5);
    FUNC_7(&(VAR_4->fr), VAR_4->friendlist[VAR_5].real_pk);
    FUNC_2(VAR_4->fr_c, VAR_4->friendlist[VAR_5].friendcon_id, VAR_2, 0, 0, 0, 0, 0);

    if (FUNC_1(VAR_4->fr_c, VAR_4->friendlist[VAR_5].friendcon_id) == VAR_1) {
        FUNC_8(VAR_4, VAR_4->friendlist[VAR_5].friendcon_id);
    }

    FUNC_4(VAR_4->fr_c, VAR_4->friendlist[VAR_5].friendcon_id);
    FUNC_5(&(VAR_4->friendlist[VAR_5]), 0, sizeof(Friend));
    uint32_t VAR_6;

    for (VAR_6 = VAR_4->numfriends; VAR_6 != 0; --VAR_6) {
        if (VAR_4->friendlist[VAR_6 - 1].status != VAR_3)
            break;
    }

    VAR_4->numfriends = VAR_6;

    if (FUNC_6(VAR_4, VAR_4->numfriends) != 0)
        return VAR_0;

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t int32_t ;
struct TYPE_9__ {int friend_connectionstatuschange_internal_userdata; int (* friend_connectionstatuschange_internal ) (TYPE_2__*,size_t,scalar_t__ const,int ) ;TYPE_1__* friendlist; } ;
struct TYPE_8__ {scalar_t__ status; scalar_t__ user_istyping_sent; scalar_t__ statusmessage_sent; scalar_t__ userstatus_sent; scalar_t__ name_sent; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t,scalar_t__ const,int ) ;

__attribute__((used)) static void FUNC_4(Messenger *VAR_2, int32_t VAR_3, uint8_t VAR_4)
{
    if (VAR_4 == VAR_1)
        return;

    const uint8_t VAR_5 = VAR_2->friendlist[VAR_3].status == VAR_0;
    const uint8_t VAR_6 = VAR_4 == VAR_0;

    if (VAR_6 != VAR_5) {
        if (VAR_5) {
            FUNC_0(VAR_2, VAR_3);
            FUNC_2(VAR_2, VAR_3);
        } else {
            VAR_2->friendlist[VAR_3].name_sent = 0;
            VAR_2->friendlist[VAR_3].userstatus_sent = 0;
            VAR_2->friendlist[VAR_3].statusmessage_sent = 0;
            VAR_2->friendlist[VAR_3].user_istyping_sent = 0;
        }

        VAR_2->friendlist[VAR_3].status = VAR_4;

        FUNC_1(VAR_2, VAR_3);

        if (VAR_2->friend_connectionstatuschange_internal)
            VAR_2->friend_connectionstatuschange_internal(VAR_2, VAR_3, VAR_6,
                    VAR_2->friend_connectionstatuschange_internal_userdata);
    }
}

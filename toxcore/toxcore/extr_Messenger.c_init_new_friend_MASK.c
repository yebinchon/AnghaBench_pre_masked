
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_8__ {scalar_t__ status; int friendcon_id; scalar_t__ message_id; scalar_t__ is_typing; int userstatus; scalar_t__ statusmessage_length; int real_pk; scalar_t__ friendrequest_lastsent; } ;
struct TYPE_7__ {int numfriends; int fr_c; TYPE_4__* friendlist; } ;
typedef TYPE_1__ Messenger ;
typedef int Friend ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ,int *,int *,int *,TYPE_1__*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,scalar_t__ const*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (int ,scalar_t__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,size_t) ;

__attribute__((used)) static int32_t FUNC_7(Messenger *VAR_8, const uint8_t *VAR_9, uint8_t VAR_10)
{

    if (FUNC_5(VAR_8, VAR_8->numfriends + 1) != 0)
        return VAR_0;

    FUNC_3(&(VAR_8->friendlist[VAR_8->numfriends]), 0, sizeof(Friend));

    int VAR_11 = FUNC_4(VAR_8->fr_c, VAR_9);

    if (VAR_11 == -1)
        return VAR_0;

    uint32_t VAR_12;

    for (VAR_12 = 0; VAR_12 <= VAR_8->numfriends; ++VAR_12) {
        if (VAR_8->friendlist[VAR_12].status == VAR_3) {
            VAR_8->friendlist[VAR_12].status = VAR_10;
            VAR_8->friendlist[VAR_12].friendcon_id = VAR_11;
            VAR_8->friendlist[VAR_12].friendrequest_lastsent = 0;
            FUNC_2(VAR_8->friendlist[VAR_12].real_pk, VAR_9);
            VAR_8->friendlist[VAR_12].statusmessage_length = 0;
            VAR_8->friendlist[VAR_12].userstatus = VAR_4;
            VAR_8->friendlist[VAR_12].is_typing = 0;
            VAR_8->friendlist[VAR_12].message_id = 0;
            FUNC_1(VAR_8->fr_c, VAR_11, VAR_2, &VAR_7, &VAR_6,
                                        &VAR_5, VAR_8, VAR_12);

            if (VAR_8->numfriends == VAR_12)
                ++VAR_8->numfriends;

            if (FUNC_0(VAR_8->fr_c, VAR_11) == VAR_1) {
                FUNC_6(VAR_8, VAR_12);
            }

            return VAR_12;
        }
    }

    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint64_t ;
typedef size_t uint32_t ;
struct TYPE_14__ {size_t numfriends; TYPE_1__* friendlist; int userstatus; int statusmessage_length; int statusmessage; int name_length; int name; int fr_c; } ;
struct TYPE_13__ {scalar_t__ status; int name_sent; int statusmessage_sent; int userstatus_sent; int user_istyping_sent; void* last_seen_time; int user_istyping; void* friendrequest_lastsent; int info_size; int info; int friendrequest_nospam; int friendcon_id; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,size_t,void*) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_2__*,size_t,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,size_t,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,size_t,int ) ;
 int FUNC_9 (TYPE_2__*,size_t,scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;
 void* FUNC_11 () ;

void FUNC_12(Messenger *VAR_4)
{
    uint32_t VAR_5;
    uint64_t VAR_6 = FUNC_11();

    for (VAR_5 = 0; VAR_5 < VAR_4->numfriends; ++VAR_5) {
        if (VAR_4->friendlist[VAR_5].status == VAR_0) {
            int VAR_7 = FUNC_5(VAR_4->fr_c, VAR_4->friendlist[VAR_5].friendcon_id, VAR_4->friendlist[VAR_5].friendrequest_nospam,
                                                VAR_4->friendlist[VAR_5].info,
                                                VAR_4->friendlist[VAR_5].info_size);

            if (VAR_7 >= 0) {
                FUNC_9(VAR_4, VAR_5, VAR_3);
                VAR_4->friendlist[VAR_5].friendrequest_lastsent = VAR_6;
            }
        }

        if (VAR_4->friendlist[VAR_5].status == VAR_3
                || VAR_4->friendlist[VAR_5].status == VAR_1) {
            if (VAR_4->friendlist[VAR_5].status == VAR_3) {



                FUNC_0(VAR_4, VAR_5, VAR_6);
            }
        }

        if (VAR_4->friendlist[VAR_5].status == VAR_2) {
            if (VAR_4->friendlist[VAR_5].name_sent == 0) {
                if (FUNC_4(VAR_4, VAR_5, VAR_4->name, VAR_4->name_length))
                    VAR_4->friendlist[VAR_5].name_sent = 1;
            }

            if (VAR_4->friendlist[VAR_5].statusmessage_sent == 0) {
                if (FUNC_6(VAR_4, VAR_5, VAR_4->statusmessage, VAR_4->statusmessage_length))
                    VAR_4->friendlist[VAR_5].statusmessage_sent = 1;
            }

            if (VAR_4->friendlist[VAR_5].userstatus_sent == 0) {
                if (FUNC_8(VAR_4, VAR_5, VAR_4->userstatus))
                    VAR_4->friendlist[VAR_5].userstatus_sent = 1;
            }

            if (VAR_4->friendlist[VAR_5].user_istyping_sent == 0) {
                if (FUNC_7(VAR_4, VAR_5, VAR_4->friendlist[VAR_5].user_istyping))
                    VAR_4->friendlist[VAR_5].user_istyping_sent = 1;
            }

            FUNC_1(VAR_4, VAR_5);
            FUNC_2(VAR_4, VAR_5);
            FUNC_3(VAR_4, VAR_5);

            VAR_4->friendlist[VAR_5].last_seen_time = (uint64_t) FUNC_10(((void*)0));
        }
    }
}

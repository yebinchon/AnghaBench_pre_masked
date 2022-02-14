
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_7__ {TYPE_1__* friendlist; int friend_connectionstatuschange_userdata; int (* friend_connectionstatuschange ) (TYPE_2__*,size_t,int,int ) ;} ;
struct TYPE_6__ {int last_connection_udp_tcp; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (TYPE_2__*,size_t,int,int ) ;

__attribute__((used)) static void FUNC_2(Messenger *VAR_3, int32_t VAR_4)
{
    int VAR_5 = VAR_3->friendlist[VAR_4].last_connection_udp_tcp;

    int VAR_6 = FUNC_0(VAR_3, VAR_4);

    if (VAR_6 == -1)
        return;

    if (VAR_6 == VAR_2) {
        if (VAR_5 == VAR_1) {
            return;
        } else {
            VAR_6 = VAR_0;
        }
    }

    if (VAR_5 != VAR_6) {
        if (VAR_3->friend_connectionstatuschange)
            VAR_3->friend_connectionstatuschange(VAR_3, VAR_4, VAR_6, VAR_3->friend_connectionstatuschange_userdata);
    }

    VAR_3->friendlist[VAR_4].last_connection_udp_tcp = VAR_6;
}

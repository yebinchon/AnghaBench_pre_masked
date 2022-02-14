
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; int friend_number; TYPE_1__* session; } ;
struct TYPE_6__ {int mutex; int messenger; } ;
typedef TYPE_1__ MSISession ;
typedef int MSIMessage ;
typedef TYPE_2__ MSICall ;


 int FUNC_0 (char*,TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ,int *) ;

int FUNC_7 (MSICall *VAR_2)
{
    if (!VAR_2 || !VAR_2->session)
        return -1;

    FUNC_0("Session: %p Hanging up call with friend: %u", VAR_2->session, VAR_2->friend_number);

    MSISession *VAR_3 = VAR_2->session;

    if (FUNC_4(VAR_3->mutex) != 0) {
        FUNC_1 ("Failed to aquire lock on msi mutex");
        return -1;
    }

    if (VAR_2->state == VAR_0) {
        FUNC_1("Call is in invalid state!");
        FUNC_5(VAR_3->mutex);
        return -1;
    }

    MSIMessage VAR_4;
    FUNC_3(&VAR_4, VAR_1);

    FUNC_6 (VAR_3->messenger, VAR_2->friend_number, &VAR_4);

    FUNC_2(VAR_2);
    FUNC_5(VAR_3->mutex);
    return 0;
}

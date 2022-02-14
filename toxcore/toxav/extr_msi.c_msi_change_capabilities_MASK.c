
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_12__ {scalar_t__ state; int friend_number; TYPE_2__* session; void* self_capabilities; } ;
struct TYPE_9__ {int exists; void* value; } ;
struct TYPE_11__ {TYPE_1__ capabilities; } ;
struct TYPE_10__ {int mutex; int messenger; } ;
typedef TYPE_2__ MSISession ;
typedef TYPE_3__ MSIMessage ;
typedef TYPE_4__ MSICall ;


 int FUNC_0 (char*,TYPE_2__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;

int FUNC_6(MSICall *VAR_2, uint8_t VAR_3)
{
    if (!VAR_2 || !VAR_2->session)
        return -1;

    FUNC_0("Session: %p Trying to change capabilities to friend %u", VAR_2->session, VAR_2->friend_number);

    MSISession *VAR_4 = VAR_2->session;

    if (FUNC_3(VAR_4->mutex) != 0) {
        FUNC_1 ("Failed to aquire lock on msi mutex");
        return -1;
    }

    if (VAR_2->state != VAR_0) {
        FUNC_1("Call is in invalid state!");
        FUNC_4(VAR_4->mutex);
        return -1;
    }

    VAR_2->self_capabilities = VAR_3;

    MSIMessage VAR_5;
    FUNC_2(&VAR_5, VAR_1);

    VAR_5.capabilities.exists = 1;
    VAR_5.capabilities.value = VAR_3;

    FUNC_5 (VAR_2->session->messenger, VAR_2->friend_number, &VAR_5);

    FUNC_4(VAR_4->mutex);
    return 0;
}

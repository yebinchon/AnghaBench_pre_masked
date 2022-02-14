
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_12__ {scalar_t__ state; int friend_number; void* self_capabilities; TYPE_2__* session; } ;
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
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;

int FUNC_6 (MSICall *VAR_3, uint8_t VAR_4)
{
    if (!VAR_3 || !VAR_3->session)
        return -1;

    FUNC_0("Session: %p Answering call from: %u", VAR_3->session, VAR_3->friend_number);

    MSISession *VAR_5 = VAR_3->session;

    if (FUNC_3(VAR_5->mutex) != 0) {
        FUNC_1 ("Failed to aquire lock on msi mutex");
        return -1;
    }

    if (VAR_3->state != VAR_1) {


        FUNC_1("Call is in invalid state!");
        FUNC_4(VAR_5->mutex);
        return -1;
    }

    VAR_3->self_capabilities = VAR_4;

    MSIMessage VAR_6;
    FUNC_2(&VAR_6, VAR_2);

    VAR_6.capabilities.exists = 1;
    VAR_6.capabilities.value = VAR_4;

    FUNC_5 (VAR_5->messenger, VAR_3->friend_number, &VAR_6);

    VAR_3->state = VAR_0;
    FUNC_4(VAR_5->mutex);

    return 0;
}

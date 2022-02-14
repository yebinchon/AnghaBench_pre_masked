
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {int state; int friend_number; TYPE_2__* session; void* self_capabilities; } ;
struct TYPE_13__ {int exists; void* value; } ;
struct TYPE_16__ {TYPE_1__ capabilities; } ;
struct TYPE_15__ {int mutex; } ;
struct TYPE_14__ {int messenger; } ;
typedef TYPE_3__ MSISession ;
typedef TYPE_4__ MSIMessage ;
typedef TYPE_5__ MSICall ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_0 ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ,TYPE_4__*) ;

int FUNC_8 (MSISession *VAR_2, MSICall **VAR_3, uint32_t VAR_4, uint8_t VAR_5)
{
    if (!VAR_2)
        return -1;

    FUNC_0("Session: %p Inviting friend: %u", VAR_2, VAR_4);

    if (FUNC_5(VAR_2->mutex) != 0) {
        FUNC_1 ("Failed to aquire lock on msi mutex");
        return -1;
    }

    if (FUNC_2(VAR_2, VAR_4) != ((void*)0)) {
        FUNC_1("Already in a call");
        FUNC_6(VAR_2->mutex);
        return -1;
    }

    (*VAR_3) = FUNC_4 (VAR_2, VAR_4);

    if (*VAR_3 == ((void*)0)) {
        FUNC_6(VAR_2->mutex);
        return -1;
    }

    (*VAR_3)->self_capabilities = VAR_5;

    MSIMessage VAR_6;
    FUNC_3(&VAR_6, VAR_1);

    VAR_6.capabilities.exists = 1;
    VAR_6.capabilities.value = VAR_5;

    FUNC_7 ((*VAR_3)->session->messenger, (*VAR_3)->friend_number, &VAR_6);

    (*VAR_3)->state = VAR_0;

    FUNC_0("Invite sent");
    FUNC_6(VAR_2->mutex);
    return 0;
}

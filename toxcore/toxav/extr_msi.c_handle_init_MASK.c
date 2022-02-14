
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {int state; int error; int friend_number; TYPE_11__* session; int self_capabilities; int peer_capabilities; } ;
struct TYPE_13__ {int exists; int value; } ;
struct TYPE_14__ {TYPE_1__ capabilities; } ;
struct TYPE_12__ {int messenger; } ;
typedef TYPE_2__ MSIMessage ;
typedef TYPE_3__ MSICall ;


 int FUNC_0 (char*,TYPE_11__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;

void FUNC_9 (MSICall *VAR_5, const MSIMessage *VAR_6)
{
    FUNC_3(VAR_5);
    FUNC_0("Session: %p Handling 'init' friend: %d", VAR_5->session, VAR_5->friend_number);

    if (!VAR_6->capabilities.exists) {
        FUNC_2("Session: %p Invalid capabilities on 'init'");
        VAR_5->error = VAR_1;
        goto FAILURE;
    }

    switch (VAR_5->state) {
        case 128: {

            VAR_5->peer_capabilities = VAR_6->capabilities.value;
            VAR_5->state = VAR_0;

            if (FUNC_4(VAR_5, VAR_3) == -1)
                goto FAILURE;
        }
        break;

        case 129: {







            FUNC_1("Friend is recalling us");

            MSIMessage VAR_7;
            FUNC_6(&VAR_7, VAR_4);

            VAR_7.capabilities.exists = 1;
            VAR_7.capabilities.value = VAR_5->self_capabilities;

            FUNC_8 (VAR_5->session->messenger, VAR_5->friend_number, &VAR_7);




        }
        break;

        default: {
            FUNC_2("Session: %p Invalid state on 'init'");
            VAR_5->error = VAR_2;
            goto FAILURE;
        }
        break;
    }

    return;
FAILURE:
    FUNC_7(VAR_5->session->messenger, VAR_5->friend_number, VAR_5->error);
    FUNC_5(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int messenger; } ;
struct TYPE_12__ {int state; int error; int friend_number; TYPE_9__* session; int peer_capabilities; } ;
struct TYPE_10__ {int value; int exists; } ;
struct TYPE_11__ {TYPE_1__ capabilities; } ;
typedef TYPE_2__ MSIMessage ;
typedef TYPE_3__ MSICall ;


 int FUNC_0 (char*,TYPE_9__*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;

void FUNC_7 (MSICall *VAR_3, const MSIMessage *VAR_4)
{
    FUNC_3(VAR_3);

    FUNC_0("Session: %p Handling 'push' friend: %d", VAR_3->session, VAR_3->friend_number);

    if (!VAR_4->capabilities.exists) {
        FUNC_2("Session: %p Invalid capabilities on 'push'");
        VAR_3->error = VAR_0;
        goto FAILURE;
    }

    switch (VAR_3->state) {
        case 131: {

            if (VAR_3->peer_capabilities != VAR_4->capabilities.value) {
                FUNC_1("Friend is changing capabilities to: %u", VAR_4->capabilities.value);

                VAR_3->peer_capabilities = VAR_4->capabilities.value;

                if (FUNC_4(VAR_3, VAR_1) == -1)
                    goto FAILURE;
            }
        }
        break;

        case 128: {
            FUNC_1("Friend answered our call");


            VAR_3->peer_capabilities = VAR_4->capabilities.value;
            VAR_3->state = 131;

            if (FUNC_4(VAR_3, VAR_2) == -1)
                goto FAILURE;

        }
        break;


        case 130:
        case 129: {
            FUNC_2("Ignoring invalid push");
        }
        break;
    }

    return;

FAILURE:
    FUNC_6(VAR_3->session->messenger, VAR_3->friend_number, VAR_3->error);
    FUNC_5(VAR_3);
}

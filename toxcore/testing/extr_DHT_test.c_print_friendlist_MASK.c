
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int assoc6; int assoc4; int public_key; } ;
struct TYPE_10__ {int num_friends; TYPE_1__* friends_list; } ;
struct TYPE_9__ {int port; int ip; } ;
struct TYPE_8__ {TYPE_4__* client_list; int public_key; } ;
typedef TYPE_2__ IP_Port ;
typedef TYPE_3__ DHT ;
typedef TYPE_4__ Client_data ;


 int FUNC_0 (TYPE_3__*,int ,TYPE_2__*) ;
 int VAR_0 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_1 ;

void FUNC_7(DHT *VAR_2)
{
    uint32_t VAR_3, VAR_4;
    IP_Port VAR_5;
    FUNC_5("_________________FRIENDS__________________________________\n");

    for (VAR_4 = 0; VAR_4 < VAR_2->num_friends; VAR_4++) {
        FUNC_5("FRIEND %u\n", VAR_4);
        FUNC_5("ID: ");

        FUNC_4(VAR_2->friends_list[VAR_4].public_key);

        int VAR_6 = FUNC_0(VAR_2, VAR_2->friends_list[VAR_4].public_key, &VAR_5);
        FUNC_5("\nIP: %s:%u (%d)", FUNC_1(&VAR_5.ip), FUNC_2(VAR_5.port), VAR_6);

        FUNC_5("\nCLIENTS IN LIST:\n\n");

        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
            Client_data *VAR_7 = &VAR_2->friends_list[VAR_4].client_list[VAR_3];

            if (FUNC_6(VAR_7->public_key, VAR_1) == 0)
                continue;

            FUNC_5("ClientID: ");
            FUNC_4(VAR_7->public_key);

            FUNC_3(&VAR_7->assoc4, 0);
            FUNC_3(&VAR_7->assoc6, 0);
        }
    }
}

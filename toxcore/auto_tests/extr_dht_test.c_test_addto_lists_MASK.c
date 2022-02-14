
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int public_key ;
struct TYPE_16__ {int num_friends; TYPE_1__* friends_list; int self_public_key; int close_clientlist; } ;
struct TYPE_15__ {int port; int ip; } ;
struct TYPE_14__ {int public_key; int client_list; } ;
typedef int Networking_Core ;
typedef TYPE_2__ IP_Port ;
typedef int IP ;
typedef TYPE_3__ DHT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__,int *) ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*,int ,int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ,TYPE_2__*) ;

void FUNC_11(IP VAR_4)
{
    Networking_Core *VAR_5 = FUNC_6(VAR_4, VAR_2);
    FUNC_2(VAR_5 != 0, "Failed to create Networking_Core");

    DHT *VAR_6 = FUNC_5(VAR_5);
    FUNC_2(VAR_6 != 0, "Failed to create DHT");

    IP_Port VAR_7 = { .ip = VAR_4, .port = VAR_2 };
    uint8_t VAR_8[VAR_3];
    int VAR_9, VAR_10;


    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_0, VAR_1); ++VAR_9) {
        FUNC_7(VAR_8, sizeof(VAR_8));
        VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8);
        FUNC_2(VAR_10 == VAR_6->num_friends + 1, "Wrong number of added clients with existing ip_port");
    }

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_0, VAR_1); ++VAR_9) {
        VAR_7.port += 1;
        VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8);
        FUNC_2(VAR_10 == VAR_6->num_friends + 1, "Wrong number of added clients with existing public_key");
    }

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_0, VAR_1); ++VAR_9) {
        VAR_7.port += 1;
        FUNC_7(VAR_8, sizeof(VAR_8));
        VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8);
        FUNC_2(VAR_10 >= 1, "Wrong number of added clients");
    }



    FUNC_10(VAR_6, VAR_6->close_clientlist, VAR_0, &VAR_7);

    for (VAR_9 = 0; VAR_9 < VAR_6->num_friends; ++VAR_9)
        FUNC_10(VAR_6, VAR_6->friends_list[VAR_9].client_list, VAR_1, &VAR_7);


    FUNC_8(VAR_6, VAR_6->close_clientlist, VAR_0, &VAR_7);

    for (VAR_9 = 0; VAR_9 < VAR_6->num_friends; ++VAR_9)
        FUNC_8(VAR_6, VAR_6->friends_list[VAR_9].client_list, VAR_1, &VAR_7);
    FUNC_9(VAR_6, VAR_6->close_clientlist, VAR_0, &VAR_7, VAR_6->self_public_key);

    for (VAR_9 = 0; VAR_9 < VAR_6->num_friends; ++VAR_9)
        FUNC_9(VAR_6, VAR_6->friends_list[VAR_9].client_list, VAR_1, &VAR_7,
                              VAR_6->friends_list[VAR_9].public_key);

    FUNC_3(VAR_6);
    FUNC_4(VAR_5);
}

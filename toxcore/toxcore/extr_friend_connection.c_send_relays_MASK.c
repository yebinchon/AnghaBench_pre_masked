
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int data ;
struct TYPE_12__ {int share_relays_lastsent; int crypt_connection_id; } ;
struct TYPE_11__ {int net_crypto; } ;
struct TYPE_10__ {int public_key; int ip_port; } ;
typedef TYPE_1__ Node_format ;
typedef TYPE_2__ Friend_Connections ;
typedef TYPE_3__ Friend_Conn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,int,TYPE_1__*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int *,int,int ) ;

__attribute__((used)) static unsigned int FUNC_6(Friend_Connections *VAR_2, int VAR_3)
{
    Friend_Conn *VAR_4 = FUNC_2(VAR_2, VAR_3);

    if (!VAR_4)
        return 0;

    Node_format VAR_5[VAR_0];
    uint8_t VAR_6[1024];
    int VAR_7, VAR_8;

    VAR_7 = FUNC_0(VAR_2->net_crypto, VAR_5, VAR_0);

    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {


        FUNC_1(VAR_2, VAR_3, VAR_5[VAR_9].ip_port, VAR_5[VAR_9].public_key);
    }

    VAR_8 = FUNC_3(VAR_6 + 1, sizeof(VAR_6) - 1, VAR_5, VAR_7);

    if (VAR_8 <= 0)
        return 0;

    VAR_6[0] = VAR_1;
    ++VAR_8;

    if (FUNC_5(VAR_2->net_crypto, VAR_4->crypt_connection_id, VAR_6, VAR_8, 0) != -1) {
        VAR_4->share_relays_lastsent = FUNC_4();
        return 1;
    }

    return 0;
}

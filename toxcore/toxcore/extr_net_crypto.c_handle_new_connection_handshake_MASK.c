
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_15__ {scalar_t__ status; int shared_key; int sessionsecret_key; int peersessionpublic_key; int recv_nonce; int dht_public_key; } ;
struct TYPE_14__ {int (* new_connection_callback ) (int ,TYPE_1__*) ;int new_connection_callback_object; } ;
struct TYPE_13__ {int * cookie; int dht_public_key; int peersessionpublic_key; int recv_nonce; int public_key; int cookie_length; int source; } ;
typedef TYPE_1__ New_Connection ;
typedef TYPE_2__ Net_Crypto ;
typedef int IP_Port ;
typedef TYPE_3__ Crypto_Connection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int ,int ,int ,int *,int const*,int ,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(Net_Crypto *VAR_6, IP_Port VAR_7, const uint8_t *VAR_8, uint16_t VAR_9)
{
    New_Connection VAR_10;
    VAR_10.cookie = FUNC_8(VAR_0);

    if (VAR_10.cookie == ((void*)0))
        return -1;

    VAR_10.source = VAR_7;
    VAR_10.cookie_length = VAR_0;

    if (FUNC_7(VAR_6, VAR_10.recv_nonce, VAR_10.peersessionpublic_key, VAR_10.public_key, VAR_10.dht_public_key,
                                VAR_10.cookie, VAR_8, VAR_9, 0) != 0) {
        FUNC_4(VAR_10.cookie);
        return -1;
    }

    int VAR_11 = FUNC_6(VAR_6, VAR_10.public_key);

    if (VAR_11 != -1) {
        Crypto_Connection *VAR_12 = FUNC_5(VAR_6, VAR_11);

        if (FUNC_10(VAR_10.dht_public_key, VAR_12->dht_public_key) != 0) {
            FUNC_0(VAR_6, VAR_11);
        } else {
            int VAR_13 = -1;

            if (VAR_12 && (VAR_12->status == VAR_1 || VAR_12->status == VAR_2)) {
                FUNC_9(VAR_12->recv_nonce, VAR_10.recv_nonce, VAR_4);
                FUNC_9(VAR_12->peersessionpublic_key, VAR_10.peersessionpublic_key, VAR_5);
                FUNC_3(VAR_12->peersessionpublic_key, VAR_12->sessionsecret_key, VAR_12->shared_key);

                FUNC_2(VAR_6, VAR_11, VAR_7);

                if (FUNC_1(VAR_6, VAR_11, VAR_10.cookie, VAR_10.dht_public_key) == 0) {
                    VAR_12->status = VAR_3;
                    VAR_13 = 0;
                }
            }

            FUNC_4(VAR_10.cookie);
            return VAR_13;
        }
    }

    int VAR_14 = VAR_6->new_connection_callback(VAR_6->new_connection_callback_object, &VAR_10);
    FUNC_4(VAR_10.cookie);
    return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int cookie ;
struct TYPE_3__ {int* dht_public_key; int status; int dht_pk_callback_number; int dht_pk_callback_object; int (* dht_pk_callback ) (int ,int ,int*) ;int shared_key; int sessionsecret_key; int peersessionpublic_key; int public_key; int recv_nonce; int cookie_request_number; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int FUNC_0 (int *,int,int*,int*) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int*,int *,int const*,scalar_t__,int ) ;
 int FUNC_4 (int *,int ,int ,int*,int*,int*,int const*,scalar_t__,int ) ;
 int FUNC_5 (int *,int,int const*,scalar_t__,_Bool) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_8(Net_Crypto *VAR_7, int VAR_8, const uint8_t *VAR_9, uint16_t VAR_10,
                                    _Bool VAR_11)
{
    if (VAR_10 == 0 || VAR_10 > VAR_5)
        return -1;

    Crypto_Connection *VAR_12 = FUNC_2(VAR_7, VAR_8);

    if (VAR_12 == 0)
        return -1;

    switch (VAR_9[0]) {
        case 130: {
            if (VAR_12->status != VAR_1)
                return -1;

            uint8_t VAR_13[VAR_0];
            uint64_t VAR_14;

            if (FUNC_3(VAR_13, &VAR_14, VAR_9, VAR_10, VAR_12->shared_key) != sizeof(VAR_13))
                return -1;

            if (VAR_14 != VAR_12->cookie_request_number)
                return -1;

            if (FUNC_0(VAR_7, VAR_8, VAR_13, VAR_12->dht_public_key) != 0)
                return -1;

            VAR_12->status = VAR_3;
            return 0;
        }

        case 128: {
            if (VAR_12->status == VAR_1 || VAR_12->status == VAR_3
                    || VAR_12->status == VAR_4) {
                uint8_t VAR_15[VAR_6];
                uint8_t VAR_16[VAR_6];
                uint8_t VAR_17[VAR_0];

                if (FUNC_4(VAR_7, VAR_12->recv_nonce, VAR_12->peersessionpublic_key, VAR_15, VAR_16, VAR_17,
                                            VAR_9, VAR_10, VAR_12->public_key) != 0)
                    return -1;

                if (FUNC_6(VAR_16, VAR_12->dht_public_key) == 0) {
                    FUNC_1(VAR_12->peersessionpublic_key, VAR_12->sessionsecret_key, VAR_12->shared_key);

                    if (VAR_12->status == VAR_1) {
                        if (FUNC_0(VAR_7, VAR_8, VAR_17, VAR_16) != 0)
                            return -1;
                    }

                    VAR_12->status = VAR_4;
                } else {
                    if (VAR_12->dht_pk_callback)
                        VAR_12->dht_pk_callback(VAR_12->dht_pk_callback_object, VAR_12->dht_pk_callback_number, VAR_16);
                }

            } else {
                return -1;
            }

            return 0;
        }

        case 129: {
            if (VAR_12->status == VAR_4 || VAR_12->status == VAR_2) {
                return FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
            } else {
                return -1;
            }

            return 0;
        }

        default: {
            return -1;
        }
    }

    return 0;
}

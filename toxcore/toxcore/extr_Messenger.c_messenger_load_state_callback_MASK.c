
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int self_public_key; } ;
struct TYPE_10__ {int onion_c; int has_added_relays; TYPE_1__* loaded_relays; int dht; TYPE_7__* net_crypto; int fr; } ;
struct TYPE_9__ {int public_key; int ip_port; } ;
typedef TYPE_1__ Node_format ;
typedef TYPE_2__ Messenger ;


 int FUNC_0 (int ,int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_2__*,int const*,int) ;
 int FUNC_3 (TYPE_7__*,int const*) ;
 int FUNC_4 (TYPE_2__*,int const*,int) ;
 int FUNC_5 (TYPE_2__*,int const) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int const*,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_2__*,int const*,int) ;
 int VAR_6 ;
 int FUNC_10 (TYPE_1__*,int,int ,int const*,int,int) ;

__attribute__((used)) static int FUNC_11(void *VAR_7, const uint8_t *VAR_8, uint32_t VAR_9, uint16_t VAR_10)
{
    Messenger *VAR_11 = VAR_7;

    switch (VAR_10) {
        case 132:
            if (VAR_9 == VAR_4 + VAR_5 + sizeof(uint32_t)) {
                FUNC_8(&(VAR_11->fr), *(uint32_t *)VAR_8);
                FUNC_3(VAR_11->net_crypto, (&VAR_8[sizeof(uint32_t)]) + VAR_4);

                if (FUNC_7((&VAR_8[sizeof(uint32_t)]), VAR_11->net_crypto->self_public_key) != 0) {
                    return -1;
                }
            } else
                return -1;

            break;

        case 136:
            FUNC_0(VAR_11->dht, VAR_8, VAR_9);
            break;

        case 134:
            FUNC_2(VAR_11, VAR_8, VAR_9);
            break;

        case 133:
            if ((VAR_9 > 0) && (VAR_9 <= VAR_0)) {
                FUNC_9(VAR_11, VAR_8, VAR_9);
            }

            break;

        case 129:
            if ((VAR_9 > 0) && (VAR_9 < VAR_1)) {
                FUNC_4(VAR_11, VAR_8, VAR_9);
            }

            break;

        case 130:
            if (VAR_9 == 1) {
                FUNC_5(VAR_11, *VAR_8);
            }

            break;

        case 128: {
            if (VAR_9 == 0) {
                break;
            }

            FUNC_10(VAR_11->loaded_relays, VAR_3, 0, VAR_8, VAR_9, 1);
            VAR_11->has_added_relays = 0;

            break;
        }

        case 131: {
            Node_format VAR_12[VAR_2];

            if (VAR_9 == 0) {
                break;
            }

            int VAR_13, VAR_14 = FUNC_10(VAR_12, VAR_2, 0, VAR_8, VAR_9, 0);

            for (VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13) {
                FUNC_6(VAR_11->onion_c, VAR_12[VAR_13].ip_port, VAR_12[VAR_13].public_key);
            }

            break;
        }

        case 135: {
            if (VAR_9 != 0) {
                return -1;
            }

            return -2;
            break;
        }
    }

    return 0;
}

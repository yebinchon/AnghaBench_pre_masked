
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_14__ {scalar_t__ family; } ;
struct TYPE_17__ {TYPE_1__ ip; } ;
struct TYPE_16__ {scalar_t__ status; scalar_t__ dht_pk_lastrecv; scalar_t__ dht_ip_port_lastrecv; int crypt_connection_id; scalar_t__ ping_lastsent; scalar_t__ share_relays_lastsent; scalar_t__ ping_lastrecv; TYPE_4__ dht_ip_port; scalar_t__ dht_lock; int dht_temp_pk; } ;
struct TYPE_15__ {scalar_t__ num_cons; int net_crypto; int dht; } ;
typedef TYPE_2__ Friend_Connections ;
typedef TYPE_3__ Friend_Conn ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (int ,int,TYPE_4__,int ) ;
 scalar_t__ FUNC_10 () ;

void FUNC_11(Friend_Connections *VAR_7)
{
    uint32_t VAR_8;
    uint64_t VAR_9 = FUNC_10();

    for (VAR_8 = 0; VAR_8 < VAR_7->num_cons; ++VAR_8) {
        Friend_Conn *VAR_10 = FUNC_5(VAR_7, VAR_8);

        if (VAR_10) {
            if (VAR_10->status == VAR_1) {
                if (VAR_10->dht_pk_lastrecv + VAR_3 < VAR_9) {
                    if (VAR_10->dht_lock) {
                        FUNC_0(VAR_7->dht, VAR_10->dht_temp_pk, VAR_10->dht_lock);
                        VAR_10->dht_lock = 0;
                    }
                }

                if (VAR_10->dht_ip_port_lastrecv + VAR_3 < VAR_9) {
                    VAR_10->dht_ip_port.ip.family = 0;
                }

                if (VAR_10->dht_lock) {
                    if (FUNC_4(VAR_7, VAR_8) == 0) {
                        FUNC_9(VAR_7->net_crypto, VAR_10->crypt_connection_id, VAR_10->dht_ip_port, 0);
                        FUNC_2(VAR_7, VAR_8, (VAR_5 / 2));
                    }
                }

            } else if (VAR_10->status == VAR_0) {
                if (VAR_10->ping_lastsent + VAR_4 < VAR_9) {
                    FUNC_7(VAR_7, VAR_8);
                }

                if (VAR_10->share_relays_lastsent + VAR_6 < VAR_9) {
                    FUNC_8(VAR_7, VAR_8);
                }

                if (VAR_10->ping_lastrecv + VAR_2 < VAR_9) {

                    FUNC_3(VAR_7->net_crypto, VAR_10->crypt_connection_id);
                    VAR_10->crypt_connection_id = -1;
                    FUNC_6(VAR_7, VAR_8, 0);
                }
            }
        }
    }

    FUNC_1(VAR_7);
}

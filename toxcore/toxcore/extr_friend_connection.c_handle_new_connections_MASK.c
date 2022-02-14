
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ family; } ;
struct TYPE_20__ {TYPE_1__ ip; } ;
struct TYPE_19__ {int crypt_connection_id; int dht_temp_pk; int dht_ip_port_lastrecv; TYPE_5__ dht_ip_port; } ;
struct TYPE_18__ {int net_crypto; } ;
struct TYPE_17__ {int dht_public_key; TYPE_5__ source; int public_key; } ;
typedef TYPE_2__ New_Connection ;
typedef TYPE_3__ Friend_Connections ;
typedef TYPE_4__ Friend_Conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (int ,int,int *,TYPE_3__*,int) ;
 int FUNC_3 (int ,int,int *,TYPE_3__*,int) ;
 int FUNC_4 (int ,int,int *,TYPE_3__*,int) ;
 int VAR_2 ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,TYPE_5__,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(void *VAR_6, New_Connection *VAR_7)
{
    Friend_Connections *VAR_8 = VAR_6;
    int VAR_9 = FUNC_6(VAR_8, VAR_7->public_key);
    Friend_Conn *VAR_10 = FUNC_5(VAR_8, VAR_9);

    if (VAR_10) {

        if (VAR_10->crypt_connection_id != -1)
            return -1;

        int VAR_11 = FUNC_0(VAR_8->net_crypto, VAR_7);

        if (VAR_11 == -1) {
            return -1;
        }

        FUNC_4(VAR_8->net_crypto, VAR_11, &VAR_5, VAR_8, VAR_9);
        FUNC_2(VAR_8->net_crypto, VAR_11, &VAR_4, VAR_8, VAR_9);
        FUNC_3(VAR_8->net_crypto, VAR_11, &VAR_3, VAR_8, VAR_9);
        VAR_10->crypt_connection_id = VAR_11;

        if (VAR_7->source.ip.family != VAR_0 && VAR_7->source.ip.family != VAR_1) {
            FUNC_9(VAR_8->net_crypto, VAR_10->crypt_connection_id, VAR_10->dht_ip_port, 0);
        } else {
            VAR_10->dht_ip_port = VAR_7->source;
            VAR_10->dht_ip_port_lastrecv = FUNC_10();
        }

        if (FUNC_8(VAR_10->dht_temp_pk, VAR_7->dht_public_key) != 0) {
            FUNC_1(VAR_8, VAR_9, VAR_7->dht_public_key);
        }

        FUNC_7(VAR_8->net_crypto, VAR_11, &VAR_2, VAR_8, VAR_9);
        return 0;
    }

    return -1;
}

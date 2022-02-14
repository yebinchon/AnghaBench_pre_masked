
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int crypt_connection_id; scalar_t__ hosting_tcp_relay; int dht_temp_pk; int dht_ip_port_lastrecv; int dht_ip_port; } ;
struct TYPE_7__ {int net_crypto; } ;
typedef int IP_Port ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_0, int32_t VAR_1, IP_Port VAR_2)
{
    Friend_Connections *VAR_3 = VAR_0;
    Friend_Conn *VAR_4 = FUNC_2(VAR_3, VAR_1);

    if (!VAR_4)
        return;

    if (VAR_4->crypt_connection_id == -1) {
        FUNC_1(VAR_3, VAR_1);
    }

    FUNC_3(VAR_3->net_crypto, VAR_4->crypt_connection_id, VAR_2, 1);
    VAR_4->dht_ip_port = VAR_2;
    VAR_4->dht_ip_port_lastrecv = FUNC_4();

    if (VAR_4->hosting_tcp_relay) {
        FUNC_0(VAR_3, VAR_1, VAR_2, VAR_4->dht_temp_pk);
        VAR_4->hosting_tcp_relay = 0;
    }
}

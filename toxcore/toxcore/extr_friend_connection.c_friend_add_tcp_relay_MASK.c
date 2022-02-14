
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_12__ {scalar_t__ family; } ;
struct TYPE_14__ {TYPE_11__ ip; } ;
struct TYPE_17__ {int public_key; TYPE_2__ ip_port; } ;
struct TYPE_13__ {TYPE_11__ ip; } ;
struct TYPE_16__ {unsigned int tcp_relay_counter; int crypt_connection_id; TYPE_5__* tcp_relays; scalar_t__ hosting_tcp_relay; TYPE_1__ dht_ip_port; int dht_temp_pk; } ;
struct TYPE_15__ {int net_crypto; } ;
typedef int Node_format ;
typedef TYPE_2__ IP_Port ;
typedef TYPE_3__ Friend_Connections ;
typedef TYPE_4__ Friend_Conn ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_11__) ;
 int FUNC_1 (int ,int ,TYPE_2__,int const*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int const*) ;

int FUNC_6(Friend_Connections *VAR_2, int VAR_3, IP_Port VAR_4, const uint8_t *VAR_5)
{
    Friend_Conn *VAR_6 = FUNC_2(VAR_2, VAR_3);

    if (!VAR_6)
        return -1;


    if (FUNC_0(VAR_4.ip) && FUNC_5(VAR_6->dht_temp_pk, VAR_5) == 0) {
        if (VAR_6->dht_ip_port.ip.family != 0) {
            VAR_4.ip = VAR_6->dht_ip_port.ip;
        } else {
            VAR_6->hosting_tcp_relay = 0;
        }
    }

    unsigned int VAR_7;

    uint16_t VAR_8 = VAR_6->tcp_relay_counter % VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
        if (VAR_6->tcp_relays[VAR_7].ip_port.ip.family != 0
                && FUNC_5(VAR_6->tcp_relays[VAR_7].public_key, VAR_5) == 0) {
            FUNC_4(&VAR_6->tcp_relays[VAR_7], 0, sizeof(Node_format));
        }
    }

    VAR_6->tcp_relays[VAR_8].ip_port = VAR_4;
    FUNC_3(VAR_6->tcp_relays[VAR_8].public_key, VAR_5, VAR_1);
    ++VAR_6->tcp_relay_counter;

    return FUNC_1(VAR_2->net_crypto, VAR_6->crypt_connection_id, VAR_4, VAR_5);
}

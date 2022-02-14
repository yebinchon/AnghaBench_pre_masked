
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_9__ {scalar_t__ family; } ;
struct TYPE_13__ {TYPE_1__ ip; } ;
struct TYPE_12__ {unsigned int tcp_relay_counter; TYPE_2__* tcp_relays; int crypt_connection_id; } ;
struct TYPE_11__ {int net_crypto; } ;
struct TYPE_10__ {int public_key; TYPE_8__ ip_port; } ;
typedef TYPE_3__ Friend_Connections ;
typedef TYPE_4__ Friend_Conn ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_8__,int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(Friend_Connections *VAR_1, int VAR_2, unsigned int VAR_3)
{
    Friend_Conn *VAR_4 = FUNC_1(VAR_1, VAR_2);

    if (!VAR_4)
        return;

    unsigned int VAR_5;

    for (VAR_5 = 0; (VAR_5 < VAR_0) && (VAR_3 != 0); ++VAR_5) {
        uint16_t VAR_6 = (VAR_4->tcp_relay_counter - (VAR_5 + 1)) % VAR_0;

        if (VAR_4->tcp_relays[VAR_6].ip_port.ip.family) {
            if (FUNC_0(VAR_1->net_crypto, VAR_4->crypt_connection_id, VAR_4->tcp_relays[VAR_6].ip_port,
                                   VAR_4->tcp_relays[VAR_6].public_key) == 0) {
                --VAR_3;
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ status; int recv_array; int send_array; int ip_portv6; int ip_portv4; int connection_number_tcp; } ;
struct TYPE_9__ {int connections_mutex; int ip_port_list; int tcp_mutex; int tcp_c; int connection_use_counter; } ;
typedef TYPE_1__ Net_Crypto ;
typedef TYPE_2__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;

int FUNC_9(Net_Crypto *VAR_1, int VAR_2)
{
    while (1) {
        FUNC_5(&VAR_1->connections_mutex);

        if (!VAR_1->connection_use_counter) {
            break;
        }

        FUNC_6(&VAR_1->connections_mutex);
    }

    Crypto_Connection *VAR_3 = FUNC_3(VAR_1, VAR_2);

    int VAR_4 = -1;

    if (VAR_3) {
        if (VAR_3->status == VAR_0)
            FUNC_7(VAR_1, VAR_2);

        FUNC_5(&VAR_1->tcp_mutex);
        FUNC_4(VAR_1->tcp_c, VAR_3->connection_number_tcp);
        FUNC_6(&VAR_1->tcp_mutex);

        FUNC_0(&VAR_1->ip_port_list, (uint8_t *)&VAR_3->ip_portv4, VAR_2);
        FUNC_0(&VAR_1->ip_port_list, (uint8_t *)&VAR_3->ip_portv6, VAR_2);
        FUNC_2(VAR_1, VAR_2);
        FUNC_1(&VAR_3->send_array);
        FUNC_1(&VAR_3->recv_array);
        VAR_4 = FUNC_8(VAR_1, VAR_2);
    }

    FUNC_6(&VAR_1->connections_mutex);

    return VAR_4;
}

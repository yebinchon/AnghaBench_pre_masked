
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ crypto_connections_length; TYPE_1__* dht; int ip_port_list; int tcp_c; int connections_mutex; int tcp_mutex; } ;
struct TYPE_7__ {int net; } ;
typedef TYPE_2__ Net_Crypto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int) ;

void FUNC_7(Net_Crypto *VAR_4)
{
    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4->crypto_connections_length; ++VAR_5) {
        FUNC_1(VAR_4, VAR_5);
    }

    FUNC_5(&VAR_4->tcp_mutex);
    FUNC_5(&VAR_4->connections_mutex);

    FUNC_3(VAR_4->tcp_c);
    FUNC_0(&VAR_4->ip_port_list);
    FUNC_4(VAR_4->dht->net, VAR_0, ((void*)0), ((void*)0));
    FUNC_4(VAR_4->dht->net, VAR_1, ((void*)0), ((void*)0));
    FUNC_4(VAR_4->dht->net, VAR_3, ((void*)0), ((void*)0));
    FUNC_4(VAR_4->dht->net, VAR_2, ((void*)0), ((void*)0));
    FUNC_6(VAR_4, sizeof(Net_Crypto));
    FUNC_2(VAR_4);
}

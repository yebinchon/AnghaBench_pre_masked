
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int net; int self_secret_key; } ;
struct TYPE_11__ {int ip_port_list; int current_sleep_time; int secret_symmetric_key; TYPE_2__* dht; int * tcp_c; int connections_mutex; int tcp_mutex; } ;
typedef int TCP_Proxy_Info ;
typedef TYPE_1__ Net_Crypto ;
typedef int IP_Port ;
typedef TYPE_2__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,TYPE_1__*) ;
 int FUNC_11 (int *,int *,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 () ;

Net_Crypto *FUNC_13(DHT *VAR_9, TCP_Proxy_Info *VAR_10)
{
    FUNC_12();

    if (VAR_9 == ((void*)0))
        return ((void*)0);

    Net_Crypto *VAR_11 = FUNC_1(1, sizeof(Net_Crypto));

    if (VAR_11 == ((void*)0))
        return ((void*)0);

    VAR_11->tcp_c = FUNC_8(VAR_9->self_secret_key, VAR_10);

    if (VAR_11->tcp_c == ((void*)0)) {
        FUNC_3(VAR_11);
        return ((void*)0);
    }

    FUNC_11(VAR_11->tcp_c, &VAR_5, VAR_11);
    FUNC_10(VAR_11->tcp_c, &VAR_6, VAR_11);

    if (FUNC_2(&VAR_11->tcp_mutex) != 0 ||
            FUNC_9(&VAR_11->connections_mutex, ((void*)0)) != 0) {
        FUNC_4(VAR_11->tcp_c);
        FUNC_3(VAR_11);
        return ((void*)0);
    }

    VAR_11->dht = VAR_9;

    FUNC_6(VAR_11);
    FUNC_7(VAR_11->secret_symmetric_key);

    VAR_11->current_sleep_time = VAR_0;

    FUNC_5(VAR_9->net, VAR_1, &VAR_7, VAR_11);
    FUNC_5(VAR_9->net, VAR_2, &VAR_8, VAR_11);
    FUNC_5(VAR_9->net, VAR_4, &VAR_8, VAR_11);
    FUNC_5(VAR_9->net, VAR_3, &VAR_8, VAR_11);

    FUNC_0(&VAR_11->ip_port_list, sizeof(IP_Port), 8);

    return VAR_11;
}

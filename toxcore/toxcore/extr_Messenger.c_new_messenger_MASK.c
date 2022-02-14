
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int self_secret_key; } ;
struct TYPE_12__ {scalar_t__ tcp_server_port; int ipv6enabled; int proxy_info; int * port_range; scalar_t__ udp_disabled; } ;
struct TYPE_13__ {int fr; int fr_c; TYPE_1__ options; int * net; TYPE_4__* dht; int * net_crypto; scalar_t__ onion_c; scalar_t__ onion_a; scalar_t__ onion; int * tcp_server; } ;
typedef int Networking_Core ;
typedef TYPE_1__ Messenger_Options ;
typedef TYPE_2__ Messenger ;
typedef int IP ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 TYPE_4__* FUNC_11 (int *) ;
 int * FUNC_12 (int ,int,scalar_t__*,int ,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int * FUNC_14 (TYPE_4__*,int *) ;
 int * FUNC_15 (int ,int ,int ,unsigned int*) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 (int *,int *,TYPE_2__*) ;
 int FUNC_21 (int *,int ) ;

Messenger *FUNC_22(Messenger_Options *VAR_5, unsigned int *VAR_6)
{
    Messenger *VAR_7 = FUNC_0(1, sizeof(Messenger));

    if (VAR_6)
        *VAR_6 = VAR_1;

    if ( ! VAR_7 )
        return ((void*)0);

    unsigned int VAR_8 = 0;

    if (VAR_5->udp_disabled) {

        VAR_7->net = FUNC_0(1, sizeof(Networking_Core));
    } else {
        IP VAR_9;
        FUNC_3(&VAR_9, VAR_5->ipv6enabled);
        VAR_7->net = FUNC_15(VAR_9, VAR_5->port_range[0], VAR_5->port_range[1], &VAR_8);
    }

    if (VAR_7->net == ((void*)0)) {
        FUNC_1(VAR_7);

        if (VAR_6 && VAR_8 == 1) {
            *VAR_6 = VAR_2;
        }

        return ((void*)0);
    }

    VAR_7->dht = FUNC_11(VAR_7->net);

    if (VAR_7->dht == ((void*)0)) {
        FUNC_7(VAR_7->net);
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    VAR_7->net_crypto = FUNC_14(VAR_7->dht, &VAR_5->proxy_info);

    if (VAR_7->net_crypto == ((void*)0)) {
        FUNC_7(VAR_7->net);
        FUNC_4(VAR_7->dht);
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    VAR_7->onion = FUNC_16(VAR_7->dht);
    VAR_7->onion_a = FUNC_17(VAR_7->dht);
    VAR_7->onion_c = FUNC_18(VAR_7->net_crypto);
    VAR_7->fr_c = FUNC_13(VAR_7->onion_c);

    if (!(VAR_7->onion && VAR_7->onion_a && VAR_7->onion_c)) {
        FUNC_5(VAR_7->fr_c);
        FUNC_8(VAR_7->onion);
        FUNC_9(VAR_7->onion_a);
        FUNC_10(VAR_7->onion_c);
        FUNC_6(VAR_7->net_crypto);
        FUNC_4(VAR_7->dht);
        FUNC_7(VAR_7->net);
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    if (VAR_5->tcp_server_port) {
        VAR_7->tcp_server = FUNC_12(VAR_5->ipv6enabled, 1, &VAR_5->tcp_server_port, VAR_7->dht->self_secret_key, VAR_7->onion);

        if (VAR_7->tcp_server == ((void*)0)) {
            FUNC_5(VAR_7->fr_c);
            FUNC_8(VAR_7->onion);
            FUNC_9(VAR_7->onion_a);
            FUNC_10(VAR_7->onion_c);
            FUNC_6(VAR_7->net_crypto);
            FUNC_4(VAR_7->dht);
            FUNC_7(VAR_7->net);
            FUNC_1(VAR_7);

            if (VAR_6)
                *VAR_6 = VAR_3;

            return ((void*)0);
        }
    }

    VAR_7->options = *VAR_5;
    FUNC_2(&(VAR_7->fr), VAR_7->fr_c);
    FUNC_21(&(VAR_7->fr), FUNC_19());
    FUNC_20(&(VAR_7->fr), &VAR_4, VAR_7);

    if (VAR_6)
        *VAR_6 = VAR_0;

    return VAR_7;
}

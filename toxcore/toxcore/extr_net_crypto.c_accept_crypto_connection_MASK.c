
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int connection_number_tcp; int rtt_time; int packets_left; void* packet_send_rate_requested; void* packet_send_rate; int dht_public_key; int status; int shared_key; int sessionsecret_key; int peersessionpublic_key; int sessionpublic_key; int sent_nonce; int recv_nonce; int public_key; } ;
struct TYPE_11__ {int tcp_mutex; int tcp_c; TYPE_3__* crypto_connections; } ;
struct TYPE_10__ {scalar_t__ cookie_length; int source; int dht_public_key; int cookie; int peersessionpublic_key; int recv_nonce; int public_key; } ;
typedef TYPE_1__ New_Connection ;
typedef TYPE_2__ Net_Crypto ;
typedef TYPE_3__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

int FUNC_12(Net_Crypto *VAR_8, New_Connection *VAR_9)
{
    if (FUNC_5(VAR_8, VAR_9->public_key) != -1)
        return -1;

    int VAR_10 = FUNC_0(VAR_8);

    if (VAR_10 == -1)
        return -1;

    Crypto_Connection *VAR_11 = &VAR_8->crypto_connections[VAR_10];

    if (VAR_9->cookie_length != VAR_0)
        return -1;

    FUNC_9(&VAR_8->tcp_mutex);
    int VAR_12 = FUNC_8(VAR_8->tcp_c, VAR_9->dht_public_key, VAR_10);
    FUNC_10(&VAR_8->tcp_mutex);

    if (VAR_12 == -1)
        return -1;

    VAR_11->connection_number_tcp = VAR_12;
    FUNC_7(VAR_11->public_key, VAR_9->public_key, VAR_7);
    FUNC_7(VAR_11->recv_nonce, VAR_9->recv_nonce, VAR_6);
    FUNC_7(VAR_11->peersessionpublic_key, VAR_9->peersessionpublic_key, VAR_7);
    FUNC_11(VAR_11->sent_nonce);
    FUNC_2(VAR_11->sessionpublic_key, VAR_11->sessionsecret_key);
    FUNC_4(VAR_11->peersessionpublic_key, VAR_11->sessionsecret_key, VAR_11->shared_key);
    VAR_11->status = VAR_1;

    if (FUNC_1(VAR_8, VAR_10, VAR_9->cookie, VAR_9->dht_public_key) != 0) {
        FUNC_9(&VAR_8->tcp_mutex);
        FUNC_6(VAR_8->tcp_c, VAR_11->connection_number_tcp);
        FUNC_10(&VAR_8->tcp_mutex);
        VAR_11->status = VAR_2;
        return -1;
    }

    FUNC_7(VAR_11->dht_public_key, VAR_9->dht_public_key, VAR_7);
    VAR_11->packet_send_rate = VAR_4;
    VAR_11->packet_send_rate_requested = VAR_4;
    VAR_11->packets_left = VAR_3;
    VAR_11->rtt_time = VAR_5;
    FUNC_3(VAR_8, VAR_10, VAR_9->source);
    return VAR_10;
}

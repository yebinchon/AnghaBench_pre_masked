
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cookie_request ;
struct TYPE_9__ {int connection_number_tcp; int status; int shared_key; int cookie_request_number; int dht_public_key; int rtt_time; int packets_left; void* packet_send_rate_requested; void* packet_send_rate; int sessionsecret_key; int sessionpublic_key; int sent_nonce; int public_key; } ;
struct TYPE_8__ {int tcp_mutex; int tcp_c; TYPE_2__* crypto_connections; } ;
typedef TYPE_1__ Net_Crypto ;
typedef TYPE_2__ Crypto_Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int const*,int ) ;
 int FUNC_6 (int ,int const*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

int FUNC_12(Net_Crypto *VAR_7, const uint8_t *VAR_8, const uint8_t *VAR_9)
{
    int VAR_10 = FUNC_3(VAR_7, VAR_8);

    if (VAR_10 != -1)
        return VAR_10;

    VAR_10 = FUNC_1(VAR_7);

    if (VAR_10 == -1)
        return -1;

    Crypto_Connection *VAR_11 = &VAR_7->crypto_connections[VAR_10];

    if (VAR_11 == 0)
        return -1;

    FUNC_8(&VAR_7->tcp_mutex);
    int VAR_12 = FUNC_6(VAR_7->tcp_c, VAR_9, VAR_10);
    FUNC_9(&VAR_7->tcp_mutex);

    if (VAR_12 == -1)
        return -1;

    VAR_11->connection_number_tcp = VAR_12;
    FUNC_5(VAR_11->public_key, VAR_8, VAR_6);
    FUNC_11(VAR_11->sent_nonce);
    FUNC_2(VAR_11->sessionpublic_key, VAR_11->sessionsecret_key);
    VAR_11->status = VAR_1;
    VAR_11->packet_send_rate = VAR_4;
    VAR_11->packet_send_rate_requested = VAR_4;
    VAR_11->packets_left = VAR_3;
    VAR_11->rtt_time = VAR_5;
    FUNC_5(VAR_11->dht_public_key, VAR_9, VAR_6);

    VAR_11->cookie_request_number = FUNC_10();
    uint8_t VAR_13[VAR_0];

    if (FUNC_0(VAR_7, VAR_13, VAR_11->dht_public_key, VAR_11->cookie_request_number,
                              VAR_11->shared_key) != sizeof(VAR_13)
            || FUNC_7(VAR_7, VAR_10, VAR_13, sizeof(VAR_13)) != 0) {
        FUNC_8(&VAR_7->tcp_mutex);
        FUNC_4(VAR_7->tcp_c, VAR_11->connection_number_tcp);
        FUNC_9(&VAR_7->tcp_mutex);
        VAR_11->status = VAR_2;
        return -1;
    }

    return VAR_10;
}

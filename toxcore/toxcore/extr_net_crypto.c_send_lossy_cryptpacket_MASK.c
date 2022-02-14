
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_10__ {int buffer_end; } ;
struct TYPE_9__ {int buffer_start; } ;
struct TYPE_12__ {int mutex; TYPE_2__ send_array; TYPE_1__ recv_array; } ;
struct TYPE_11__ {int connections_mutex; int connection_use_counter; } ;
typedef TYPE_3__ Net_Crypto ;
typedef TYPE_4__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int,int ,int ,scalar_t__ const*,scalar_t__) ;

int FUNC_4(Net_Crypto *VAR_3, int VAR_4, const uint8_t *VAR_5, uint16_t VAR_6)
{
    if (VAR_6 == 0 || VAR_6 > VAR_0)
        return -1;

    if (VAR_5[0] < VAR_2)
        return -1;

    if (VAR_5[0] >= (VAR_2 + VAR_1))
        return -1;

    FUNC_1(&VAR_3->connections_mutex);
    ++VAR_3->connection_use_counter;
    FUNC_2(&VAR_3->connections_mutex);

    Crypto_Connection *VAR_7 = FUNC_0(VAR_3, VAR_4);

    int VAR_8 = -1;

    if (VAR_7) {
        FUNC_1(&VAR_7->mutex);
        uint32_t VAR_9 = VAR_7->recv_array.buffer_start;
        uint32_t VAR_10 = VAR_7->send_array.buffer_end;
        FUNC_2(&VAR_7->mutex);
        VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_9, VAR_10, VAR_5, VAR_6);
    }

    FUNC_1(&VAR_3->connections_mutex);
    --VAR_3->connection_use_counter;
    FUNC_2(&VAR_3->connections_mutex);

    return VAR_8;
}

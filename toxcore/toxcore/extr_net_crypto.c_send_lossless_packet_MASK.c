
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int int64_t ;
struct TYPE_7__ {int buffer_start; } ;
struct TYPE_9__ {int maximum_speed_reached; int send_array; TYPE_1__ recv_array; int mutex; } ;
struct TYPE_8__ {scalar_t__ sent_time; int data; int length; } ;
typedef TYPE_2__ Packet_Data ;
typedef int Net_Crypto ;
typedef TYPE_3__ Crypto_Connection ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 TYPE_3__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_2__**,int) ;
 int FUNC_5 (int ,scalar_t__ const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int,int ,int,scalar_t__ const*,int ) ;

__attribute__((used)) static int64_t FUNC_10(Net_Crypto *VAR_1, int VAR_2, const uint8_t *VAR_3, uint16_t VAR_4,
                                    uint8_t VAR_5)
{
    if (VAR_4 == 0 || VAR_4 > VAR_0)
        return -1;

    Crypto_Connection *VAR_6 = FUNC_3(VAR_1, VAR_2);

    if (VAR_6 == 0)
        return -1;



    FUNC_8(VAR_1, VAR_2);

    if (VAR_6->maximum_speed_reached && VAR_5) {
        return -1;
    }

    Packet_Data VAR_7;
    VAR_7.sent_time = 0;
    VAR_7.length = VAR_4;
    FUNC_5(VAR_7.data, VAR_3, VAR_4);
    FUNC_6(&VAR_6->mutex);
    int64_t VAR_8 = FUNC_1(&VAR_6->send_array, &VAR_7);
    FUNC_7(&VAR_6->mutex);

    if (VAR_8 == -1)
        return -1;

    if (!VAR_5 && VAR_6->maximum_speed_reached) {
        return VAR_8;
    }

    if (FUNC_9(VAR_1, VAR_2, VAR_6->recv_array.buffer_start, VAR_8, VAR_3, VAR_4) == 0) {
        Packet_Data *VAR_9 = ((void*)0);

        if (FUNC_4(&VAR_6->send_array, &VAR_9, VAR_8) == 1)
            VAR_9->sent_time = FUNC_2();
    } else {
        VAR_6->maximum_speed_reached = 1;
        FUNC_0("send_data_packet failed\n");
    }

    return VAR_8;
}

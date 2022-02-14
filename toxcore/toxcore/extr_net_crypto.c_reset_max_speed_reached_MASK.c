
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ buffer_end; } ;
struct TYPE_7__ {int buffer_start; } ;
struct TYPE_9__ {scalar_t__ maximum_speed_reached; TYPE_1__ recv_array; TYPE_4__ send_array; } ;
struct TYPE_8__ {scalar_t__ sent_time; int length; int data; } ;
typedef TYPE_2__ Packet_Data ;
typedef int Net_Crypto ;
typedef TYPE_3__ Crypto_Connection ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__**,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(Net_Crypto *VAR_0, int VAR_1)
{
    Crypto_Connection *VAR_2 = FUNC_1(VAR_0, VAR_1);

    if (VAR_2 == 0)
        return -1;



    if (VAR_2->maximum_speed_reached) {
        Packet_Data *VAR_3 = ((void*)0);
        uint32_t VAR_4 = VAR_2->send_array.buffer_end - 1;
        int VAR_5 = FUNC_2(&VAR_2->send_array, &VAR_3, VAR_4);

        uint8_t VAR_6 = 0;

        if (VAR_5 == 1) {
            if (!VAR_3->sent_time) {
                if (FUNC_3(VAR_0, VAR_1, VAR_2->recv_array.buffer_start, VAR_4, VAR_3->data,
                                            VAR_3->length) != 0) {
                    VAR_6 = 1;
                } else {
                    VAR_3->sent_time = FUNC_0();
                }
            }
        }

        if (!VAR_6) {
            VAR_2->maximum_speed_reached = 0;
        } else {
            return -1;
        }
    }

    return 0;
}

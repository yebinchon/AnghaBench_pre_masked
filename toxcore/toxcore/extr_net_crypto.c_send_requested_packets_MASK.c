
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {scalar_t__ buffer_start; } ;
struct TYPE_8__ {int buffer_start; } ;
struct TYPE_10__ {TYPE_1__ recv_array; TYPE_4__ send_array; } ;
struct TYPE_9__ {scalar_t__ sent_time; int length; int data; } ;
typedef TYPE_2__ Packet_Data ;
typedef int Net_Crypto ;
typedef TYPE_3__ Crypto_Connection ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__**,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,int,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_5(Net_Crypto *VAR_0, int VAR_1, uint32_t VAR_2)
{
    if (VAR_2 == 0)
        return -1;

    Crypto_Connection *VAR_3 = FUNC_1(VAR_0, VAR_1);

    if (VAR_3 == 0)
        return -1;

    uint64_t VAR_4 = FUNC_0();
    uint32_t VAR_5, VAR_6 = 0, VAR_7 = FUNC_3(&VAR_3->send_array);

    for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5) {
        Packet_Data *VAR_8;
        uint32_t VAR_9 = (VAR_5 + VAR_3->send_array.buffer_start);
        int VAR_10 = FUNC_2(&VAR_3->send_array, &VAR_8, VAR_9);

        if (VAR_10 == -1) {
            return -1;
        } else if (VAR_10 == 0) {
            continue;
        }

        if (VAR_8->sent_time) {
            continue;
        }

        if (FUNC_4(VAR_0, VAR_1, VAR_3->recv_array.buffer_start, VAR_9, VAR_8->data,
                                    VAR_8->length) == 0) {
            VAR_8->sent_time = VAR_4;
            ++VAR_6;
        }

        if (VAR_6 >= VAR_2)
            break;
    }

    return VAR_6;
}

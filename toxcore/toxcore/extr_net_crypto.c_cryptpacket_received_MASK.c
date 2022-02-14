
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ buffer_end; scalar_t__ buffer_start; } ;
struct TYPE_5__ {TYPE_1__ send_array; } ;
typedef int Net_Crypto ;
typedef TYPE_2__ Crypto_Connection ;


 TYPE_2__* FUNC_0 (int *,int) ;

int FUNC_1(Net_Crypto *VAR_0, int VAR_1, uint32_t VAR_2)
{
    Crypto_Connection *VAR_3 = FUNC_0(VAR_0, VAR_1);

    if (VAR_3 == 0)
        return -1;

    uint32_t VAR_4 = VAR_3->send_array.buffer_end - VAR_3->send_array.buffer_start;
    uint32_t VAR_5 = VAR_2 - VAR_3->send_array.buffer_start;

    if (VAR_4 < VAR_5) {
        return 0;
    } else {
        return -1;
    }
}

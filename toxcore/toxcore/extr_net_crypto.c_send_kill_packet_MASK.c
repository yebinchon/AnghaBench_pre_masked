
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int kill_packet ;
struct TYPE_6__ {int buffer_end; } ;
struct TYPE_5__ {int buffer_start; } ;
struct TYPE_7__ {TYPE_2__ send_array; TYPE_1__ recv_array; } ;
typedef int Net_Crypto ;
typedef TYPE_3__ Crypto_Connection ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(Net_Crypto *VAR_1, int VAR_2)
{
    Crypto_Connection *VAR_3 = FUNC_0(VAR_1, VAR_2);

    if (VAR_3 == 0)
        return -1;

    uint8_t VAR_4 = VAR_0;
    return FUNC_1(VAR_1, VAR_2, VAR_3->recv_array.buffer_start, VAR_3->send_array.buffer_end,
                                   &VAR_4, sizeof(VAR_4));
}

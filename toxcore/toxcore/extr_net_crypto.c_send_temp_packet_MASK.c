
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int temp_packet_num_sent; int temp_packet_sent_time; int temp_packet_length; int temp_packet; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(Net_Crypto *VAR_0, int VAR_1)
{
    Crypto_Connection *VAR_2 = FUNC_1(VAR_0, VAR_1);

    if (VAR_2 == 0)
        return -1;

    if (!VAR_2->temp_packet)
        return -1;

    if (FUNC_2(VAR_0, VAR_1, VAR_2->temp_packet, VAR_2->temp_packet_length) != 0)
        return -1;

    VAR_2->temp_packet_sent_time = FUNC_0();
    ++VAR_2->temp_packet_num_sent;
    return 0;
}

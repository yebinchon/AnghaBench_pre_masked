
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ temp_packet_num_sent; scalar_t__ temp_packet_sent_time; scalar_t__ temp_packet_length; scalar_t__ temp_packet; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int const*,int) ;

__attribute__((used)) static int FUNC_2(const Net_Crypto *VAR_0, int VAR_1)
{
    Crypto_Connection *VAR_2 = FUNC_1(VAR_0, VAR_1);

    if (VAR_2 == 0)
        return -1;

    if (VAR_2->temp_packet)
        FUNC_0(VAR_2->temp_packet);

    VAR_2->temp_packet = 0;
    VAR_2->temp_packet_length = 0;
    VAR_2->temp_packet_sent_time = 0;
    VAR_2->temp_packet_num_sent = 0;
    return 0;
}

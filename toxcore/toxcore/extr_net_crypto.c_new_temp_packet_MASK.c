
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ temp_packet_num_sent; scalar_t__ temp_packet_sent_time; int temp_packet_length; int * temp_packet; } ;
typedef int Net_Crypto ;
typedef TYPE_1__ Crypto_Connection ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int const*,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int const*,int ) ;

__attribute__((used)) static int FUNC_4(const Net_Crypto *VAR_1, int VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    if (VAR_4 == 0 || VAR_4 > VAR_0)
        return -1;

    Crypto_Connection *VAR_5 = FUNC_1(VAR_1, VAR_2);

    if (VAR_5 == 0)
        return -1;

    uint8_t *VAR_6 = FUNC_2(VAR_4);

    if (VAR_6 == 0)
        return -1;

    if (VAR_5->temp_packet)
        FUNC_0(VAR_5->temp_packet);

    FUNC_3(VAR_6, VAR_3, VAR_4);
    VAR_5->temp_packet = VAR_6;
    VAR_5->temp_packet_length = VAR_4;
    VAR_5->temp_packet_sent_time = 0;
    VAR_5->temp_packet_num_sent = 0;
    return 0;
}

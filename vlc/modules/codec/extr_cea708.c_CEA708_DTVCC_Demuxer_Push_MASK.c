
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_4__ {int i_pkt_sequence; scalar_t__ i_data; scalar_t__ i_total_data; int* data; int i_time; } ;
typedef TYPE_1__ cea708_demux_t ;


 int FUNC_0 (TYPE_1__*,int ,int*,scalar_t__) ;

void FUNC_1( cea708_demux_t *VAR_0, vlc_tick_t VAR_1, const uint8_t VAR_2[3] )
{
    if( (VAR_2[0] & 0x03) == 3 )
    {
        const int8_t VAR_3 = VAR_2[1] >> 6;


        if( VAR_3 > 0 && ((VAR_0->i_pkt_sequence + 1) % 4) != VAR_3 )
        {
            VAR_0->i_data = VAR_0->i_total_data = 0;
            VAR_0->i_pkt_sequence = VAR_3;
            return;
        }

        uint8_t VAR_4 = VAR_2[1] & 63;
        if( VAR_4 == 0 )
            VAR_4 = 127;
        else
            VAR_4 = VAR_4 * 2 - 1;

        VAR_0->i_pkt_sequence = VAR_3;
        VAR_0->i_total_data = VAR_4;
        VAR_0->i_data = 0;
        VAR_0->i_time = VAR_1;
        VAR_0->data[VAR_0->i_data++] = VAR_2[2];
    }
    else if( VAR_0->i_total_data > 0 )
    {
        VAR_0->data[VAR_0->i_data++] = VAR_2[1];
        VAR_0->data[VAR_0->i_data++] = VAR_2[2];
    }


    if( VAR_0->i_data > 0 && VAR_0->i_data >= VAR_0->i_total_data )
    {
        if( VAR_0->i_data == VAR_0->i_total_data )
            FUNC_0( VAR_0, VAR_0->i_time, VAR_0->data, VAR_0->i_data );
        VAR_0->i_total_data = VAR_0->i_data = 0;
    }
}

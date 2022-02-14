
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int b_xds; size_t i_class; int i_type; int b_future; TYPE_2__** pkt; } ;
typedef TYPE_1__ xds_t ;
struct TYPE_7__ {int b_started; scalar_t__ i_data; int i_sum; int* p_data; } ;
typedef TYPE_2__ xds_packet_t ;
typedef size_t xds_class_t ;
typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( xds_t *VAR_1, uint8_t VAR_2, uint8_t VAR_3 )
{

    VAR_2 &= 0x7f;
    VAR_3 &= 0x7f;


    if( VAR_2 >= 0x01 && VAR_2 <= 0x0e )
    {
        const xds_class_t VAR_4 = ( VAR_2 - 1 ) >> 1;
        const int VAR_5 = VAR_3;
        const bool VAR_6 = VAR_2 & 0x01;
        xds_packet_t *VAR_7 = &VAR_1->pkt[VAR_4][VAR_5];

        if( !VAR_6 && !VAR_7->b_started )
        {

            VAR_1->b_xds = 0;
            return;
        }

        VAR_1->b_xds = 1;
        VAR_1->i_class = VAR_4;
        VAR_1->i_type = VAR_5;
        VAR_1->b_future = !VAR_6;
        VAR_7->b_started = 1;
        if( VAR_6 )
        {
            VAR_7->i_data = 0;
            VAR_7->i_sum = VAR_2 + VAR_3;
        }
    }
    else if( VAR_2 == 0x0f && VAR_1->b_xds )
    {
        xds_packet_t *VAR_8 = &VAR_1->pkt[VAR_1->i_class][VAR_1->i_type];


        VAR_8->i_sum += VAR_2 + VAR_3;
        if( VAR_8->i_sum & 0x7f )
        {

            VAR_8->b_started = 0;
            return;
        }
        if( VAR_8->i_data <= 0 )
        {

            VAR_8->b_started = 0;
            return;
        }



        FUNC_0( VAR_1, VAR_8 );


        VAR_8->b_started = 0;
    }
    else if( VAR_2 >= 0x20 && VAR_1->b_xds )
    {
        xds_packet_t *VAR_9 = &VAR_1->pkt[VAR_1->i_class][VAR_1->i_type];

        if( VAR_9->i_data+2 > VAR_0 )
        {


            VAR_1->b_xds = 0;
            VAR_9->b_started = 0;
            return;
        }

        VAR_9->p_data[VAR_9->i_data++] = VAR_2 & 0x7f;
        VAR_9->p_data[VAR_9->i_data++] = VAR_3 & 0x7f;
        VAR_9->i_sum += VAR_2+VAR_3;
    }
    else
    {
        VAR_1->b_xds = 0;
    }
}

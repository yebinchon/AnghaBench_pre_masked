
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bytes; int* packet; scalar_t__ granulepos; } ;
typedef TYPE_1__ ogg_packet ;
struct TYPE_6__ {scalar_t__ i_first_frame_index; scalar_t__ b_oggds; } ;
typedef TYPE_2__ logical_stream_t ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0( const logical_stream_t *VAR_1,
                                const ogg_packet *VAR_2 )
{
    if ( VAR_1->b_oggds )
    {
        return VAR_2->bytes > 0 &&
               (VAR_2->packet[0] & VAR_0);
    }
    else return ( VAR_2->granulepos == 0 && VAR_1->i_first_frame_index > 0 );
}

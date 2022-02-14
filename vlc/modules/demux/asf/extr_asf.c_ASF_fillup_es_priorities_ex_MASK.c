
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {size_t i_track; } ;
typedef TYPE_1__ demux_sys_t ;
struct TYPE_8__ {size_t i_stream_number_count; int * pi_stream_number; } ;
typedef TYPE_2__ asf_object_advanced_mutual_exclusion_t ;
struct TYPE_9__ {size_t i_count; int * pi_stream_numbers; } ;
typedef TYPE_3__ asf_es_priorities_t ;


 TYPE_2__* FUNC_0 (void*,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (size_t,int) ;

__attribute__((used)) static void FUNC_2( demux_sys_t *VAR_2, void *VAR_3,
                                         asf_es_priorities_t *VAR_4 )
{

    asf_object_advanced_mutual_exclusion_t *VAR_5 =
            FUNC_0( VAR_3, &VAR_1, 0 );
    if (! VAR_5 ) return;





    VAR_4->pi_stream_numbers = FUNC_1( VAR_2->i_track, sizeof(uint16_t) );
    if ( !VAR_4->pi_stream_numbers ) return;

    if ( VAR_5->i_stream_number_count )
    {

        for ( uint16_t VAR_6 = 1; VAR_6 < VAR_5->i_stream_number_count; VAR_6++ )
        {
            if ( VAR_4->i_count > VAR_2->i_track || VAR_6 > VAR_2->i_track ) break;
            VAR_4->pi_stream_numbers[ VAR_4->i_count++ ] = VAR_5->pi_stream_number[ VAR_6 ];
        }
    }
}

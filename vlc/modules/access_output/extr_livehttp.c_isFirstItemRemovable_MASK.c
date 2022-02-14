
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef unsigned int uint32_t ;
struct TYPE_5__ {unsigned int i_segment; int i_numsegs; int segment_max_length; int segments_t; } ;
typedef TYPE_1__ sout_access_out_sys_t ;
struct TYPE_6__ {scalar_t__ segment_length; } ;
typedef TYPE_2__ output_segment_t ;


 TYPE_2__* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static bool FUNC_1( sout_access_out_sys_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2 )
{
    vlc_tick_t VAR_3 = 0;




    for( unsigned int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
    {
        output_segment_t *VAR_5 = FUNC_0( &VAR_0->segments_t, VAR_0->i_segment - VAR_1 + VAR_4 );
        VAR_3 += VAR_5->segment_length;
    }
    output_segment_t *VAR_6 = FUNC_0( &VAR_0->segments_t, 0 );

    return VAR_3 >= (VAR_6->segment_length + (VAR_0->i_numsegs * VAR_0->segment_max_length));
}

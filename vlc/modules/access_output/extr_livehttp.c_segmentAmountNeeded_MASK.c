
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint32_t ;
struct TYPE_5__ {int segment_max_length; int segments_t; int i_numsegs; } ;
typedef TYPE_1__ sout_access_out_sys_t ;
struct TYPE_6__ {scalar_t__ segment_length; } ;
typedef TYPE_2__ output_segment_t ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,size_t) ;

__attribute__((used)) static uint32_t FUNC_3( sout_access_out_sys_t *VAR_0 )
{
    vlc_tick_t VAR_1 = 0;
    for( size_t VAR_2 = 1; VAR_2 <= FUNC_1( &VAR_0->segments_t ); VAR_2++ )
    {
        output_segment_t* VAR_3 = FUNC_2( &VAR_0->segments_t, FUNC_1( &VAR_0->segments_t ) - VAR_2 );
        VAR_1 += VAR_3->segment_length;

        if( VAR_1 >= ( 3 * VAR_0->segment_max_length ) )
            return FUNC_0(VAR_2, VAR_0->i_numsegs);
    }
    return FUNC_1( &VAR_0->segments_t ) - 1;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_13__ {int b_segment_has_data; TYPE_3__** ongoing_segment_end; TYPE_3__* ongoing_segment; TYPE_3__** full_segments_end; scalar_t__ b_splitanywhere; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_14__ {int i_flags; struct TYPE_14__* p_next; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__***,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static ssize_t FUNC_4( sout_access_out_t *VAR_1, block_t *VAR_2 )
{
    size_t VAR_3 = 0;
    sout_access_out_sys_t *VAR_4 = VAR_1->p_sys;
    while( VAR_2 )
    {



        if( VAR_4->ongoing_segment && ( VAR_4->b_splitanywhere || ( VAR_2->i_flags & VAR_0 ) ) )
        {
            FUNC_2( VAR_1, "Moving ongoing segment to full segments-queue" );
            FUNC_1( &VAR_4->full_segments_end, VAR_4->ongoing_segment );
            VAR_4->ongoing_segment = ((void*)0);
            VAR_4->ongoing_segment_end = &VAR_4->ongoing_segment;
            VAR_4->b_segment_has_data = 1;
        }

        ssize_t VAR_5 = FUNC_0( VAR_1, VAR_2 );
        if( VAR_5 < 0 )
        {
            FUNC_3( VAR_1, "Error in write loop");
            return VAR_5;
        }
        VAR_3 += VAR_5;

        block_t *VAR_6 = VAR_2->p_next;
        VAR_2->p_next = ((void*)0);
        FUNC_1( &VAR_4->ongoing_segment_end, VAR_2 );
        VAR_2 = VAR_6;
    }

    return VAR_3;
}

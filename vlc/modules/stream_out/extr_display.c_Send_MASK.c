
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {scalar_t__ i_delay; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef int decoder_t ;
struct TYPE_9__ {scalar_t__ i_buffer; scalar_t__ i_dts; scalar_t__ i_pts; struct TYPE_9__* p_next; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1( sout_stream_t *VAR_2, void *VAR_3, block_t *VAR_4 )
{
    sout_stream_sys_t *VAR_5 = VAR_2->p_sys;

    while( VAR_4 )
    {
        block_t *VAR_6 = VAR_4->p_next;

        VAR_4->p_next = ((void*)0);

        if( VAR_3 != ((void*)0) && VAR_4->i_buffer > 0 )
        {
            if( VAR_4->i_dts == VAR_1 )
                VAR_4->i_dts = 0;
            else
                VAR_4->i_dts += VAR_5->i_delay;

            if( VAR_4->i_pts == VAR_1 )
                VAR_4->i_pts = 0;
            else
                VAR_4->i_pts += VAR_5->i_delay;

            FUNC_0( (decoder_t *)VAR_3, VAR_4, 0 );
        }

        VAR_4 = VAR_6;
    }

    return VAR_0;
}

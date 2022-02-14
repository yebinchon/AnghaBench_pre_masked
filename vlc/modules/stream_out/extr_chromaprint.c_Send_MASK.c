
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_12__ {int i_total_samples; int b_finished; int p_chromaprint_ctx; TYPE_3__* id; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_13__ {int i_channels; int i_samples; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
typedef int int16_t ;
struct TYPE_14__ {int i_buffer; struct TYPE_14__* p_next; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5( sout_stream_t *VAR_2, void *VAR_3, block_t *VAR_4 )
{
    sout_stream_sys_t *VAR_5 = VAR_2->p_sys;
    sout_stream_id_sys_t *VAR_6 = (sout_stream_id_sys_t *)VAR_3;

    if ( VAR_5->id != VAR_6 )
    {

        FUNC_0( VAR_4 );
        return VAR_1;
    }

    while( VAR_4 )
    {
        block_t *VAR_7;
        int VAR_8 = VAR_4->i_buffer / (VAR_0 * VAR_6->i_channels);
        VAR_5->i_total_samples += VAR_8;
        if ( !VAR_5->b_finished && VAR_6->i_samples > 0 && VAR_4->i_buffer )
        {
            if(! FUNC_2( VAR_5->p_chromaprint_ctx,
                                   (int16_t *)VAR_4->p_buffer,
                                   VAR_4->i_buffer / VAR_0 ) )
                FUNC_4( VAR_2, "feed error" );
            VAR_6->i_samples -= VAR_8;
            if ( VAR_6->i_samples < 1 && !VAR_5->b_finished )
            {
                VAR_5->b_finished = 1;
                FUNC_3( VAR_2, "Fingerprint collection finished" );
            }
        }
        VAR_7 = VAR_4->p_next;
        FUNC_1( VAR_4 );
        VAR_4 = VAR_7;
    }

    return VAR_1;
}

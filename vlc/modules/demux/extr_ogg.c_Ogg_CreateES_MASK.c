
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ i_codec; int b_packetized; scalar_t__ i_cat; } ;
struct TYPE_13__ {int b_finished; int b_reinit; int b_initializing; int * p_es; TYPE_5__ fmt; int fmt_old; scalar_t__ i_pre_skip; } ;
typedef TYPE_1__ logical_stream_t ;
struct TYPE_14__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {int i_streams; int b_es_created; TYPE_1__* p_old_stream; TYPE_1__** pp_stream; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int * FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (int ,int ,int *,TYPE_5__*) ;
 int FUNC_6 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_7( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    logical_stream_t *VAR_5 = VAR_4->p_old_stream;
    int VAR_6;

    for( VAR_6 = 0 ; VAR_6 < VAR_4->i_streams; VAR_6++ )
    {
        logical_stream_t *VAR_7 = VAR_4->pp_stream[VAR_6];

        if ( VAR_7->p_es == ((void*)0) && !VAR_7->b_finished )
        {

            if( VAR_7->fmt.i_codec == VAR_2 ||
                VAR_7->fmt.i_codec == VAR_1 )
                VAR_7->fmt.b_packetized = 0;


            if( VAR_5 &&
                VAR_5->fmt.i_cat == VAR_7->fmt.i_cat &&
                VAR_5->fmt.i_codec == VAR_7->fmt.i_codec &&
                VAR_5->p_es != ((void*)0) && VAR_7->p_es != ((void*)0) )
            {
                FUNC_6( VAR_3, "will reuse old stream to avoid glitch" );

                VAR_7->p_es = VAR_5->p_es;
                VAR_7->b_finished = 0;
                VAR_7->b_reinit = 0;
                VAR_7->b_initializing = 0;
                VAR_7->i_pre_skip = 0;
                FUNC_2( &VAR_7->fmt_old );
                FUNC_3( &VAR_7->fmt_old, &VAR_5->fmt );
                bool VAR_8 = FUNC_1( VAR_3, VAR_7 );

                VAR_5->p_es = ((void*)0);
                VAR_5 = ((void*)0);
                if ( VAR_8 )
                {
                    FUNC_5( VAR_3->out, VAR_0,
                                    VAR_7->p_es, &VAR_7->fmt );
                }
            }
            else
            {
                VAR_7->p_es = FUNC_4( VAR_3->out, &VAR_7->fmt );
            }
        }
    }

    if( VAR_4->p_old_stream )
    {
        if( VAR_4->p_old_stream->p_es )
            FUNC_6( VAR_3, "old stream not reused" );
        FUNC_0( VAR_3, VAR_4->p_old_stream );
        VAR_4->p_old_stream = ((void*)0);
    }
    VAR_4->b_es_created = 1;
}

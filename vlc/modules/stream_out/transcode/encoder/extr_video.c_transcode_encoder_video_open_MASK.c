
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_19__ {int b_abort; int b_threaded; TYPE_11__* p_encoder; int picture_pool_has_room; int cond; int thread; int * p_buffers; } ;
typedef TYPE_6__ transcode_encoder_t ;
struct TYPE_17__ {scalar_t__ i_count; int i_priority; int pool_size; } ;
struct TYPE_18__ {TYPE_4__ threads; } ;
struct TYPE_20__ {TYPE_5__ video; int psz_name; int p_config_chain; } ;
typedef TYPE_7__ transcode_encoder_config_t ;
struct TYPE_16__ {int i_codec; } ;
struct TYPE_14__ {int i_chroma; } ;
struct TYPE_15__ {int i_codec; TYPE_1__ video; } ;
struct TYPE_13__ {scalar_t__ i_threads; int * p_module; TYPE_3__ fmt_out; TYPE_2__ fmt_in; int p_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_11__*,char*,int ,int) ;
 int FUNC_1 (TYPE_11__*,int *) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_6__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8( transcode_encoder_t *VAR_4,
                                   const transcode_encoder_config_t *VAR_5 )
{
    VAR_4->p_encoder->i_threads = VAR_5->video.threads.i_count;
    VAR_4->p_encoder->p_cfg = VAR_5->p_config_chain;

    VAR_4->p_encoder->p_module =
        FUNC_0( VAR_4->p_encoder, "encoder", VAR_5->psz_name, 1 );
    if( !VAR_4->p_encoder->p_module )
        return VAR_2;

    VAR_4->p_encoder->fmt_in.video.i_chroma = VAR_4->p_encoder->fmt_in.i_codec;


    VAR_4->p_encoder->fmt_out.i_codec =
        FUNC_5( VAR_1, VAR_4->p_encoder->fmt_out.i_codec );

    FUNC_7( &VAR_4->picture_pool_has_room, VAR_5->video.threads.pool_size );
    FUNC_4( &VAR_4->cond );
    VAR_4->p_buffers = ((void*)0);
    VAR_4->b_abort = 0;

    if( VAR_5->video.threads.i_count > 0 )
    {
        if( FUNC_2( &VAR_4->thread, VAR_0, VAR_4, VAR_5->video.threads.i_priority ) )
        {
            FUNC_3( &VAR_4->cond );
            FUNC_6( &VAR_4->picture_pool_has_room );
            FUNC_1( VAR_4->p_encoder, VAR_4->p_encoder->p_module );
            VAR_4->p_encoder->p_module = ((void*)0);
            return VAR_2;
        }
        VAR_4->b_threaded = 1;
    }

    return VAR_3;
}

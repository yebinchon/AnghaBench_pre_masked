
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int vlc_video_context ;
typedef int vlc_object_t ;
struct decoder_owner {int * p_obj; TYPE_2__* id; } ;
struct TYPE_17__ {int lock; } ;
struct TYPE_16__ {int video; } ;
struct TYPE_18__ {TYPE_1__ fifo; TYPE_11__ decoder_out; int encoder; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;
typedef int filter_chain_t ;
struct TYPE_19__ {scalar_t__ i_codec; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_21__ {int i_chroma; } ;
struct TYPE_22__ {scalar_t__ i_codec; TYPE_6__ video; } ;
struct TYPE_20__ {TYPE_8__ fmt_out; int fmt_in; } ;
typedef TYPE_4__ decoder_t ;


 struct decoder_owner* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*,TYPE_8__*) ;
 int FUNC_3 (TYPE_11__*,int *) ;
 int FUNC_4 (int *,TYPE_3__ const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int,int *) ;
 int FUNC_7 (int *,TYPE_8__*,TYPE_8__*) ;
 int FUNC_8 (int *,char*,char*,char*) ;
 TYPE_3__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,TYPE_6__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13( decoder_t *VAR_0, vlc_video_context *VAR_1 )
{
    struct decoder_owner *VAR_2 = FUNC_0( VAR_0 );
    sout_stream_id_sys_t *VAR_3 = VAR_2->id;
    vlc_object_t *VAR_4 = VAR_2->p_obj;
    filter_chain_t *VAR_5;

    FUNC_11( &VAR_3->fifo.lock );

    const es_format_t *VAR_6 = FUNC_9( VAR_3->encoder );

    if( VAR_6->i_codec == VAR_0->fmt_out.i_codec ||
        FUNC_10( &VAR_3->decoder_out.video, &VAR_0->fmt_out.video ) )
    {
        FUNC_12( &VAR_3->fifo.lock );
        return 0;
    }

    FUNC_1( &VAR_3->decoder_out );
    FUNC_2( &VAR_3->decoder_out, &VAR_0->fmt_out );


    FUNC_3( &VAR_3->decoder_out, &VAR_0->fmt_in );

    FUNC_12( &VAR_3->fifo.lock );

    FUNC_8( VAR_4, "Checking if filter chain %4.4s -> %4.4s is possible",
                 (char *)&VAR_0->fmt_out.i_codec, (char*)&VAR_6->i_codec );
    VAR_5 = FUNC_6( VAR_4, 0, ((void*)0) );
    FUNC_7( VAR_5, &VAR_0->fmt_out, &VAR_0->fmt_out );

    int VAR_7 = FUNC_4( VAR_5, VAR_6 );
    FUNC_5( VAR_5 );

    FUNC_8( VAR_4, "Filter chain testing done, input chroma %4.4s seems to be %s for transcode",
                     (char *)&VAR_0->fmt_out.video.i_chroma,
                     VAR_7 == 0 ? "possible" : "not possible");
    return VAR_7;
}

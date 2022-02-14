
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_10__ {TYPE_4__* mouse_opaque; int mouse_event; int * fmt; int clock; int * vout; } ;
typedef TYPE_3__ vout_configuration_t ;
typedef int vlc_video_context ;
struct decoder_owner {int vout_thread_started; int p_resource; int p_clock; int * out_pool; int * vctx; } ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
struct TYPE_9__ {int video; } ;
struct TYPE_8__ {int i_codec; } ;
struct TYPE_11__ {TYPE_2__ fmt_out; scalar_t__ i_extra_picture_buffers; TYPE_1__ fmt_in; } ;
typedef TYPE_4__ decoder_t ;


 int FUNC_0 (struct decoder_owner*,int **,int*,int *) ;
 int VAR_0 ;
 struct decoder_owner* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct decoder_owner*,int ,int *,int) ;
 int FUNC_3 (int ,int *,TYPE_3__*) ;
 int VAR_1 ;
 int * FUNC_4 (int *,scalar_t__) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8( decoder_t *VAR_2, vlc_video_context *VAR_3 )
{
    struct decoder_owner *VAR_4 = FUNC_1( VAR_2 );

    enum vlc_vout_order VAR_5;
    vout_thread_t *VAR_6 = ((void*)0);
    int VAR_7 = FUNC_0(VAR_4, &VAR_6, &VAR_5, ((void*)0));
    if (VAR_7 == -1)
        return -1;
    if (VAR_7 == 0)
    {

        if (VAR_3 != ((void*)0) && VAR_4->vctx == VAR_3)
            return 0;
    }
    if (VAR_4->vctx)
        FUNC_6(VAR_4->vctx);
    VAR_4->vctx = VAR_3 ? FUNC_5(VAR_3) : ((void*)0);



    if ( VAR_4->out_pool == ((void*)0) )
    {
        unsigned VAR_8;
        switch( VAR_2->fmt_in.i_codec )
        {
        case 132:
        case 133:
        case 134:
            VAR_8 = 18;
            break;
        case 135:
            VAR_8 = 10;
            break;
        case 131:
        case 130:
        case 129:
        case 128:
            VAR_8 = 3;
            break;
        default:
            VAR_8 = 2;
            break;
        }

        VAR_4->out_pool = FUNC_4( &VAR_2->fmt_out.video,
                            VAR_8 + VAR_2->i_extra_picture_buffers + 1 );
        if (VAR_4->out_pool == ((void*)0))
            return -1;
    }
    int VAR_9;
    if (VAR_4->vout_thread_started)
    {
        VAR_9 = FUNC_7(VAR_6, &VAR_2->fmt_out.video);
        if (VAR_9 == 0)

            return 0;
    }

    vout_configuration_t VAR_10 = {
        .vout = VAR_6, .clock = VAR_4->p_clock, .fmt = &VAR_2->fmt_out.video,
        .mouse_event = VAR_0, .mouse_opaque = VAR_2,
    };
    VAR_9 = FUNC_3( VAR_4->p_resource, VAR_3, &VAR_10);
    if (VAR_9 == 0)
    {
        VAR_4->vout_thread_started = 1;
        FUNC_2(VAR_4, VAR_1, VAR_6, VAR_5);
    }
    return VAR_9;
}

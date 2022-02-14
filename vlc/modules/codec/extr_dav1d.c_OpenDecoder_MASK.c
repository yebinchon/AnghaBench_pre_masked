
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_14__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int color_range; int space; int transfer; int primaries; int i_height; int i_width; } ;
struct TYPE_15__ {scalar_t__ i_codec; TYPE_4__ video; } ;
struct TYPE_12__ {scalar_t__ i_sar_num; scalar_t__ i_sar_den; int color_range; int space; int transfer; int primaries; int i_height; int i_width; } ;
struct TYPE_13__ {TYPE_2__ video; int i_codec; } ;
struct TYPE_16__ {scalar_t__ i_extra_picture_buffers; TYPE_5__ fmt_in; TYPE_3__ fmt_out; TYPE_7__* p_sys; int pf_flush; int pf_decode; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_11__ {int release_picture_callback; int alloc_picture_callback; TYPE_6__* cookie; } ;
struct TYPE_18__ {scalar_t__ n_tile_threads; scalar_t__ n_frame_threads; TYPE_1__ allocator; } ;
struct TYPE_17__ {TYPE_9__ s; int c; } ;
typedef TYPE_7__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_9__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_9__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,char*) ;
 int FUNC_8 () ;
 TYPE_7__* FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(vlc_object_t *VAR_9)
{
    decoder_t *VAR_10 = (decoder_t *)VAR_9;

    if (VAR_10->fmt_in.i_codec != VAR_4)
        return VAR_6;

    decoder_sys_t *VAR_11 = FUNC_9(VAR_9, sizeof(*VAR_11));
    if (!VAR_11)
        return VAR_7;

    FUNC_2(&VAR_11->s);
    VAR_11->s.n_tile_threads = FUNC_7(VAR_9, "dav1d-thread-tiles");
    if (VAR_11->s.n_tile_threads == 0)
        VAR_11->s.n_tile_threads = FUNC_0(FUNC_8(), 1, 4);
    VAR_11->s.n_frame_threads = FUNC_7(VAR_9, "dav1d-thread-frames");
    if (VAR_11->s.n_frame_threads == 0)
        VAR_11->s.n_frame_threads = FUNC_1(1, FUNC_8());
    VAR_11->s.allocator.cookie = VAR_10;
    VAR_11->s.allocator.alloc_picture_callback = VAR_3;
    VAR_11->s.allocator.release_picture_callback = VAR_2;

    if (FUNC_3(&VAR_11->c, &VAR_11->s) < 0)
    {
        FUNC_6(VAR_9, "Could not open the Dav1d decoder");
        return VAR_6;
    }

    FUNC_5(VAR_9, "Using dav1d version %s with %d/%d frame/tile threads",
            FUNC_4(), VAR_11->s.n_frame_threads, VAR_11->s.n_tile_threads);

    VAR_10->pf_decode = VAR_0;
    VAR_10->pf_flush = VAR_1;
    VAR_10->i_extra_picture_buffers = (VAR_11->s.n_frame_threads - 1);

    VAR_10->fmt_out.video.i_width = VAR_10->fmt_in.video.i_width;
    VAR_10->fmt_out.video.i_height = VAR_10->fmt_in.video.i_height;
    VAR_10->fmt_out.i_codec = VAR_5;
    VAR_10->p_sys = VAR_11;

    if (VAR_10->fmt_in.video.i_sar_num > 0 && VAR_10->fmt_in.video.i_sar_den > 0) {
        VAR_10->fmt_out.video.i_sar_num = VAR_10->fmt_in.video.i_sar_num;
        VAR_10->fmt_out.video.i_sar_den = VAR_10->fmt_in.video.i_sar_den;
    }
    VAR_10->fmt_out.video.primaries = VAR_10->fmt_in.video.primaries;
    VAR_10->fmt_out.video.transfer = VAR_10->fmt_in.video.transfer;
    VAR_10->fmt_out.video.space = VAR_10->fmt_in.video.space;
    VAR_10->fmt_out.video.color_range = VAR_10->fmt_in.video.color_range;

    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct AVCodecContext {scalar_t__ pix_fmt; TYPE_3__* opaque; } ;
struct TYPE_14__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_16__ {int b_dr_failure; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_17__ {int width; int height; int* linesize; TYPE_2__* opaque; int ** buf; int ** data; } ;
struct TYPE_13__ {int i_pitch; int i_pixel_pitch; int i_lines; int * p_pixels; } ;
typedef TYPE_5__ AVFrame ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (struct AVCodecContext*,int*,int*,int*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_3__*,char*,int,...) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int,char*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct AVCodecContext *VAR_4, AVFrame *VAR_5)
{
    decoder_t *VAR_6 = VAR_4->opaque;
    decoder_sys_t *VAR_7 = VAR_6->p_sys;

    if (VAR_4->pix_fmt == VAR_1)
        return -1;

    picture_t *VAR_8 = FUNC_5(VAR_6);
    if (VAR_8 == ((void*)0))
        return -1;

    int VAR_9 = VAR_5->width;
    int VAR_10 = VAR_5->height;
    int VAR_11[VAR_0];

    FUNC_4(VAR_4, &VAR_9, &VAR_10, VAR_11);


    FUNC_0(VAR_8->p[0].i_pitch >= VAR_9 * VAR_8->p[0].i_pixel_pitch);
    FUNC_0(VAR_8->p[0].i_lines >= VAR_10);

    for (int VAR_12 = 0; VAR_12 < VAR_8->i_planes; VAR_12++)
    {
        if (VAR_8->p[VAR_12].i_pitch % VAR_11[VAR_12])
        {
            if (!FUNC_1(&VAR_7->b_dr_failure, 1))
                FUNC_6(VAR_6, "plane %d: pitch not aligned (%d%%%d): disabling direct rendering",
                         VAR_12, VAR_8->p[VAR_12].i_pitch, VAR_11[VAR_12]);
            goto error;
        }
        if (((uintptr_t)VAR_8->p[VAR_12].p_pixels) % VAR_11[VAR_12])
        {
            if (!FUNC_1(&VAR_7->b_dr_failure, 1))
                FUNC_6(VAR_6, "plane %d not aligned: disabling direct rendering", VAR_12);
            goto error;
        }
    }


    FUNC_0(VAR_8->i_planes < VAR_2);
    FUNC_9(VAR_2 <= VAR_0, "Oops!");

    for (int VAR_13 = 0; VAR_13 < VAR_8->i_planes; VAR_13++)
    {
        uint8_t *VAR_14 = VAR_8->p[VAR_13].p_pixels;
        int VAR_15 = VAR_8->p[VAR_13].i_pitch * VAR_8->p[VAR_13].i_lines;

        VAR_5->data[VAR_13] = VAR_14;
        VAR_5->linesize[VAR_13] = VAR_8->p[VAR_13].i_pitch;
        VAR_5->buf[VAR_13] = FUNC_2(VAR_14, VAR_15, VAR_3,
                                         VAR_8, 0);
        if (FUNC_10(VAR_5->buf[VAR_13] == ((void*)0)))
        {
            while (VAR_13 > 0)
                FUNC_3(&VAR_5->buf[--VAR_13]);
            goto error;
        }
        FUNC_7(VAR_8);
    }

    VAR_5->opaque = VAR_8;

    FUNC_0(VAR_8->i_planes > 0);
    FUNC_8(VAR_8);
    return 0;
error:
    FUNC_8(VAR_8);
    return -1;
}

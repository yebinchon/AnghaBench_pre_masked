
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int uint8_t ;
struct TYPE_14__ {scalar_t__ i_visible_height; scalar_t__ i_visible_width; int i_chroma; } ;
struct TYPE_16__ {int i_planes; TYPE_3__* p; TYPE_2__ format; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_17__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_18__ {TYPE_1__* p_context; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_19__ {int width; int height; size_t* linesize; int ** data; int format; } ;
struct TYPE_15__ {size_t i_pitch; int i_visible_lines; int * p_pixels; } ;
struct TYPE_13__ {int pix_fmt; } ;
typedef TYPE_7__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (size_t,size_t) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (TYPE_5__*,char*,int ,char const*) ;
 int FUNC_6 (TYPE_5__*,char*) ;

__attribute__((used)) static int FUNC_7(decoder_t *VAR_2, picture_t *VAR_3, AVFrame *VAR_4)
{
    decoder_sys_t *VAR_5 = VAR_2->p_sys;

    vlc_fourcc_t VAR_6 = FUNC_0(VAR_4->format);
    if (!VAR_6)
    {
        const char *VAR_7 = FUNC_2(VAR_4->format);

        FUNC_5(VAR_2, "Unsupported decoded output format %d (%s)",
                VAR_5->p_context->pix_fmt, (VAR_7 != ((void*)0)) ? VAR_7 : "unknown");
        return VAR_0;
    } else if (!FUNC_3(VAR_6, VAR_3->format.i_chroma)

     || VAR_4->width != (int) VAR_3->format.i_visible_width
     || VAR_4->height < (int) VAR_3->format.i_visible_height)
    {
        FUNC_6(VAR_2, "dropping frame because the vout changed");
        return VAR_0;
    }

    for (int VAR_8 = 0; VAR_8 < VAR_3->i_planes; VAR_8++)
    {
        const uint8_t *VAR_9 = VAR_4->data[VAR_8];
        uint8_t *VAR_10 = VAR_3->p[VAR_8].p_pixels;
        size_t VAR_11 = VAR_4->linesize[VAR_8];
        size_t VAR_12 = VAR_3->p[VAR_8].i_pitch;
        size_t VAR_13 = FUNC_1(VAR_11, VAR_12);

        for (int VAR_14 = 0; VAR_14 < VAR_3->p[VAR_8].i_visible_lines; VAR_14++)
        {
            FUNC_4(VAR_10, VAR_9, VAR_13);
            VAR_9 += VAR_11;
            VAR_10 += VAR_12;
        }
    }
    return VAR_1;
}

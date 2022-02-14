
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int video_format_t ;
struct TYPE_11__ {size_t i_pitch; size_t i_lines; int i_visible_lines; size_t i_visible_pitch; int * p_pixels; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_12__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef int image_handler_t ;
typedef int es_format_t ;
typedef int demux_t ;
struct TYPE_13__ {int * p_buffer; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,TYPE_3__*,int *,int *) ;
 int FUNC_7 (int *,int *,size_t) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static block_t *FUNC_11(demux_t *VAR_0,
                       es_format_t *VAR_1, vlc_fourcc_t VAR_2, block_t *VAR_3)
{
    image_handler_t *VAR_4 = FUNC_4(VAR_0);
    if (!VAR_4) {
        FUNC_1(VAR_3);
        return ((void*)0);
    }

    video_format_t VAR_5;
    FUNC_10(&VAR_5, VAR_2);

    picture_t *VAR_6 = FUNC_6(VAR_4, VAR_3, VAR_1, &VAR_5);
    FUNC_5(VAR_4);

    if (!VAR_6)
        return ((void*)0);

    FUNC_2(VAR_1);
    FUNC_3(VAR_1, &VAR_5);
    FUNC_9(&VAR_5);

    size_t VAR_7 = 0;
    for (int VAR_8 = 0; VAR_8 < VAR_6->i_planes; VAR_8++)
        VAR_7 += VAR_6->p[VAR_8].i_pitch * VAR_6->p[VAR_8].i_lines;

    VAR_3 = FUNC_0(VAR_7);
    if (!VAR_3) {
        FUNC_8(VAR_6);
        return ((void*)0);
    }

    size_t VAR_9 = 0;
    for (int VAR_10 = 0; VAR_10 < VAR_6->i_planes; VAR_10++) {
        const plane_t *VAR_11 = &VAR_6->p[VAR_10];
        for (int VAR_12 = 0; VAR_12 < VAR_11->i_visible_lines; VAR_12++) {
            FUNC_7(&VAR_3->p_buffer[VAR_9],
                   &VAR_11->p_pixels[VAR_12 * VAR_11->i_pitch],
                   VAR_11->i_visible_pitch);
            VAR_9 += VAR_11->i_visible_pitch;
        }
    }

    FUNC_8(VAR_6);
    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_27__ {int i_planes; int date; TYPE_4__* p; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_23__ {int i_visible_height; int i_visible_width; } ;
struct TYPE_24__ {TYPE_1__ video; } ;
struct TYPE_28__ {TYPE_2__ fmt_in; TYPE_7__* p_sys; } ;
typedef TYPE_6__ encoder_t ;
struct TYPE_31__ {int image_height; int input_components; int next_scanline; int max_v_samp_factor; TYPE_3__* comp_info; int do_fancy_downsampling; int raw_data_in; int in_color_space; int image_width; } ;
struct TYPE_29__ {TYPE_9__ p_jpeg; int i_quality; int setjmp_buffer; int i_blocksize; } ;
typedef TYPE_7__ encoder_sys_t ;
struct TYPE_30__ {unsigned long i_buffer; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_8__ block_t ;
struct TYPE_26__ {int i_pitch; int **************** p_pixels; } ;
struct TYPE_25__ {int v_samp_factor; } ;
typedef int JSAMPROW ;
typedef int ********** JSAMPIMAGE ;
typedef int JSAMPARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int **********) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*,int *,unsigned long*) ;
 int FUNC_7 (TYPE_9__*,int ) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_9__*,int ,int ) ;
 int FUNC_10 (TYPE_9__*,int ) ;
 int FUNC_11 (TYPE_9__*,int **********,int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 void* FUNC_14 (int,int) ;

__attribute__((used)) static block_t *FUNC_15(encoder_t *VAR_4, picture_t *VAR_5)
{
    encoder_sys_t *VAR_6 = VAR_4->p_sys;

    if (FUNC_13(!VAR_5))
    {
        return ((void*)0);
    }
    block_t *VAR_7 = FUNC_0(VAR_6->i_blocksize);
    if (VAR_7 == ((void*)0))
    {
        return ((void*)0);
    }

    JSAMPIMAGE VAR_8 = ((void*)0);
    unsigned long VAR_9 = VAR_7->i_buffer;


    if (FUNC_12(VAR_6->setjmp_buffer))
    {
        goto error;
    }

    FUNC_3(&VAR_6->p_jpeg);
    FUNC_6(&VAR_6->p_jpeg, &VAR_7->p_buffer, &VAR_9);

    VAR_6->p_jpeg.image_width = VAR_4->fmt_in.video.i_visible_width;
    VAR_6->p_jpeg.image_height = VAR_4->fmt_in.video.i_visible_height;
    VAR_6->p_jpeg.input_components = 3;
    VAR_6->p_jpeg.in_color_space = VAR_2;

    FUNC_8(&VAR_6->p_jpeg);
    FUNC_7(&VAR_6->p_jpeg, VAR_2);

    VAR_6->p_jpeg.raw_data_in = VAR_3;




    FUNC_9(&VAR_6->p_jpeg, VAR_6->i_quality, VAR_3);

    FUNC_10(&VAR_6->p_jpeg, VAR_3);


    VAR_8 = FUNC_14(VAR_5->i_planes, sizeof(JSAMPARRAY));
    if (VAR_8 == ((void*)0))
    {
        goto error;
    }

    for (int VAR_10 = 0; VAR_10 < VAR_5->i_planes; VAR_10++)
    {
        VAR_8[VAR_10] = FUNC_14(VAR_6->p_jpeg.comp_info[VAR_10].v_samp_factor, sizeof(JSAMPROW) * VAR_0);
    }

    while (VAR_6->p_jpeg.next_scanline < VAR_6->p_jpeg.image_height)
    {
        for (int VAR_11 = 0; VAR_11 < VAR_5->i_planes; VAR_11++)
        {
            int VAR_12 = VAR_6->p_jpeg.next_scanline * VAR_6->p_jpeg.comp_info[VAR_11].v_samp_factor / VAR_6->p_jpeg.max_v_samp_factor;

            for (int VAR_13 = 0; VAR_13 < VAR_6->p_jpeg.comp_info[VAR_11].v_samp_factor * VAR_0; VAR_13++)
            {
                VAR_8[VAR_11][VAR_13] = VAR_5->p[VAR_11].p_pixels + VAR_5->p[VAR_11].i_pitch * (VAR_12 + VAR_13);
            }
        }
        FUNC_11(&VAR_6->p_jpeg, VAR_8, VAR_6->p_jpeg.max_v_samp_factor * VAR_0);
    }

    FUNC_5(&VAR_6->p_jpeg);
    FUNC_4(&VAR_6->p_jpeg);

    for (int VAR_14 = 0; VAR_14 < VAR_5->i_planes; VAR_14++)
    {
        FUNC_2(&VAR_8[VAR_14]);
    }
    FUNC_2(VAR_8);

    VAR_7->i_buffer = VAR_9;
    VAR_7->i_dts = VAR_7->i_pts = VAR_5->date;

    return VAR_7;

error:
    FUNC_4(&VAR_6->p_jpeg);

    if (VAR_8 != ((void*)0))
    {
        for (int VAR_15 = 0; VAR_15 < VAR_5->i_planes; VAR_15++)
        {
            FUNC_2(&VAR_8[VAR_15]);
        }
    }
    FUNC_2(VAR_8);

    FUNC_1(VAR_7);

    return ((void*)0);
}

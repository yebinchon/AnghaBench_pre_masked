
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_17__ ;


struct TYPE_30__ {scalar_t__ date; TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_27__ {unsigned int i_visible_height; unsigned int i_height; int i_sar_num; int i_sar_den; int orientation; int i_width; int i_visible_width; } ;
struct TYPE_28__ {TYPE_17__ video; } ;
struct TYPE_31__ {TYPE_1__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_34__ {unsigned int output_height; scalar_t__ output_scanline; int output_width; int out_color_space; } ;
struct TYPE_32__ {scalar_t__* p_row_pointers; TYPE_8__ p_jpeg; int setjmp_buffer; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_33__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_29__ {unsigned int i_pitch; scalar_t__ p_pixels; } ;
typedef int JSAMPROW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*,TYPE_17__*) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_8__*,int ,int ) ;
 int FUNC_12 (TYPE_8__*,int ) ;
 int FUNC_13 (TYPE_8__*,scalar_t__*,scalar_t__) ;
 int FUNC_14 (TYPE_8__*,int ,int) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_4__*,char*,int) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__* FUNC_18 (unsigned int,int) ;

__attribute__((used)) static int FUNC_19(decoder_t *VAR_6, block_t *VAR_7)
{
    decoder_sys_t *VAR_8 = VAR_6->p_sys;
    picture_t *VAR_9 = 0;

    VAR_8->p_row_pointers = ((void*)0);

    if (!VAR_7)
        return VAR_4;

    if (VAR_7->i_flags & VAR_0 )
    {
        FUNC_1(VAR_7);
        return VAR_4;
    }


    if (FUNC_17(VAR_8->setjmp_buffer))
    {
        goto error;
    }

    FUNC_8(&VAR_8->p_jpeg);
    FUNC_11(&VAR_8->p_jpeg, VAR_7->p_buffer, VAR_7->i_buffer);
    FUNC_14( &VAR_8->p_jpeg, VAR_1, 0xffff );
    FUNC_12(&VAR_8->p_jpeg, VAR_3);

    VAR_8->p_jpeg.out_color_space = VAR_2;

    FUNC_15(&VAR_8->p_jpeg);


    VAR_6->fmt_out.video.i_visible_width = VAR_6->fmt_out.video.i_width = VAR_8->p_jpeg.output_width;
    VAR_6->fmt_out.video.i_visible_height = VAR_6->fmt_out.video.i_height = VAR_8->p_jpeg.output_height;
    VAR_6->fmt_out.video.i_sar_num = 1;
    VAR_6->fmt_out.video.i_sar_den = 1;

    int VAR_10;
    VAR_10 = FUNC_6( &VAR_8->p_jpeg );
    if ( VAR_10 > 1 )
    {
        FUNC_16( VAR_6, "Jpeg orientation is %d", VAR_10 );
        VAR_6->fmt_out.video.orientation = FUNC_0( VAR_10 );
    }
    FUNC_7(&VAR_8->p_jpeg, &VAR_6->fmt_out.video);


    if (FUNC_4(VAR_6))
    {
        goto error;
    }
    VAR_9 = FUNC_2(VAR_6);
    if (!VAR_9)
    {
        goto error;
    }


    VAR_8->p_row_pointers = FUNC_18(VAR_8->p_jpeg.output_height, sizeof(JSAMPROW));
    if (!VAR_8->p_row_pointers)
    {
        goto error;
    }
    for (unsigned VAR_11 = 0; VAR_11 < VAR_8->p_jpeg.output_height; VAR_11++) {
        VAR_8->p_row_pointers[VAR_11] = VAR_9->p->p_pixels + VAR_9->p->i_pitch * VAR_11;
    }

    while (VAR_8->p_jpeg.output_scanline < VAR_8->p_jpeg.output_height)
    {
        FUNC_13(&VAR_8->p_jpeg,
                VAR_8->p_row_pointers + VAR_8->p_jpeg.output_scanline,
                VAR_8->p_jpeg.output_height - VAR_8->p_jpeg.output_scanline);
    }

    FUNC_10(&VAR_8->p_jpeg);
    FUNC_9(&VAR_8->p_jpeg);
    FUNC_5(VAR_8->p_row_pointers);

    VAR_9->date = VAR_7->i_pts != VAR_5 ? VAR_7->i_pts : VAR_7->i_dts;

    FUNC_1(VAR_7);
    FUNC_3( VAR_6, VAR_9 );
    return VAR_4;

error:

    FUNC_9(&VAR_8->p_jpeg);
    FUNC_5(VAR_8->p_row_pointers);

    FUNC_1(VAR_7);
    return VAR_4;
}

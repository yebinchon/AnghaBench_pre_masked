
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_22__ {scalar_t__ date; int b_progressive; TYPE_4__* p; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_26__ {int i_width; int i_bits_per_pixel; scalar_t__ const i_height; } ;
struct TYPE_20__ {TYPE_9__ video; } ;
struct TYPE_18__ {int i_sar_den; int i_sar_num; } ;
struct TYPE_19__ {TYPE_1__ video; } ;
struct TYPE_23__ {TYPE_3__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_24__ {scalar_t__ i_pts; scalar_t__ i_buffer; int * p_buffer; } ;
typedef TYPE_7__ block_t ;
struct TYPE_25__ {int bytes_per_line; int pixmap_height; int pixmap_width; int bits_per_pixel; int pixmap_depth; int ncolors; int pixmap_format; int file_version; int header_size; } ;
typedef TYPE_8__ XWDFileHeader ;
struct TYPE_21__ {int i_pitch; int * p_pixels; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_7__*) ;
 TYPE_5__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,int const*,size_t const) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (TYPE_9__*,scalar_t__,int,int,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_7 (decoder_t *VAR_11, block_t *VAR_12)
{
    picture_t *VAR_13 = ((void*)0);

    if (VAR_12 == ((void*)0))
        return VAR_0;

    if (VAR_12->i_pts == VAR_7)
        goto drop;
    if (VAR_12->i_buffer < VAR_10)
        goto drop;


    const XWDFileHeader *VAR_14 = (const void *)VAR_12->p_buffer;
    uint32_t VAR_15 = FUNC_5(VAR_14->header_size);
    if (VAR_15 < VAR_10
     || FUNC_5(VAR_14->file_version) < VAR_8
     || FUNC_5(VAR_14->pixmap_format) != 2 )
        goto drop;

    VAR_15 += FUNC_5(VAR_14->ncolors) * VAR_9;
    if (VAR_15 > VAR_12->i_buffer)
        goto drop;
    VAR_12->p_buffer += VAR_15;
    VAR_12->i_buffer -= VAR_15;


    vlc_fourcc_t VAR_16 = 0;
    switch (FUNC_5(VAR_14->pixmap_depth))
    {
        case 8:
            if (FUNC_5(VAR_14->bits_per_pixel) == 8)
                VAR_16 = VAR_6;
            break;
        case 15:
            if (FUNC_5(VAR_14->bits_per_pixel) == 16)
                VAR_16 = VAR_2;
            break;
        case 16:
            if (FUNC_5(VAR_14->bits_per_pixel) == 16)
                VAR_16 = VAR_3;
            break;
        case 24:
            switch (FUNC_5(VAR_14->bits_per_pixel))
            {
                case 32: VAR_16 = VAR_5; break;
                case 24: VAR_16 = VAR_4; break;
            }
            break;
        case 32:
            if (FUNC_5(VAR_14->bits_per_pixel) == 32)
                VAR_16 = VAR_1;
            break;
    }

    if (!VAR_16)
        goto drop;

    FUNC_6(&VAR_11->fmt_out.video, VAR_16,
                       FUNC_5(VAR_14->pixmap_width), FUNC_5(VAR_14->pixmap_height),
                       FUNC_5(VAR_14->pixmap_width), FUNC_5(VAR_14->pixmap_height),
                       VAR_11->fmt_in.video.i_sar_num,
                       VAR_11->fmt_in.video.i_sar_den);

    const size_t VAR_17 = VAR_11->fmt_out.video.i_width
                        * (VAR_11->fmt_out.video.i_bits_per_pixel / 8);
    const uint32_t VAR_18 = FUNC_5(VAR_14->bytes_per_line);


    if (VAR_18 < VAR_17
     || (VAR_12->i_buffer / VAR_18) < VAR_11->fmt_out.video.i_height)
        goto drop;

    if (FUNC_3(VAR_11))
        goto drop;
    VAR_13 = FUNC_1(VAR_11);
    if (VAR_13 == ((void*)0))
        goto drop;

    const uint8_t *VAR_19 = VAR_12->p_buffer;
    uint8_t *VAR_20 = VAR_13->p->p_pixels;
    for (unsigned VAR_21 = 0; VAR_21 < VAR_11->fmt_out.video.i_height; VAR_21++)
    {
        FUNC_4(VAR_20, VAR_19, VAR_17);
        VAR_19 += VAR_18;
        VAR_20 += VAR_13->p->i_pitch;
    }
    VAR_13->date = VAR_12->i_pts;
    VAR_13->b_progressive = 1;

drop:
    FUNC_0(VAR_12);
    FUNC_2(VAR_11, VAR_13);
    return VAR_0;
}

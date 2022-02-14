
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_setup_t ;
struct TYPE_7__ {int red_mask; int green_mask; int blue_mask; int alpha_mask; int red_shift; int green_shift; int blue_shift; } ;
struct TYPE_6__ {scalar_t__ type; int depth; TYPE_2__ direct; } ;
typedef TYPE_1__ xcb_render_pictforminfo_t ;
typedef TYPE_2__ xcb_render_directformat_t ;
struct TYPE_8__ {int bits_per_pixel; } ;
typedef TYPE_3__ xcb_format_t ;
typedef int vlc_fourcc_t ;
typedef int uint_fast8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int const*,int) ;

__attribute__((used)) static vlc_fourcc_t FUNC_2(const xcb_setup_t *VAR_8,
                                const xcb_render_pictforminfo_t *VAR_9)
{
    if (VAR_9->type != VAR_7)
        return 0;

    const xcb_format_t *VAR_10 = FUNC_1(VAR_8,
                                                             VAR_9->depth);
    if (FUNC_0(VAR_10 == ((void*)0)))
        return 0;

    const uint_fast8_t VAR_11 = VAR_10->bits_per_pixel;
    const xcb_render_directformat_t *VAR_12 = &VAR_9->direct;

    switch (VAR_9->depth) {
        case 32:
            if (VAR_11 == 32 && VAR_12->red_mask == 0xff && VAR_12->green_mask == 0xff
             && VAR_12->blue_mask == 0xff && VAR_12->alpha_mask == 0xff) {
                if (VAR_12->red_shift == 0 && VAR_12->green_shift == 8
                 && VAR_12->blue_shift == 16)
                    return VAR_6;
                if (VAR_12->red_shift == 16 && VAR_12->green_shift == 8
                 && VAR_12->blue_shift == 0)
                    return VAR_1;
                if (VAR_12->red_shift == 8 && VAR_12->green_shift == 16
                 && VAR_12->blue_shift == 24)
                    return VAR_0;

            }
            break;

        case 24:
            if (VAR_11 == 32 && VAR_12->red_mask == 0xff && VAR_12->green_mask == 0xff
             && VAR_12->blue_mask == 0xff && VAR_12->alpha_mask == 0x00)
                return VAR_5;
            if (VAR_11 == 24 && VAR_12->red_mask == 0xff && VAR_12->green_mask == 0xff
             && VAR_12->blue_mask == 0xff && VAR_12->alpha_mask == 0x00)
                return VAR_4;
            break;
        case 16:
            if (VAR_11 == 16 && VAR_12->red_mask == 0x1f && VAR_12->green_mask == 0x3f
             && VAR_12->blue_mask == 0x1f && VAR_12->alpha_mask == 0x00)
                return VAR_3;
            break;
        case 15:
            if (VAR_11 == 16 && VAR_12->red_mask == 0x1f && VAR_12->green_mask == 0x1f
             && VAR_12->blue_mask == 0x1f && VAR_12->alpha_mask == 0x00)
                return VAR_2;
            break;
    }

    return 0;
}

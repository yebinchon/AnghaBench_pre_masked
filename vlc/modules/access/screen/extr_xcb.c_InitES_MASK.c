
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xcb_setup_t ;
struct TYPE_12__ {int depth; int bits_per_pixel; } ;
typedef TYPE_2__ xcb_format_t ;
typedef int uint_fast8_t ;
typedef void* uint_fast16_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int es_out_id_t ;
struct TYPE_11__ {int i_bits_per_pixel; int i_sar_num; int i_sar_den; int i_frame_rate; int i_frame_rate_base; void* i_height; void* i_visible_height; void* i_width; void* i_visible_width; scalar_t__ i_chroma; } ;
struct TYPE_13__ {TYPE_1__ video; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_14__ {int out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_15__ {int rate; int conn; } ;
typedef TYPE_5__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 int * FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int * FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static es_out_id_t *FUNC_6 (demux_t *VAR_7, uint_fast16_t VAR_8,
                            uint_fast16_t VAR_9, uint_fast8_t VAR_10,
                            uint8_t *VAR_11)
{
    demux_sys_t *VAR_12 = VAR_7->p_sys;
    const xcb_setup_t *VAR_13 = FUNC_3 (VAR_12->conn);
    uint32_t VAR_14 = 0;

    for (const xcb_format_t *VAR_15 = FUNC_4 (VAR_13),
             *VAR_16 = VAR_15 + FUNC_5 (VAR_13);
         VAR_15 < VAR_16; VAR_15++)
    {
        if (VAR_15->depth != VAR_10)
            continue;
        switch (VAR_15->depth)
        {
            case 32:
                if (VAR_15->bits_per_pixel == 32)
                    VAR_14 = VAR_1;
                break;
            case 24:
                if (VAR_15->bits_per_pixel == 32)
                    VAR_14 = VAR_5;
                else if (VAR_15->bits_per_pixel == 24)
                    VAR_14 = VAR_4;
                break;
            case 16:
                if (VAR_15->bits_per_pixel == 16)
                    VAR_14 = VAR_3;
                break;
            case 15:
                if (VAR_15->bits_per_pixel == 16)
                    VAR_14 = VAR_2;
                break;
            case 8:
                if (VAR_15->bits_per_pixel == 8)
                    VAR_14 = VAR_6;
                break;
        }
        if (VAR_14 != 0)
        {
            *VAR_11 = VAR_15->bits_per_pixel;
            break;
        }
    }

    if (!VAR_14)
    {
        FUNC_2 (VAR_7, "unsupported pixmap formats");
        return ((void*)0);
    }

    es_format_t VAR_17;

    FUNC_0 (&VAR_17, VAR_0, VAR_14);
    VAR_17.video.i_chroma = VAR_14;
    VAR_17.video.i_bits_per_pixel = *VAR_11;
    VAR_17.video.i_sar_num = VAR_17.video.i_sar_den = 1;
    VAR_17.video.i_frame_rate = 1000 * VAR_12->rate;
    VAR_17.video.i_frame_rate_base = 1000;
    VAR_17.video.i_visible_width = VAR_17.video.i_width = VAR_8;
    VAR_17.video.i_visible_height = VAR_17.video.i_height = VAR_9;

    return FUNC_1 (VAR_7->out, &VAR_17);
}

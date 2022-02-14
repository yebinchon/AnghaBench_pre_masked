
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {int rate; scalar_t__ screen_width; scalar_t__ screen_height; scalar_t__ width; scalar_t__ height; int screen_top; int screen_left; scalar_t__ display_id; } ;
typedef TYPE_4__ screen_data_t ;
struct TYPE_18__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_16__ {scalar_t__ i_visible_width; scalar_t__ i_width; scalar_t__ i_visible_height; scalar_t__ i_height; int i_bits_per_pixel; int i_rmask; int i_gmask; int i_bmask; int i_sar_num; int i_sar_den; int i_frame_rate; int i_frame_rate_base; int i_chroma; } ;
struct TYPE_13__ {TYPE_3__ video; } ;
struct TYPE_19__ {scalar_t__ i_display_id; unsigned int i_screen_index; scalar_t__ i_width; scalar_t__ i_height; TYPE_10__ fmt; TYPE_4__* p_data; } ;
typedef TYPE_6__ demux_sys_t ;
struct TYPE_15__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_20__ {TYPE_2__ size; TYPE_1__ origin; } ;
typedef TYPE_7__ CGRect ;
typedef int CGLError ;
typedef scalar_t__ CGDirectDisplayID ;


 TYPE_7__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__*,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_10__*,int ,int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_5__*,char*) ;
 scalar_t__* FUNC_6 (unsigned int,int) ;

int FUNC_7(demux_t *VAR_5)
{
    demux_sys_t *VAR_6 = VAR_5->p_sys;
    screen_data_t *VAR_7;
    CGLError VAR_8;

    VAR_6->p_data = VAR_7 = FUNC_2(1, sizeof(screen_data_t));
    if (!VAR_7)
        return VAR_2;


    VAR_7->display_id = VAR_4;
    VAR_7->rate = FUNC_5(VAR_5, "screen-fps");

    unsigned int VAR_9 = 0;
    VAR_8 = FUNC_1(0, ((void*)0), &VAR_9);
    if (!VAR_8) {
        CGDirectDisplayID *VAR_10;
        VAR_10 = FUNC_6(VAR_9, sizeof(CGDirectDisplayID));
        VAR_8 = FUNC_1(VAR_9, VAR_10, &VAR_9);
        if (!VAR_8) {
            if (VAR_6->i_display_id > 0) {
                for (unsigned int VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
                    if (VAR_6->i_display_id == VAR_10[VAR_11]) {
                        VAR_7->display_id = VAR_10[VAR_11];
                        break;
                    }
                }
            } else if (VAR_6->i_screen_index > 0 && VAR_6->i_screen_index <= VAR_9)
                VAR_7->display_id = VAR_10[VAR_6->i_screen_index - 1];
        }
        FUNC_4(VAR_10);
    }


    CGRect VAR_12 = FUNC_0(VAR_7->display_id);
    VAR_7->screen_left = VAR_12.origin.x;
    VAR_7->screen_top = VAR_12.origin.y;
    VAR_7->screen_width = VAR_12.size.width;
    VAR_7->screen_height = VAR_12.size.height;

    VAR_7->width = VAR_6->i_width;
    VAR_7->height = VAR_6->i_height;
    if (VAR_7->width <= 0 || VAR_7->height <= 0) {
        VAR_7->width = VAR_7->screen_width;
        VAR_7->height = VAR_7->screen_height;
    }


    FUNC_3(&VAR_6->fmt, VAR_0, VAR_1);
    VAR_6->fmt.video.i_visible_width =
    VAR_6->fmt.video.i_width = VAR_12.size.width;
    VAR_6->fmt.video.i_visible_height =
    VAR_6->fmt.video.i_height = VAR_12.size.height;
    VAR_6->fmt.video.i_bits_per_pixel = 32;
    VAR_6->fmt.video.i_chroma = VAR_1;
    VAR_6->fmt.video.i_rmask = 0x00ff0000;
    VAR_6->fmt.video.i_gmask = 0x0000ff00;
    VAR_6->fmt.video.i_bmask = 0x000000ff;
    VAR_6->fmt.video.i_sar_num =
    VAR_6->fmt.video.i_sar_den = 1;
    VAR_6->fmt.video.i_frame_rate = 1000 * VAR_7->rate;
    VAR_6->fmt.video.i_frame_rate_base = 1000;

    return VAR_3;
}

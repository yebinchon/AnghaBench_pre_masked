
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int i_y_offset; int i_x_offset; int i_visible_height; int i_visible_width; } ;
struct TYPE_16__ {TYPE_2__ source; TYPE_6__* sys; } ;
typedef TYPE_5__ vout_display_t ;
struct TYPE_14__ {int height; int width; int y; int x; } ;
struct TYPE_17__ {scalar_t__ dither; TYPE_3__ place; int cv; } ;
typedef TYPE_6__ vout_display_sys_t ;
typedef int * vlc_tick_t ;
typedef int subpicture_t ;
struct TYPE_12__ {int i_bmask; int i_gmask; int i_rmask; } ;
struct TYPE_18__ {TYPE_4__* p; TYPE_1__ format; } ;
typedef TYPE_7__ picture_t ;
struct TYPE_15__ {int i_pitch; int i_pixel_pitch; int * p_pixels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int ,int,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ,scalar_t__,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_5__*,char*) ;

__attribute__((used)) static void FUNC_7(vout_display_t *VAR_2, picture_t *VAR_3,
                    subpicture_t *VAR_4, vlc_tick_t VAR_5)
{
    FUNC_0(VAR_2);
    FUNC_1(VAR_5);

    vout_display_sys_t *VAR_6 = VAR_2->sys;

    if (!VAR_6->dither) {

        VAR_6->dither = FUNC_3(32,
                                            VAR_2->source.i_visible_width,
                                            VAR_2->source.i_visible_height,
                                            VAR_3->p[0].i_pitch,
                                            VAR_3->format.i_rmask,
                                            VAR_3->format.i_gmask,
                                            VAR_3->format.i_bmask,
                                            0x00000000);

        if (!VAR_6->dither) {
            FUNC_6(VAR_2, "could not create libcaca dither object");
            return;
        }
    }

    FUNC_5(VAR_6->cv, VAR_1, VAR_0);
    FUNC_2(VAR_6->cv);

    const int VAR_7 = VAR_2->source.i_y_offset * VAR_3->p->i_pitch +
                            VAR_2->source.i_x_offset * VAR_3->p->i_pixel_pitch;
    FUNC_4(VAR_6->cv, VAR_6->place.x, VAR_6->place.y,
                        VAR_6->place.width, VAR_6->place.height,
                        VAR_6->dither,
                        &VAR_3->p->p_pixels[VAR_7]);
    FUNC_1(VAR_4);
}

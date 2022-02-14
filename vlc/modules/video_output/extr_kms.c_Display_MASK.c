
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vout_display_t ;
struct TYPE_10__ {size_t front_buf; int width; int height; scalar_t__* offsets; scalar_t__* map; TYPE_2__* picture; int * fb; int plane_id; int crtc; int drm_fd; } ;
typedef TYPE_4__ vout_display_sys_t ;
typedef int picture_t ;
struct TYPE_8__ {TYPE_1__* p; } ;
struct TYPE_7__ {scalar_t__ p_pixels; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int,int,int ,int ,int,int) ;
 int FUNC_2 (TYPE_3__*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(vout_display_t *VAR_2, picture_t *VAR_3)
{
    FUNC_0(VAR_3);
    vout_display_sys_t *VAR_4 = VAR_2->sys;
    int VAR_5;

    if (FUNC_1(VAR_4->drm_fd, VAR_4->plane_id, VAR_4->crtc,
                         VAR_4->fb[VAR_4->front_buf], 0,
                         0, 0, VAR_4->width, VAR_4->height,
                         0, 0, VAR_4->width << 16, VAR_4->height << 16)) {
        FUNC_2(VAR_2, "Cannot do set plane for plane id %u, fb %x",
                VAR_4->plane_id,
                VAR_4->fb[VAR_4->front_buf]);
    } else {
        VAR_4->front_buf++;
        VAR_4->front_buf %= VAR_0;

        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
            VAR_4->picture->p[VAR_5].p_pixels =
                    VAR_4->map[VAR_4->front_buf]+VAR_4->offsets[VAR_5];
    }
}

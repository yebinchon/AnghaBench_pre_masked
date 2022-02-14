
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vout_display_t ;
struct TYPE_6__ {int width; int height; int y; int x; } ;
struct TYPE_7__ {TYPE_1__ place; } ;
struct TYPE_9__ {int gl; int vgl; TYPE_2__ area; } ;
typedef TYPE_4__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
typedef int picture_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const,int const) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,float) ;
 int FUNC_6 (int ,int ,int ,int const,int const) ;

__attribute__((used)) static void FUNC_7(vout_display_t *VAR_1, picture_t *VAR_2, subpicture_t *VAR_3,
                    vlc_tick_t VAR_4)
{
    FUNC_0(VAR_4);
    vout_display_sys_t *VAR_5 = VAR_1->sys;

    const int VAR_6 = VAR_5->area.place.width;
    const int VAR_7 = VAR_5->area.place.height;
    FUNC_3 (VAR_5->gl, VAR_6, VAR_7);
    if (FUNC_1 (VAR_5->gl) != VAR_0)
        return;
    FUNC_5(VAR_5->vgl, (float)VAR_6 / VAR_7);
    FUNC_6(VAR_5->vgl, VAR_5->area.place.x, VAR_5->area.place.y, VAR_6, VAR_7);
    FUNC_4 (VAR_5->vgl, VAR_2, VAR_3);
    FUNC_2 (VAR_5->gl);
}

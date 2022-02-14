
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int source; TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_5__ {float height; scalar_t__ width; int y; int x; } ;
struct TYPE_7__ {int place_changed; int gl; int vgl; TYPE_1__ place; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int picture_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,float) ;
 int FUNC_5 (int ,int ,int ,scalar_t__,float) ;

__attribute__((used)) static void FUNC_6 (vout_display_t *VAR_1, picture_t *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_1->sys;
    FUNC_0(VAR_2);

    if (FUNC_1 (VAR_3->gl) == VAR_0)
    {
        if (VAR_3->place_changed)
        {
            float VAR_4 = (float)VAR_3->place.width / VAR_3->place.height;
            FUNC_4(VAR_3->vgl, VAR_4);
            FUNC_5(VAR_3->vgl, VAR_3->place.x, VAR_3->place.y,
                                         VAR_3->place.width, VAR_3->place.height);
            VAR_3->place_changed = 0;
        }

        FUNC_3 (VAR_3->vgl, &VAR_1->source);
        FUNC_2 (VAR_3->gl);
    }
}

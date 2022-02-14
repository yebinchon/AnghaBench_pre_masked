
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_7__ {scalar_t__ xoffset; scalar_t__ yoffset; } ;
struct TYPE_6__ {int picture; TYPE_3__ var_info; int fd; scalar_t__ has_pan; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int picture_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_1, picture_t *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_1->sys;


    if (VAR_3->has_pan) {
        VAR_3->var_info.yoffset = 0;




        VAR_3->var_info.xoffset = 0;


        static int VAR_4 = 0;
        if (VAR_4 < 0) {
            FUNC_0(VAR_3->fd, VAR_0, &VAR_3->var_info);
            VAR_4++;
        }
    }

    FUNC_1(VAR_3->picture, VAR_2);
}

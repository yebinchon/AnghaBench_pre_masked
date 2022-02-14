
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_6__ {int bits_per_pixel; } ;
struct TYPE_8__ {scalar_t__ video_ptr; scalar_t__ fd; int old_info; int * palette; int fb_cmap; TYPE_1__ var_info; int video_size; } ;
typedef TYPE_3__ vout_display_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(vout_display_t *VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_3->sys;

    if (VAR_4->video_ptr != VAR_2) {
        FUNC_0(VAR_4);
        FUNC_3(VAR_4->video_ptr, VAR_4->video_size);
    }

    if (VAR_4->fd >= 0) {

        if (VAR_4->var_info.bits_per_pixel == 8) {
            FUNC_2(VAR_4->fd, VAR_0, &VAR_4->fb_cmap);
            FUNC_1(VAR_4->palette);
            VAR_4->palette = ((void*)0);
        }


        FUNC_2(VAR_4->fd, VAR_1, &VAR_4->old_info);


        FUNC_4(VAR_4->fd);
    }
}

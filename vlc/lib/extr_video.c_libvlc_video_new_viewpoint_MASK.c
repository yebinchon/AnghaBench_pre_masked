
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float f_yaw; float f_pitch; float f_roll; float f_field_of_view; } ;
typedef TYPE_1__ libvlc_video_viewpoint_t ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

libvlc_video_viewpoint_t *FUNC_2(void)
{
    libvlc_video_viewpoint_t *VAR_0 = FUNC_0(sizeof *VAR_0);
    if (FUNC_1(VAR_0 == ((void*)0)))
        return ((void*)0);
    VAR_0->f_yaw = VAR_0->f_pitch = VAR_0->f_roll = VAR_0->f_field_of_view = 0.0f;
    return VAR_0;
}

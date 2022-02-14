
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_v4l2_ctrl_t ;
typedef int vlc_object_t ;
struct v4l2_queryctrl {int name; } ;


 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static vlc_v4l2_ctrl_t *FUNC_1 (vlc_object_t *VAR_0, int VAR_1,
                                         const struct v4l2_queryctrl *VAR_2)
{
    FUNC_0 (VAR_0, "control class %s:", VAR_2->name);
    (void) VAR_1;
    return ((void*)0);
}

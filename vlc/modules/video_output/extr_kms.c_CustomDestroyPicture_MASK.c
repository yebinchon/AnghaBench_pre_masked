
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ drm_fd; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_7__ {scalar_t__ p_sys; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_8__ {scalar_t__ p_voutsys; } ;
typedef TYPE_3__ picture_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(picture_t *VAR_2)
{
    picture_sys_t *VAR_3 = (picture_sys_t*)VAR_2->p_sys;
    vout_display_sys_t *VAR_4 = (vout_display_sys_t *)VAR_3->p_voutsys;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
        FUNC_0(VAR_4, VAR_5);

    FUNC_2(VAR_4->drm_fd, VAR_0, 0);
    FUNC_1(VAR_4->drm_fd);
    FUNC_4(VAR_4->drm_fd);
    VAR_4->drm_fd = 0;
    FUNC_3(VAR_2->p_sys);
}

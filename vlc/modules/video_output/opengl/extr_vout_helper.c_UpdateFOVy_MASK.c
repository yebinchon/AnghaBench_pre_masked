
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_fovy; int f_fovx; int f_sar; } ;
typedef TYPE_1__ vout_display_opengl_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(vout_display_opengl_t *VAR_0)
{
    VAR_0->f_fovy = 2 * FUNC_0(FUNC_1(VAR_0->f_fovx / 2) / VAR_0->f_sar);
}

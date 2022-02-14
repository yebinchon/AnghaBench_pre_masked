
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int projection_mode; } ;
struct TYPE_8__ {float f_sar; int prgm; TYPE_1__ fmt; } ;
typedef TYPE_2__ vout_display_opengl_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

void FUNC_3(vout_display_opengl_t *VAR_0,
                                              float VAR_1)
{



    VAR_0->f_sar = VAR_1;
    FUNC_0(VAR_0);
    FUNC_1(VAR_0);
    FUNC_2(VAR_0, VAR_0->fmt.projection_mode, VAR_0->prgm);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* DeleteProgram ) (scalar_t__) ;} ;
struct TYPE_11__ {TYPE_1__ vt; } ;
typedef TYPE_3__ vout_display_opengl_t ;
struct prgm {scalar_t__ id; TYPE_4__* tc; } ;
struct TYPE_10__ {int pl_vars; } ;
struct TYPE_12__ {scalar_t__ pl_ctx; TYPE_2__ uloc; int * priv; int * p_module; } ;
typedef TYPE_4__ opengl_tex_converter_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_6(vout_display_opengl_t *VAR_0, struct prgm *VAR_1)
{
    opengl_tex_converter_t *VAR_2 = VAR_1->tc;
    if (VAR_2->p_module != ((void*)0))
        FUNC_1(VAR_2, VAR_2->p_module);
    else if (VAR_2->priv != ((void*)0))
        FUNC_2(VAR_2);
    if (VAR_1->id != 0)
        VAR_0->vt.DeleteProgram(VAR_1->id);







    FUNC_5(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct priv {int * transform_mtx; int awh; } ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_10__ {int b_locked; } ;
typedef TYPE_3__ picture_sys_t ;
struct TYPE_11__ {int tex_target; TYPE_1__* vt; struct priv* priv; } ;
typedef TYPE_4__ opengl_tex_converter_t ;
struct TYPE_8__ {int (* BindTexture ) (int ,scalar_t__) ;int (* ActiveTexture ) (int ) ;} ;
typedef scalar_t__ GLuint ;
typedef int GLsizei ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(const opengl_tex_converter_t *VAR_3, GLuint *VAR_4,
               const GLsizei *VAR_5, const GLsizei *VAR_6,
               picture_t *VAR_7, const size_t *VAR_8)
{
    picture_sys_t *VAR_9 = VAR_7->p_sys;
    (void) VAR_5; (void) VAR_6; (void) VAR_8;
    FUNC_2(VAR_4[0] != 0);

    if (VAR_8 != ((void*)0))
        return VAR_1;

    if (!VAR_9->b_locked)
        return VAR_2;

    struct priv *VAR_10 = VAR_3->priv;

    FUNC_0(VAR_7->p_sys, 1);

    if (FUNC_1(VAR_10->awh, &VAR_10->transform_mtx)
        != VAR_2)
    {
        VAR_10->transform_mtx = ((void*)0);
        return VAR_1;
    }

    VAR_3->vt->ActiveTexture(VAR_0);
    VAR_3->vt->BindTexture(VAR_3->tex_target, VAR_4[0]);

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int uSTMatrix; } ;
struct priv {int * transform_mtx; TYPE_2__ uloc; } ;
struct TYPE_7__ {TYPE_1__* vt; struct priv* priv; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_5__ {int (* UniformMatrix4fv ) (int ,int,int ,int *) ;} ;
typedef int GLsizei ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int *) ;

__attribute__((used)) static void
FUNC_1(const opengl_tex_converter_t *VAR_1,
                       const GLsizei *VAR_2, const GLsizei *VAR_3,
                       float VAR_4)
{
    (void) VAR_2; (void) VAR_3; (void) VAR_4;
    struct priv *VAR_5 = VAR_1->priv;
    if (VAR_5->transform_mtx != ((void*)0))
        VAR_1->vt->UniformMatrix4fv(VAR_5->uloc.uSTMatrix, 1, VAR_0,
                                  VAR_5->transform_mtx);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int uSTMatrix; } ;
struct priv {TYPE_2__ uloc; } ;
struct TYPE_7__ {TYPE_1__* vt; struct priv* priv; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_5__ {int (* GetUniformLocation ) (int ,char*) ;} ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(opengl_tex_converter_t *VAR_2, GLuint VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    VAR_4->uloc.uSTMatrix = VAR_2->vt->GetUniformLocation(VAR_3, "uSTMatrix");
    return VAR_4->uloc.uSTMatrix != -1 ? VAR_1 : VAR_0;
}

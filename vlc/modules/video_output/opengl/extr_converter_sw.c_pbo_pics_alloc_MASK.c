
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ** display_pics; } ;
struct priv {TYPE_2__ pbo; } ;
typedef int picture_t ;
struct TYPE_9__ {TYPE_1__* vt; struct priv* priv; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_7__ {int (* BindBuffer ) (int ,int ) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__ const*,int *) ;
 int * FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(const opengl_tex_converter_t *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;
    for (size_t VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
    {
        picture_t *VAR_7 = VAR_5->pbo.display_pics[VAR_6] = FUNC_1(VAR_4);
        if (VAR_7 == ((void*)0))
            goto error;

        if (FUNC_0(VAR_4, VAR_7) != VAR_3)
            goto error;
    }


    VAR_4->vt->BindBuffer(VAR_0, 0);

    return VAR_3;
error:
    for (size_t VAR_8 = 0; VAR_8 < VAR_1 && VAR_5->pbo.display_pics[VAR_8]; ++VAR_8)
        FUNC_2(VAR_5->pbo.display_pics[VAR_8]);
    return VAR_2;
}

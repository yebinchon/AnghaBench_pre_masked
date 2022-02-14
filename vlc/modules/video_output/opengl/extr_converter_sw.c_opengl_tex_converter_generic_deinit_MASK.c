
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* display_pics; } ;
struct priv {struct priv* texture_temp_buf; TYPE_1__ pbo; } ;
struct TYPE_5__ {struct priv* priv; } ;
typedef TYPE_2__ opengl_tex_converter_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct priv*) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(opengl_tex_converter_t *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    for (size_t VAR_3 = 0; VAR_3 < VAR_0 && VAR_2->pbo.display_pics[VAR_3]; ++VAR_3)
        FUNC_1(VAR_2->pbo.display_pics[VAR_3]);
    FUNC_0(VAR_2->texture_temp_buf);
    FUNC_0(VAR_1->priv);
}

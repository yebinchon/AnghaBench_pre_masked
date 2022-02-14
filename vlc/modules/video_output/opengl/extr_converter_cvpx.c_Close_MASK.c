
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct priv {int * last_pic; int cache; int * last_cvtexs; } ;
struct TYPE_2__ {unsigned int tex_count; struct priv* priv; } ;
typedef TYPE_1__ opengl_tex_converter_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct priv*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(vlc_object_t *VAR_0)
{
    opengl_tex_converter_t *VAR_1 = (void *)VAR_0;
    struct priv *VAR_2 = VAR_1->priv;
    if (VAR_2->last_pic != ((void*)0))
        FUNC_3(VAR_2->last_pic);

    FUNC_1(VAR_1->priv);
}

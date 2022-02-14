
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int * pic; } ;
struct priv {TYPE_1__ last; } ;
struct TYPE_5__ {struct priv* priv; } ;
typedef TYPE_2__ opengl_tex_converter_t ;


 int FUNC_0 (struct priv*) ;
 int FUNC_1 (TYPE_2__*,struct priv*) ;

__attribute__((used)) static void
FUNC_2(vlc_object_t *VAR_0)
{
    opengl_tex_converter_t *VAR_1 = (void *)VAR_0;
    struct priv *VAR_2 = VAR_1->priv;

    if (VAR_2->last.pic != ((void*)0))
        FUNC_1(VAR_1, VAR_2);

    FUNC_0(VAR_1->priv);
}

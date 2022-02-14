
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct priv {int awh; scalar_t__ stex_attached; } ;
struct TYPE_2__ {struct priv* priv; } ;
typedef TYPE_1__ opengl_tex_converter_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct priv*) ;

__attribute__((used)) static void
FUNC_2(vlc_object_t *VAR_0)
{
    opengl_tex_converter_t *VAR_1 = (void *)VAR_0;
    struct priv *VAR_2 = VAR_1->priv;

    if (VAR_2->stex_attached)
        FUNC_0(VAR_2->awh);

    FUNC_1(VAR_2);
}

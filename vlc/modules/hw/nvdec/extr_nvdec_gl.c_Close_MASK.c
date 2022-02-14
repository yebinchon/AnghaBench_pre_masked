
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {TYPE_2__* priv; } ;
typedef TYPE_1__ opengl_tex_converter_t ;
struct TYPE_4__ {int device; } ;
typedef TYPE_2__ converter_sys_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(vlc_object_t *VAR_0)
{
    opengl_tex_converter_t *VAR_1 = (void *)VAR_0;
    converter_sys_t *VAR_2 = VAR_1->priv;
    FUNC_0(VAR_2->device);
}

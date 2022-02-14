
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_decoder_device ;
struct TYPE_5__ {TYPE_3__* priv; TYPE_1__* vt; } ;
typedef TYPE_2__ opengl_tex_converter_t ;
struct TYPE_6__ {int * dec_device; } ;
typedef TYPE_3__ converter_sys_t ;
struct TYPE_4__ {scalar_t__ (* GetError ) () ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(vlc_object_t *VAR_1)
{
    opengl_tex_converter_t *VAR_2 = (void *)VAR_1;
    FUNC_1(); FUNC_2(VAR_2->vt->GetError() == VAR_0);
    converter_sys_t *VAR_3 = VAR_2->priv;
    vlc_decoder_device *VAR_4 = VAR_3->dec_device;
    FUNC_4(FUNC_0(VAR_4));
    FUNC_5(VAR_4);
}

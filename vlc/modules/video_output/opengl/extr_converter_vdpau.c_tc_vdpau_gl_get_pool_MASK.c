
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_decoder_device ;
typedef int picture_pool_t ;
struct TYPE_4__ {int fmt; TYPE_2__* priv; } ;
typedef TYPE_1__ opengl_tex_converter_t ;
struct TYPE_5__ {int * dec_device; } ;
typedef TYPE_2__ converter_sys_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,int *,unsigned int) ;

__attribute__((used)) static picture_pool_t *
FUNC_2(opengl_tex_converter_t const *VAR_1,
                     unsigned int VAR_2)
{
    converter_sys_t *VAR_3 = VAR_1->priv;
    vlc_decoder_device *VAR_4 = VAR_3->dec_device;
    return FUNC_1(FUNC_0(VAR_4),
                                      VAR_0,
                                      &VAR_1->fmt, VAR_2);
}

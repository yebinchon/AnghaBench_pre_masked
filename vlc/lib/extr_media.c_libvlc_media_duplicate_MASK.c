
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_input_item; int p_libvlc_instance; } ;
typedef TYPE_1__ libvlc_media_t ;


 TYPE_1__* FUNC_0 (int ,int ) ;

libvlc_media_t *
FUNC_1( libvlc_media_t *VAR_0 )
{
    return FUNC_0(
        VAR_0->p_libvlc_instance, VAR_0->p_input_item );
}

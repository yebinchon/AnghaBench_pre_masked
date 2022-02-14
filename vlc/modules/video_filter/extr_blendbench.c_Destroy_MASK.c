
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_4__ {int p_blend_image; int p_base_image; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_0 )
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_2->p_base_image );
    FUNC_0( VAR_2->p_blend_image );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int p_sectors; } ;
struct TYPE_5__ {int i_vcdimage_handle; TYPE_1__ toc; } ;
typedef TYPE_2__ vcddev_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( vlc_object_t * VAR_0, vcddev_t *VAR_1 )
{
    FUNC_0( VAR_0 );
    if( VAR_1->i_vcdimage_handle != -1 )
        FUNC_2( VAR_1->i_vcdimage_handle );
    else
        return;

    FUNC_1( VAR_1->toc.p_sectors );
}

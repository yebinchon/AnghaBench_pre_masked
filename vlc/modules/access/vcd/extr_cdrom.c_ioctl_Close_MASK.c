
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int i_vcdimage_handle; int i_device_handle; scalar_t__ hcd; scalar_t__ h_device_handle; struct TYPE_5__* psz_dev; } ;
typedef TYPE_1__ vcddev_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;

void FUNC_5( vlc_object_t * VAR_0, vcddev_t *VAR_1 )
{
    FUNC_3( VAR_1->psz_dev );

    if( VAR_1->i_vcdimage_handle != -1 )
    {




        FUNC_1( VAR_0, VAR_1 );
        return;
    }
    if( VAR_1->i_device_handle != -1 )
        FUNC_4( VAR_1->i_device_handle );

    FUNC_3( VAR_1 );
}

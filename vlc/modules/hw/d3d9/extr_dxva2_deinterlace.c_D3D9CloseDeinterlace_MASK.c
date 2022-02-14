
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int hd3d; int hdecoder_dll; int d3d_dev; int processor; int hw_surface; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(vlc_object_t *VAR_0)
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_3( VAR_2->hw_surface );
    FUNC_4( VAR_2->processor );
    FUNC_1( &VAR_2->d3d_dev );
    FUNC_2( VAR_2->hdecoder_dll );
    FUNC_0( &VAR_2->hd3d );

    FUNC_5(VAR_2);
}

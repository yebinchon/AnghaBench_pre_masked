
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int surface_count; scalar_t__ decoder; } ;
struct TYPE_5__ {scalar_t__ dxva2_dll; int hd3d; int d3d_dev; int devmng; int d3ddec; int device; scalar_t__* hw_surface; TYPE_1__ hw; } ;
typedef TYPE_2__ vlc_va_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(void *VAR_0)
{
    vlc_va_sys_t *VAR_1 = VAR_0;

    if (VAR_1->hw.decoder)
        FUNC_7(VAR_1->hw.decoder);
    if (VAR_1->hw_surface[0])
    {
        for (unsigned VAR_2 = 0; VAR_2 < VAR_1->hw.surface_count; VAR_2++)
            FUNC_5(VAR_1->hw_surface[VAR_2]);
    }
    FUNC_3(VAR_1->devmng, VAR_1->device);
    FUNC_6(VAR_1->d3ddec);
    FUNC_4(VAR_1->devmng);
    FUNC_1(&VAR_1->d3d_dev);
    FUNC_0( &VAR_1->hd3d );
    if (VAR_1->dxva2_dll)
        FUNC_2(VAR_1->dxva2_dll);

    FUNC_8(VAR_1);
}

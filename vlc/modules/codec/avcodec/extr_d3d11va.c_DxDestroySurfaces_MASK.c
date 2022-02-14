
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int surface_count; scalar_t__ video_context; scalar_t__ decoder; } ;
struct TYPE_5__ {int hd3d; int d3d_dev; TYPE_1__ hw; scalar_t__ d3ddec; scalar_t__* renderSrc; scalar_t__* hw_surface; } ;
typedef TYPE_2__ vlc_va_sys_t ;
typedef int ID3D11Resource ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int **) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(void *VAR_1)
{
    vlc_va_sys_t *VAR_2 = VAR_1;
    if (VAR_2->hw_surface[0]) {
        ID3D11Resource *VAR_3;
        FUNC_5( VAR_2->hw_surface[0], &VAR_3 );
        FUNC_2(VAR_3);
        FUNC_2(VAR_3);
        for (unsigned VAR_4 = 0; VAR_4 < VAR_2->hw.surface_count; VAR_4++)
        {
            FUNC_6( VAR_2->hw_surface[VAR_4] );
            for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
            {
                if (VAR_2->renderSrc[VAR_4*VAR_0 + VAR_5])
                    FUNC_3(VAR_2->renderSrc[VAR_4*VAR_0 + VAR_5]);
            }
        }
    }
    if (VAR_2->hw.decoder)
        FUNC_7(VAR_2->hw.decoder);

    if (VAR_2->d3ddec)
        FUNC_8(VAR_2->d3ddec);
    if (VAR_2->hw.video_context)
        FUNC_4(VAR_2->hw.video_context);
    FUNC_1( &VAR_2->d3d_dev );

    FUNC_0( &VAR_2->hd3d );

    FUNC_9(VAR_2);
}

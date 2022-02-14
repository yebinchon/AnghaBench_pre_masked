
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct render_context {int * sharedRenderSurface; int * libvlc_d3d; int * sharedRenderTexture; int * sharedHandled; int * renderTexture; int * d3ddev; int d3d; } ;
struct TYPE_5__ {int full_range; int transfer; int primaries; int colorspace; int surface_format; } ;
typedef TYPE_1__ libvlc_video_output_cfg_t ;
struct TYPE_6__ {int Format; } ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;
typedef TYPE_2__ D3DDISPLAYMODE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int,unsigned int,int,int ,int ,int ,int **,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int **) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_9(struct render_context *VAR_5, unsigned VAR_6, unsigned VAR_7,
                   IDirect3DDevice9 *VAR_8,
                   libvlc_video_output_cfg_t *VAR_9)
{
    HRESULT VAR_10;
    D3DDISPLAYMODE VAR_11;

    VAR_10 = FUNC_1(VAR_5->d3d, 0, &VAR_11);


    if (VAR_5->renderTexture)
    {
        FUNC_8(VAR_5->renderTexture);
        VAR_5->renderTexture = ((void*)0);
        VAR_5->sharedHandled = ((void*)0);
    }
    if (VAR_5->sharedRenderTexture)
    {
        FUNC_8(VAR_5->sharedRenderTexture);
        VAR_5->sharedRenderTexture = ((void*)0);
    }
    if (VAR_5->sharedRenderSurface)
    {
        FUNC_6(VAR_5->sharedRenderSurface);
        VAR_5->sharedRenderSurface = ((void*)0);
    }

    if (VAR_5->libvlc_d3d)
    {
        FUNC_4(VAR_5->libvlc_d3d);
    }
    VAR_5->libvlc_d3d = VAR_8;
    FUNC_2(VAR_5->libvlc_d3d);


    VAR_10 = FUNC_3(VAR_5->d3ddev, VAR_6, VAR_7, 1, VAR_1,
                                        VAR_11.Format,
                                        VAR_0,
                                        &VAR_5->renderTexture,
                                        &VAR_5->sharedHandled);
    if (FUNC_0(VAR_10))
        return 0;


    VAR_10 = FUNC_3(VAR_5->libvlc_d3d, VAR_6, VAR_7, 1, VAR_1,
                                        VAR_11.Format,
                                        VAR_0,
                                        &VAR_5->sharedRenderTexture,
                                        &VAR_5->sharedHandled);
    if (FUNC_0(VAR_10))
        return 0;

    VAR_10 = FUNC_7(VAR_5->sharedRenderTexture, 0, &VAR_5->sharedRenderSurface);
    if (FUNC_0(VAR_10))
        return 0;

    VAR_10 = FUNC_5(VAR_5->libvlc_d3d, 0, VAR_5->sharedRenderSurface);
    if (FUNC_0(VAR_10)) return 0;

    VAR_9->surface_format = VAR_11.Format;
    VAR_9->full_range = 1;
    VAR_9->colorspace = VAR_2;
    VAR_9->primaries = VAR_3;
    VAR_9->transfer = VAR_4;

    return 1;
}

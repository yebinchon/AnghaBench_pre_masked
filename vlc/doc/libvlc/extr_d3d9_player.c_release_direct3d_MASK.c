
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_context {int d3d; scalar_t__ d3ddev; scalar_t__ libvlc_d3d; scalar_t__ rectangleFVFVertexBuf; scalar_t__ sharedRenderTexture; scalar_t__ sharedRenderSurface; scalar_t__ renderTexture; scalar_t__ backBuffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct render_context *VAR_0)
{
    if (VAR_0->backBuffer)
        FUNC_2(VAR_0->backBuffer);
    if (VAR_0->renderTexture)
        FUNC_3(VAR_0->renderTexture);
    if (VAR_0->sharedRenderSurface)
        FUNC_2(VAR_0->sharedRenderSurface);
    if (VAR_0->sharedRenderTexture)
        FUNC_3(VAR_0->sharedRenderTexture);
    if (VAR_0->rectangleFVFVertexBuf)
        FUNC_4(VAR_0->rectangleFVFVertexBuf);
    if (VAR_0->libvlc_d3d)
        FUNC_1(VAR_0->libvlc_d3d);
    FUNC_1(VAR_0->d3ddev);
    FUNC_0(VAR_0->d3d);
}

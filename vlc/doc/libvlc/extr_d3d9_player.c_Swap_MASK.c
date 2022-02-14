
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_context {int hWnd; int d3ddev; int rectangleFVFVertexBuf; scalar_t__ renderTexture; int backBuffer; } ;
struct CUSTOMVERTEX {int dummy; } ;
typedef int IDirect3DBaseTexture9 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ,int ,float,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int) ;
 int FUNC_9 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_10(struct render_context *VAR_3)
{

    FUNC_7(VAR_3->d3ddev, 0, VAR_3->backBuffer);


    FUNC_2(VAR_3->d3ddev, 0, ((void*)0), VAR_1, FUNC_0(255, 120, 0), 1.0f, 0);

    FUNC_1(VAR_3->d3ddev);
    FUNC_9(VAR_3->d3ddev, 0, (IDirect3DBaseTexture9*)VAR_3->renderTexture);

    FUNC_8(VAR_3->d3ddev, 0, VAR_3->rectangleFVFVertexBuf, 0, sizeof(struct CUSTOMVERTEX));
    FUNC_6(VAR_3->d3ddev, VAR_0);
    FUNC_3(VAR_3->d3ddev, VAR_2, 0, 2);
    FUNC_4(VAR_3->d3ddev);

    FUNC_5(VAR_3->d3ddev, ((void*)0), ((void*)0), VAR_3->hWnd, ((void*)0));
}

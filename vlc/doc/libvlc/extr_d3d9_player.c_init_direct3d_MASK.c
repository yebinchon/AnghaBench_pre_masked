
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct render_context {int rectangleFVFVertexBuf; int d3ddev; int backBuffer; int d3d; void* hWnd; } ;
struct CUSTOMVERTEX {float member_2; float member_3; float member_5; float member_6; int member_4; int member_1; int member_0; } ;
typedef int rectangleVertices ;
struct TYPE_3__ {void* hDeviceWindow; int SwapEffect; int Windowed; int member_0; } ;
typedef int LPVOID ;
typedef void* HWND ;
typedef int HRESULT ;
typedef TYPE_1__ D3DPRESENT_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ,int *,int,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int,int,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,void**,int ) ;
 int FUNC_6 (int ) ;
 int VAR_15 ;
 int FUNC_7 (int ,struct CUSTOMVERTEX*,int) ;

__attribute__((used)) static void FUNC_8(struct render_context *VAR_16, HWND VAR_17)
{
    VAR_16->hWnd = VAR_17;
    HRESULT VAR_18 = FUNC_1(VAR_14, &VAR_16->d3d);

    D3DPRESENT_PARAMETERS VAR_19 = { 0 };
    VAR_19.Windowed = VAR_15;
    VAR_19.SwapEffect = VAR_11;
    VAR_19.hDeviceWindow = VAR_17;

    FUNC_2(VAR_16->d3d, VAR_5,
                            VAR_9,
                            ((void*)0),
                            VAR_7| VAR_6 | VAR_8,
                            &VAR_19,
                            &VAR_16->d3ddev);

    FUNC_4(VAR_16->d3ddev, 0, &VAR_16->backBuffer);

    struct CUSTOMVERTEX VAR_20[] =
    {
        { VAR_1, VAR_3, 0.0f, 1.0f, FUNC_0(255, 255, 255, 255), 0.0f, 0.0f },
        { VAR_2, VAR_3, 0.0f, 1.0f, FUNC_0(255, 255, 255, 255), 1.0f, 0.0f },
        { VAR_2, VAR_0, 0.0f, 1.0f, FUNC_0(255, 255, 255, 255), 1.0f, 1.0f },
        { VAR_1, VAR_0, 0.0f, 1.0f, FUNC_0(255, 255, 255, 255), 0.0f, 1.0f },
    };
    FUNC_3(VAR_16->d3ddev, sizeof(VAR_20),
                                        VAR_12|VAR_13,
                                        VAR_4,
                                        VAR_10,
                                        &VAR_16->rectangleFVFVertexBuf,
                                        ((void*)0));

    LPVOID VAR_21;
    FUNC_5(VAR_16->rectangleFVFVertexBuf, 0, 0, (void**)&VAR_21, 0);
    FUNC_7(VAR_21, VAR_20, sizeof(VAR_20));
    FUNC_6(VAR_16->rectangleFVFVertexBuf);
}

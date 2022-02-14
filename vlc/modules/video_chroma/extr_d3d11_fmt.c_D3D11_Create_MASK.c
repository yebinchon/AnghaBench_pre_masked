
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int hdll; int compiler_dll; void* OurD3DCompile; } ;
typedef TYPE_1__ d3d11_handle_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;

int FUNC_7(vlc_object_t *VAR_2, d3d11_handle_t *VAR_3, bool VAR_4)
{

    VAR_3->hdll = FUNC_3(FUNC_4("D3D11.DLL"));
    if (!VAR_3->hdll)
    {
        FUNC_6(VAR_2, "cannot load d3d11.dll, aborting");
        return VAR_0;
    }

    if (VAR_4)
    {
        VAR_3->compiler_dll = FUNC_0();
        if (!VAR_3->compiler_dll) {
            FUNC_5(VAR_2, "cannot load d3dcompiler.dll, aborting");
            FUNC_1(VAR_3->hdll);
            return VAR_0;
        }

        VAR_3->OurD3DCompile = (void *)FUNC_2(VAR_3->compiler_dll, "D3DCompile");
        if (!VAR_3->OurD3DCompile) {
            FUNC_5(VAR_2, "Cannot locate reference to D3DCompile in d3dcompiler DLL");
            FUNC_1(VAR_3->compiler_dll);
            FUNC_1(VAR_3->hdll);
            return VAR_0;
        }
    }

    return VAR_1;
}

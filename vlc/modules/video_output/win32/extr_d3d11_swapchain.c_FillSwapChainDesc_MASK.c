
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct d3d11_local_swapchain {TYPE_2__* pixelFormat; } ;
typedef void* UINT ;
struct TYPE_6__ {int Count; scalar_t__ Quality; } ;
struct TYPE_8__ {int BufferCount; int SwapEffect; int Format; void* Height; void* Width; TYPE_1__ SampleDesc; int BufferUsage; } ;
struct TYPE_7__ {int formatTexture; } ;
typedef int * HMODULE ;
typedef TYPE_3__ DXGI_SWAP_CHAIN_DESC1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct d3d11_local_swapchain *VAR_4, UINT VAR_5, UINT VAR_6, DXGI_SWAP_CHAIN_DESC1 *VAR_7)
{
    FUNC_3(VAR_7, sizeof(*VAR_7));
    VAR_7->BufferCount = 3;
    VAR_7->BufferUsage = VAR_3;
    VAR_7->SampleDesc.Count = 1;
    VAR_7->SampleDesc.Quality = 0;
    VAR_7->Width = VAR_5;
    VAR_7->Height = VAR_6;
    VAR_7->Format = VAR_4->pixelFormat->formatTexture;


    bool VAR_8 = 0;
    HMODULE VAR_9 = FUNC_0(FUNC_2("kernel32.dll"));
    if (FUNC_4(VAR_9 != ((void*)0)))
        VAR_8 = FUNC_1(VAR_9, "GetSystemCpuSetInformation") != ((void*)0);
    if (VAR_8)
        VAR_7->SwapEffect = VAR_1;
    else
    {
        bool VAR_10 = 0;
        if (FUNC_4(VAR_9 != ((void*)0)))
            VAR_10 = FUNC_1(VAR_9, "CheckTokenCapability") != ((void*)0);
        if (VAR_10)
            VAR_7->SwapEffect = VAR_2;
        else
        {
            VAR_7->SwapEffect = VAR_0;
            VAR_7->BufferCount = 1;
        }
    }
}

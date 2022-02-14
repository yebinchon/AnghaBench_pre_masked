
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ video_transfer_func_t ;
typedef scalar_t__ video_color_space_t ;
typedef scalar_t__ video_color_primaries_t ;
struct d3d11_local_swapchain {int logged_capabilities; TYPE_2__* colorspace; int obj; int dxgiswapChain; int dxgiswapChain4; } ;
struct TYPE_9__ {scalar_t__ transfer; scalar_t__ full_range; scalar_t__ colorspace; scalar_t__ primaries; } ;
typedef TYPE_1__ libvlc_video_direct3d_cfg_t ;
struct TYPE_10__ {char* name; scalar_t__ dxgi; scalar_t__ primaries; scalar_t__ color; scalar_t__ transfer; scalar_t__ b_full_range; } ;
typedef TYPE_2__ dxgi_color_space ;
typedef int UINT ;
struct TYPE_11__ {scalar_t__ ColorSpace; int BitsPerColor; int MaxFullFrameLuminance; } ;
typedef int IDXGISwapChain3 ;
typedef int IDXGIOutput6 ;
typedef int IDXGIOutput ;
typedef int HRESULT ;
typedef TYPE_3__ DXGI_OUTPUT_DESC1 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ,int **) ;
 int FUNC_9 (int ,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_12 (int ,char*,char*,...) ;
 int FUNC_13 (int ,char*,char*,int ) ;
 int FUNC_14 (int ,char*,...) ;

__attribute__((used)) static void FUNC_15(struct d3d11_local_swapchain *VAR_6, const libvlc_video_direct3d_cfg_t *VAR_7)
{
    HRESULT VAR_8;
    int VAR_9 = 0;
    int VAR_10, VAR_11 = 0;
    UINT VAR_12;
    IDXGISwapChain3 *VAR_13 = ((void*)0);
    VAR_8 = FUNC_9( VAR_6->dxgiswapChain, &VAR_1, (void **)&VAR_13);
    if (FUNC_0(VAR_8)) {
        FUNC_14(VAR_6->obj, "could not get a IDXGISwapChain3");
        goto done;
    }



    VAR_9 = -1;
    for (int VAR_14=0; VAR_5[VAR_14].name; ++VAR_14)
    {
        VAR_8 = FUNC_5(VAR_13, VAR_5[VAR_14].dxgi, &VAR_12);
        if (FUNC_10(VAR_8) && VAR_12) {
            if (!VAR_6->logged_capabilities)
                FUNC_12(VAR_6->obj, "supports colorspace %s", VAR_5[VAR_14].name);
            VAR_10 = 0;
            if (VAR_5[VAR_14].primaries == (video_color_primaries_t) VAR_7->primaries)
                VAR_10++;
            if (VAR_5[VAR_14].color == (video_color_space_t) VAR_7->colorspace)
                VAR_10 += 2;
            if (VAR_5[VAR_14].transfer == (video_transfer_func_t) VAR_7->transfer ||

                (VAR_5[VAR_14].transfer == VAR_4 && VAR_7->transfer == VAR_3))
                VAR_10++;
            if (VAR_5[VAR_14].b_full_range == VAR_7->full_range)
                VAR_10++;
            if (VAR_10 > VAR_11 || (VAR_10 && VAR_9 == -1)) {
                VAR_9 = VAR_14;
                VAR_11 = VAR_10;
            }
        }
    }
    VAR_6->logged_capabilities = 1;

    if (VAR_9 == -1)
    {
        VAR_9 = 0;
        FUNC_14(VAR_6->obj, "no matching colorspace found force %s", VAR_5[VAR_9].name);
    }

    FUNC_9( VAR_6->dxgiswapChain, &VAR_2, (void **)&VAR_6->dxgiswapChain4);
    VAR_8 = FUNC_7(VAR_13, VAR_5[VAR_9].dxgi);
    if (FUNC_10(VAR_8))
        FUNC_12(VAR_6->obj, "using colorspace %s", VAR_5[VAR_9].name);
    else
        FUNC_13(VAR_6->obj, "Failed to set colorspace %s. (hr=0x%lX)", VAR_5[VAR_9].name, VAR_8);
done:
    VAR_6->colorspace = &VAR_5[VAR_9];
    if (VAR_13)
        FUNC_6(VAR_13);
}

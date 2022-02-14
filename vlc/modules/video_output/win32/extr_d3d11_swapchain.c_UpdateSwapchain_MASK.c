
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct d3d11_local_swapchain {int logged_capabilities; int ** swapchainTargetView; TYPE_2__ const* pixelFormat; int d3d_dev; int obj; int * dxgiswapChain; } ;
struct TYPE_13__ {scalar_t__ width; scalar_t__ height; scalar_t__ bitdepth; } ;
typedef TYPE_1__ libvlc_video_direct3d_cfg_t ;
struct TYPE_14__ {scalar_t__ formatTexture; scalar_t__ bitsPerChannel; int fourcc; int * name; } ;
typedef TYPE_2__ d3d_format_t ;
struct TYPE_16__ {scalar_t__ Format; scalar_t__ Width; scalar_t__ Height; int member_0; } ;
struct TYPE_15__ {scalar_t__ Format; } ;
typedef int LPVOID ;
typedef int ID3D11Texture2D ;
typedef int ID3D11Resource ;
typedef int HRESULT ;
typedef TYPE_3__ DXGI_SWAP_CHAIN_DESC1 ;
typedef TYPE_4__ D3D11_TEXTURE2D_DESC ;


 size_t FUNC_0 (int **) ;
 int FUNC_1 (struct d3d11_local_swapchain*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,TYPE_2__ const*,int **) ;
 int FUNC_3 (int *,int *,TYPE_2__ const*,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int *,int ,int,int,int ,int ,int,int ) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 int FUNC_13 (int *,int ,int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct d3d11_local_swapchain*,TYPE_1__ const*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,...) ;
 scalar_t__ FUNC_21 (int ) ;
 int * FUNC_22 (int ,char*) ;

__attribute__((used)) static bool FUNC_23( struct d3d11_local_swapchain *VAR_3, const libvlc_video_direct3d_cfg_t *VAR_4 )
{
    ID3D11Texture2D* VAR_5;
    HRESULT VAR_6;

    D3D11_TEXTURE2D_DESC VAR_7 = { 0 };
    uint8_t VAR_8 = 0;

    if ( VAR_3->swapchainTargetView[0] ) {
        ID3D11Resource *VAR_9 = ((void*)0);
        FUNC_7( VAR_3->swapchainTargetView[0], &VAR_9 );
        if ( VAR_9 )
        {
            FUNC_10( (ID3D11Texture2D*) VAR_9, &VAR_7 );
            FUNC_9( VAR_9 );
        }
        FUNC_18(VAR_3->pixelFormat->formatTexture == VAR_7.Format);
        VAR_8 = VAR_3->pixelFormat->bitsPerChannel;
    }

    if ( VAR_7.Width == VAR_4->width && VAR_7.Height == VAR_4->height && VAR_4->bitdepth <= VAR_8 )

        return 1;

    for ( size_t VAR_10 = 0; VAR_10 < FUNC_0( VAR_3->swapchainTargetView ); VAR_10++ )
    {
        if ( VAR_3->swapchainTargetView[VAR_10] ) {
            FUNC_8( VAR_3->swapchainTargetView[VAR_10] );
            VAR_3->swapchainTargetView[VAR_10] = ((void*)0);
        }
    }

    const d3d_format_t *VAR_11 = ((void*)0);
    VAR_11 = FUNC_5( VAR_3->obj, &VAR_3->d3d_dev, 0, 1,
                                      VAR_4->bitdepth > 8 ? 10 : 8,
                                      0, 0,
                                      0, VAR_0 );
    if (FUNC_21(VAR_11 == ((void*)0)))
        VAR_11 = FUNC_5( VAR_3->obj, &VAR_3->d3d_dev, 0, 0,
                                          VAR_4->bitdepth > 8 ? 10 : 8,
                                          0, 0,
                                          0, VAR_0 );

    if (FUNC_21(VAR_11 == ((void*)0))) {
        FUNC_20(VAR_3->obj, "Could not get the SwapChain format.");
        return 0;
    }


    if (VAR_3->dxgiswapChain != ((void*)0) && VAR_3->pixelFormat != VAR_11)
    {

        FUNC_14(VAR_3->dxgiswapChain);
        VAR_3->dxgiswapChain = ((void*)0);
        VAR_3->logged_capabilities = 0;
    }

    if ( VAR_3->dxgiswapChain == ((void*)0) )
    {
        VAR_3->pixelFormat = VAR_11;
        FUNC_1(VAR_3, VAR_4->width, VAR_4->height);

        if (VAR_3->dxgiswapChain == ((void*)0))
            return 0;
    }
    else

    {

        VAR_6 = FUNC_15( VAR_3->dxgiswapChain, 0, VAR_4->width, VAR_4->height,
                                           VAR_1, 0 );
        if ( FUNC_4( VAR_6 ) ) {
            FUNC_20( VAR_3->obj, "Failed to resize the backbuffer. (hr=0x%lX)", VAR_6 );
            return 0;
        }
    }

    VAR_6 = FUNC_13( VAR_3->dxgiswapChain, 0, &VAR_2, (LPVOID *) &VAR_5 );
    if ( FUNC_4( VAR_6 ) ) {
        FUNC_20( VAR_3->obj, "Could not get the backbuffer for the Swapchain. (hr=0x%lX)", VAR_6 );
        return 0;
    }

    VAR_6 = FUNC_3( &VAR_3->d3d_dev, (ID3D11Resource *) VAR_5,
                                    VAR_3->pixelFormat, VAR_3->swapchainTargetView );
    FUNC_11( VAR_5 );
    if ( FUNC_4( VAR_6 ) ) {
        FUNC_20( VAR_3->obj, "Failed to create the target view. (hr=0x%lX)", VAR_6 );
        return 0;
    }

    FUNC_2( &VAR_3->d3d_dev, VAR_3->pixelFormat, VAR_3->swapchainTargetView );

    FUNC_17(VAR_3, VAR_4);

    return 1;
}

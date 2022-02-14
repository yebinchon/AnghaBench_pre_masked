
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct d3d11_local_swapchain {int swapchainTargetView; int pixelFormat; int d3d_dev; scalar_t__ dxgiswapChain4; int dxgiswapChain; } ;
struct TYPE_12__ {int MaxFrameAverageLightLevel; int MaxContentLightLevel; int MaxMasteringLuminance; int MinMasteringLuminance; int * WhitePoint; int * RedPrimary; int * BluePrimary; int * GreenPrimary; } ;
typedef TYPE_4__ libvlc_video_direct3d_hdr10_metadata_t ;
typedef int i_width ;
typedef int i_height ;
typedef int hdr10 ;
typedef int UINT ;
struct TYPE_9__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_10__ {TYPE_1__ display; } ;
struct TYPE_11__ {TYPE_2__ vdcfg; } ;
struct TYPE_14__ {TYPE_3__ area; } ;
struct TYPE_13__ {int MaxFrameAverageLightLevel; int MaxContentLightLevel; int MaxMasteringLuminance; int MinMasteringLuminance; int * WhitePoint; int * RedPrimary; int * BluePrimary; int * GreenPrimary; int member_0; } ;
typedef int HRESULT ;
typedef TYPE_5__ DXGI_HDR_METADATA_HDR10 ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ,int,TYPE_5__*) ;
 int FUNC_2 (int ,int *,int*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

bool FUNC_5( void *VAR_5, bool VAR_6, const libvlc_video_direct3d_hdr10_metadata_t *VAR_7 )
{
    struct d3d11_local_swapchain *VAR_8 = VAR_5;

    if ( VAR_6 )
    {
        if ( VAR_8->dxgiswapChain4 && VAR_7 != ((void*)0) )
        {
            DXGI_HDR_METADATA_HDR10 VAR_9 = { 0 };
            VAR_9[0] = VAR_7->GreenPrimary[0];
            VAR_9[1] = VAR_7->GreenPrimary[1];
            VAR_9[0] = VAR_7->BluePrimary[0];
            VAR_9[1] = VAR_7->BluePrimary[1];
            VAR_9[0] = VAR_7->RedPrimary[0];
            VAR_9[1] = VAR_7->RedPrimary[1];
            VAR_9[0] = VAR_7->WhitePoint[0];
            VAR_9[1] = VAR_7->WhitePoint[1];
            VAR_9 = VAR_7->MinMasteringLuminance;
            VAR_9 = VAR_7->MaxMasteringLuminance;
            VAR_9 = VAR_7->MaxContentLightLevel;
            VAR_9 = VAR_7->MaxFrameAverageLightLevel;
            FUNC_1( VAR_8->dxgiswapChain4, VAR_0, sizeof( VAR_9 ), &VAR_9 );
        }

        FUNC_0( &VAR_8->d3d_dev, VAR_8->pixelFormat, VAR_8->swapchainTargetView );
    }
    return 1;
}

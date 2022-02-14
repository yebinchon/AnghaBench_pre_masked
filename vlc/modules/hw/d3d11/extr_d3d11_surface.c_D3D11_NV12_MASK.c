
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;


typedef int const uint8_t ;
struct TYPE_25__ {scalar_t__ i_visible_height; scalar_t__ i_y_offset; } ;
struct TYPE_26__ {TYPE_1__ format; int * context; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_27__ {int context; int processorInput; int ** resource; scalar_t__ slice_index; } ;
typedef TYPE_3__ picture_sys_d3d11_t ;
struct TYPE_28__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_24__ {int videoProcessor; int d3dvidctx; scalar_t__ procEnumerator; } ;
struct TYPE_29__ {int staging_lock; int staging_resource; int cache; int staging; int * procOutResource; int processorOutput; TYPE_19__ d3d_proc; } ;
typedef TYPE_5__ filter_sys_t ;
typedef scalar_t__ UINT ;
struct TYPE_32__ {int RowPitch; int const* pData; } ;
struct TYPE_31__ {scalar_t__ Format; int Height; } ;
struct TYPE_30__ {int pInputSurface; int Enable; } ;
typedef int ID3D11Resource ;
typedef scalar_t__ HRESULT ;
typedef TYPE_6__ D3D11_VIDEO_PROCESSOR_STREAM ;
typedef TYPE_7__ D3D11_TEXTURE2D_DESC ;
typedef TYPE_8__ D3D11_MAPPED_SUBRESOURCE ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const**,size_t*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_19__*,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,TYPE_8__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int,TYPE_6__*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(filter_t *VAR_6, picture_t *VAR_7, picture_t *VAR_8)
{
    if (VAR_7->context == ((void*)0))
    {

        FUNC_11(VAR_6, "missing source context");
        return;
    }

    filter_sys_t *VAR_9 = VAR_6->p_sys;
    picture_sys_d3d11_t *VAR_10 = FUNC_0(VAR_7);

    D3D11_TEXTURE2D_DESC VAR_11;
    D3D11_MAPPED_SUBRESOURCE VAR_12;

    FUNC_12(&VAR_9->staging_lock);
    if (FUNC_10(VAR_6, VAR_10) != VAR_5)
    {
        FUNC_13(&VAR_9->staging_lock);
        return;
    }

    UINT VAR_13 = VAR_10->slice_index;
    ID3D11Resource *VAR_14 = VAR_10->resource[VAR_3];
    FUNC_4(VAR_10->context, VAR_9->staging_resource,
                                              0, 0, 0, 0,
                                              VAR_14,
                                              VAR_13,
                                              ((void*)0));

    HRESULT VAR_15 = FUNC_5(VAR_10->context, VAR_9->staging_resource,
                                         0, VAR_0, 0, &VAR_12);
    if (FUNC_3(VAR_15)) {
        FUNC_11(VAR_6, "Failed to map source surface. (hr=0x%lX)", VAR_15);
        FUNC_13(&VAR_9->staging_lock);
        return;
    }

    FUNC_7(VAR_9->staging, &VAR_11);

    if (VAR_11.Format == VAR_1 || VAR_11.Format == VAR_2) {
        const uint8_t *VAR_16[2] = {
            VAR_12.pData,
            (uint8_t*)VAR_12.pData + VAR_12.RowPitch * VAR_11.Height
        };
        size_t VAR_17[2] = {
            VAR_12.RowPitch,
            VAR_12.RowPitch,
        };
        FUNC_1(VAR_8, VAR_16, VAR_17,
                         FUNC_9(VAR_11.Height, VAR_7->format.i_y_offset + VAR_7->format.i_visible_height),
                         &VAR_9->cache);
    } else {
        FUNC_11(VAR_6, "Unsupported D3D11VA conversion from 0x%08X to NV12", VAR_11.Format);
    }


    FUNC_6(VAR_10->context, VAR_9->staging_resource, 0);
    FUNC_13(&VAR_9->staging_lock);
}

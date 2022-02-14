
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_20__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_27__ {scalar_t__ i_chroma; scalar_t__ i_visible_height; scalar_t__ i_y_offset; } ;
struct TYPE_29__ {TYPE_1__ format; int * context; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_30__ {int context; int processorInput; int ** resource; scalar_t__ slice_index; } ;
typedef TYPE_3__ picture_sys_d3d11_t ;
struct TYPE_31__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_28__ {int videoProcessor; int d3dvidctx; scalar_t__ procEnumerator; } ;
struct TYPE_32__ {int staging_lock; int staging_resource; int cache; int staging; int * procOutResource; int processorOutput; TYPE_20__ d3d_proc; } ;
typedef TYPE_5__ filter_sys_t ;
typedef scalar_t__ UINT ;
struct TYPE_35__ {int RowPitch; int const* pData; } ;
struct TYPE_34__ {scalar_t__ Format; size_t const Height; } ;
struct TYPE_33__ {int pInputSurface; int Enable; } ;
typedef int ID3D11Resource ;
typedef scalar_t__ HRESULT ;
typedef TYPE_6__ D3D11_VIDEO_PROCESSOR_STREAM ;
typedef TYPE_7__ D3D11_TEXTURE2D_DESC ;
typedef TYPE_8__ D3D11_MAPPED_SUBRESOURCE ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const**,size_t const*,int ,int,int *) ;
 int FUNC_2 (TYPE_2__*,int const**,size_t const*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_2__*,int const**,size_t const*,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_20__*,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ,TYPE_8__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int ,int,TYPE_6__*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_4__*,char*,...) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(filter_t *VAR_9, picture_t *VAR_10, picture_t *VAR_11)
{
    if (VAR_10->context == ((void*)0))
    {

        FUNC_13(VAR_9, "missing source context");
        return;
    }

    filter_sys_t *VAR_12 = VAR_9->p_sys;
    picture_sys_d3d11_t *VAR_13 = FUNC_0(VAR_10);

    D3D11_TEXTURE2D_DESC VAR_14;
    D3D11_MAPPED_SUBRESOURCE VAR_15;

    FUNC_15(&VAR_12->staging_lock);
    if (FUNC_12(VAR_9, VAR_13) != VAR_8)
    {
        FUNC_16(&VAR_12->staging_lock);
        return;
    }

    UINT VAR_16 = VAR_13->slice_index;
    ID3D11Resource *VAR_17 = VAR_13->resource[VAR_4];
    FUNC_6(VAR_13->context, VAR_12->staging_resource,
                                              0, 0, 0, 0,
                                              VAR_17,
                                              VAR_16,
                                              ((void*)0));

    HRESULT VAR_18 = FUNC_7(VAR_13->context, VAR_12->staging_resource,
                                         0, VAR_0, 0, &VAR_15);
    if (FUNC_5(VAR_18)) {
        FUNC_13(VAR_9, "Failed to map source surface. (hr=0x%lX)", VAR_18);
        FUNC_16(&VAR_12->staging_lock);
        return;
    }

    if (VAR_11->format.i_chroma == VAR_6)
        FUNC_14( VAR_11 );

    FUNC_9(VAR_12->staging, &VAR_14);

    if (VAR_14.Format == VAR_3) {
        size_t VAR_19 = (VAR_15.RowPitch / 2);

        const size_t VAR_20[3] = {
            VAR_15.RowPitch,
            VAR_19,
            VAR_19,
        };

        const uint8_t *VAR_21[3] = {
            (uint8_t*)VAR_15.pData,
            (uint8_t*)VAR_15.pData + VAR_20[0] * VAR_14.Height,
            (uint8_t*)VAR_15.pData + VAR_20[0] * VAR_14.Height
                                 + VAR_20[1] * VAR_14.Height / 2,
        };

        FUNC_2(VAR_11, VAR_21, VAR_20,
                       VAR_10->format.i_visible_height + VAR_10->format.i_y_offset,
                       &VAR_12->cache);
    } else if (VAR_14.Format == VAR_1 ||
               VAR_14.Format == VAR_2) {
        const uint8_t *VAR_22[2] = {
            VAR_15.pData,
            (uint8_t*)VAR_15.pData + VAR_15.RowPitch * VAR_14.Height
        };
        const size_t VAR_23[2] = {
            VAR_15.RowPitch,
            VAR_15.RowPitch,
        };
        if (VAR_14.Format == VAR_1)
            FUNC_3(VAR_11, VAR_22, VAR_23,
                            FUNC_11(VAR_14.Height, VAR_10->format.i_y_offset + VAR_10->format.i_visible_height),
                            &VAR_12->cache);
        else
            FUNC_1(VAR_11, VAR_22, VAR_23,
                               FUNC_11(VAR_14.Height, VAR_10->format.i_y_offset + VAR_10->format.i_visible_height),
                               6, &VAR_12->cache);
        FUNC_14(VAR_11);
    } else {
        FUNC_13(VAR_9, "Unsupported D3D11VA conversion from 0x%08X to YV12", VAR_14.Format);
    }

    if (VAR_11->format.i_chroma == VAR_6 || VAR_11->format.i_chroma == VAR_7)
        FUNC_14( VAR_11 );


    FUNC_8(VAR_13->context, VAR_12->staging_resource, 0);
    FUNC_16(&VAR_12->staging_lock);
}

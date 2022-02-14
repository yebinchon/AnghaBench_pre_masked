
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int p_pixels; int i_pitch; int i_lines; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_21__ {TYPE_1__* p; int * context; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_22__ {int slice_index; int * resource; int context; } ;
typedef TYPE_3__ picture_sys_d3d11_t ;
struct TYPE_23__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_24__ {int staging_lock; int staging; int staging_resource; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_26__ {int pData; int RowPitch; } ;
struct TYPE_25__ {int Height; } ;
typedef int HRESULT ;
typedef TYPE_6__ D3D11_TEXTURE2D_DESC ;
typedef TYPE_7__ D3D11_MAPPED_SUBRESOURCE ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_7__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_6__*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,char*,int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(filter_t *VAR_3, picture_t *VAR_4, picture_t *VAR_5)
{
    filter_sys_t *VAR_6 = VAR_3->p_sys;
    FUNC_6(VAR_4->context != ((void*)0));
    picture_sys_d3d11_t *VAR_7 = FUNC_0(VAR_4);

    D3D11_TEXTURE2D_DESC VAR_8;
    D3D11_MAPPED_SUBRESOURCE VAR_9;

    FUNC_10(&VAR_6->staging_lock);
    if (FUNC_7(VAR_3, VAR_7) != VAR_2)
    {
        FUNC_11(&VAR_6->staging_lock);
        return;
    }

    FUNC_2(VAR_7->context, VAR_6->staging_resource,
                                              0, 0, 0, 0,
                                              VAR_7->resource[VAR_1],
                                              VAR_7->slice_index,
                                              ((void*)0));

    HRESULT VAR_10 = FUNC_3(VAR_7->context, VAR_6->staging_resource,
                                         0, VAR_0, 0, &VAR_9);
    if (FUNC_1(VAR_10)) {
        FUNC_8(VAR_3, "Failed to map source surface. (hr=0x%lX)", VAR_10);
        FUNC_11(&VAR_6->staging_lock);
        return;
    }

    FUNC_5(VAR_6->staging, &VAR_8);

    plane_t VAR_11 = VAR_5->p[0];
    VAR_11.i_lines = VAR_8.Height;
    VAR_11.i_pitch = VAR_9.RowPitch;
    VAR_11.p_pixels = VAR_9.pData;
    FUNC_9( VAR_5->p, &VAR_11 );


    FUNC_4(VAR_7->context,
                              VAR_7->resource[VAR_1], VAR_7->slice_index);
    FUNC_11(&VAR_6->staging_lock);
}

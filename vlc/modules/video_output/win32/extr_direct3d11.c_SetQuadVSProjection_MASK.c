
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_23__ {TYPE_6__* sys; } ;
typedef TYPE_5__ vout_display_t ;
struct TYPE_22__ {int d3dcontext; } ;
struct TYPE_19__ {float height; scalar_t__ width; } ;
struct TYPE_20__ {TYPE_1__ display; } ;
struct TYPE_21__ {TYPE_2__ vdcfg; } ;
struct TYPE_24__ {TYPE_4__ d3d_dev; TYPE_3__ area; } ;
typedef TYPE_6__ vout_display_sys_t ;
struct TYPE_25__ {float fov; } ;
typedef TYPE_7__ vlc_viewpoint_t ;
struct TYPE_26__ {scalar_t__ pVertexShaderConstants; } ;
typedef TYPE_8__ d3d_quad_t ;
struct TYPE_27__ {int View; int Projection; int Zoom; } ;
typedef TYPE_9__ VS_PROJECTION_CONST ;
struct TYPE_18__ {TYPE_9__* pData; } ;
typedef int ID3D11Resource ;
typedef int HRESULT ;
typedef TYPE_10__ D3D11_MAPPED_SUBRESOURCE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ,int ,TYPE_10__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 float VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 float FUNC_3 (float,float) ;
 float FUNC_4 (float,float) ;
 int FUNC_5 (float,float,int ) ;
 int FUNC_6 (float,int ) ;
 int FUNC_7 (TYPE_7__*,TYPE_7__ const*) ;
 int FUNC_8 (TYPE_7__*,int ) ;

__attribute__((used)) static void FUNC_9(vout_display_t *VAR_4, d3d_quad_t *VAR_5, const vlc_viewpoint_t *VAR_6)
{
    vout_display_sys_t *VAR_7 = VAR_4->sys;
    if (!VAR_5->pVertexShaderConstants)
        return;


    float VAR_8 = VAR_6->fov * (float)VAR_2 / 180.f;
    if ( VAR_8 > VAR_1 * VAR_2 / 180 + 0.001f ||
         VAR_8 < -0.001f )
        return;

    float VAR_9 = (float) VAR_7->area.vdcfg.display.width / VAR_7->area.vdcfg.display.height;
    float VAR_10 = FUNC_3(VAR_8, VAR_9);
    float VAR_11 = FUNC_4(VAR_8, VAR_10);

    HRESULT VAR_12;
    D3D11_MAPPED_SUBRESOURCE VAR_13;
    VAR_12 = FUNC_0(VAR_7->d3d_dev.d3dcontext, (ID3D11Resource *)VAR_5->pVertexShaderConstants, 0, VAR_0, 0, &VAR_13);
    if (FUNC_2(VAR_12)) {
        VS_PROJECTION_CONST *VAR_14 = VAR_13.pData;
        FUNC_6(VAR_3 * VAR_11, VAR_14->Zoom);
        FUNC_5(VAR_9, VAR_10, VAR_14->Projection);

        vlc_viewpoint_t VAR_15;
        FUNC_7(&VAR_15, VAR_6);
        FUNC_8(&VAR_15, VAR_14->View);
    }
    FUNC_1(VAR_7->d3d_dev.d3dcontext, (ID3D11Resource *)VAR_5->pVertexShaderConstants, 0);
}

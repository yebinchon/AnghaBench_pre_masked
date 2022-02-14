
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_58__ TYPE_9__ ;
typedef struct TYPE_57__ TYPE_8__ ;
typedef struct TYPE_56__ TYPE_7__ ;
typedef struct TYPE_55__ TYPE_6__ ;
typedef struct TYPE_54__ TYPE_5__ ;
typedef struct TYPE_53__ TYPE_4__ ;
typedef struct TYPE_52__ TYPE_3__ ;
typedef struct TYPE_51__ TYPE_37__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_27__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_18__ ;
typedef struct TYPE_46__ TYPE_16__ ;
typedef struct TYPE_45__ TYPE_15__ ;
typedef struct TYPE_44__ TYPE_14__ ;
typedef struct TYPE_43__ TYPE_13__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


struct TYPE_53__ {scalar_t__ projection_mode; } ;
struct TYPE_57__ {TYPE_4__ source; TYPE_9__* sys; } ;
typedef TYPE_8__ vout_display_t ;
struct TYPE_47__ {int d3dcontext; } ;
struct TYPE_54__ {int ** renderSrc; } ;
struct TYPE_42__ {scalar_t__ i_height; scalar_t__ i_width; TYPE_6__* textureFormat; TYPE_5__ picSys; } ;
struct TYPE_56__ {int ** renderSrc; int * resource; int * texture; } ;
struct TYPE_52__ {scalar_t__ luminance_peak; } ;
struct TYPE_48__ {scalar_t__ i_width; scalar_t__ i_height; } ;
struct TYPE_51__ {TYPE_1__ texture_source; } ;
struct TYPE_58__ {int d3dregion_count; TYPE_18__ d3d_dev; TYPE_12__ picQuad; scalar_t__ prepareWait; int flatVShader; TYPE_10__** d3dregions; int projectionVShader; TYPE_7__ stagingSys; scalar_t__ legacy_shader; TYPE_3__ display; int sys; TYPE_37__ area; TYPE_16__* stagingPlanes; } ;
typedef TYPE_9__ vout_display_sys_t ;
typedef int uint8_t ;
typedef int subpicture_t ;
struct TYPE_50__ {scalar_t__ max_luminance; } ;
struct TYPE_49__ {int i_chroma; TYPE_2__ mastering; } ;
struct TYPE_40__ {int i_planes; TYPE_27__ format; scalar_t__ p_sys; int * p; } ;
typedef TYPE_10__ picture_t ;
struct TYPE_41__ {int ** renderSrc; int * texture; int slice_index; int * resource; } ;
typedef TYPE_11__ picture_sys_d3d11_t ;
typedef TYPE_12__ d3d_quad_t ;
struct TYPE_55__ {scalar_t__ formatTexture; } ;
struct TYPE_46__ {int i_pitch; int i_lines; int * p_pixels; } ;
struct TYPE_45__ {int back; int right; int left; int bottom; int top; } ;
struct TYPE_44__ {int RowPitch; int * pData; } ;
struct TYPE_43__ {scalar_t__ Height; scalar_t__ Width; int BindFlags; } ;
typedef int ID3D11ShaderResourceView ;
typedef int ID3D11Asynchronous ;
typedef int HRESULT ;
typedef TYPE_13__ D3D11_TEXTURE2D_DESC ;
typedef TYPE_14__ D3D11_MAPPED_SUBRESOURCE ;
typedef TYPE_15__ D3D11_BOX ;


 TYPE_11__* FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (int ,TYPE_37__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_18__*,TYPE_12__*,int *,int **,int ,TYPE_9__*) ;
 int FUNC_3 (TYPE_8__*,TYPE_18__*,TYPE_12__*,float) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,TYPE_10__**) ;
 int FUNC_5 (TYPE_8__*,int*,TYPE_10__***,int *) ;
 int FUNC_6 (int ) ;
 float FUNC_7 (int ,TYPE_27__*) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ,int ,TYPE_15__*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *,int *,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,TYPE_14__*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,TYPE_13__*) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int,int ) ;
 int VAR_7 ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_18__*) ;
 int FUNC_20 (TYPE_18__*) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (TYPE_8__*,char*,char const*,int ) ;
 int FUNC_23 (TYPE_16__*,int *) ;
 scalar_t__ FUNC_24 (int ) ;

__attribute__((used)) static void FUNC_25(vout_display_t *VAR_8, picture_t *VAR_9, subpicture_t *VAR_10)
{
    vout_display_sys_t *VAR_11 = VAR_8->sys;

    if (VAR_11->picQuad.textureFormat->formatTexture == VAR_2)
    {
        D3D11_MAPPED_SUBRESOURCE VAR_12;
        int VAR_13;
        HRESULT VAR_14;

        bool VAR_15 = 1;
        for (VAR_13 = 0; VAR_13 < VAR_9->i_planes; VAR_13++) {
            VAR_14 = FUNC_11(VAR_11->d3d_dev.d3dcontext, VAR_11->stagingSys.resource[VAR_13],
                                         0, VAR_1, 0, &VAR_12);
            if( FUNC_24(FUNC_6(VAR_14)) )
            {
                while (VAR_13-- > 0)
                    FUNC_12(VAR_11->d3d_dev.d3dcontext, VAR_11->stagingSys.resource[VAR_13], 0);
                VAR_15 = 0;
                break;
            }
            VAR_11->stagingPlanes[VAR_13].i_pitch = VAR_12.RowPitch;
            VAR_11->stagingPlanes[VAR_13].p_pixels = VAR_12.pData;
        }

        if (VAR_15)
        {
            for (VAR_13 = 0; VAR_13 < VAR_9->i_planes; VAR_13++)
                FUNC_23(&VAR_11->stagingPlanes[VAR_13], &VAR_9->p[VAR_13]);

            for (VAR_13 = 0; VAR_13 < VAR_9->i_planes; VAR_13++)
                FUNC_12(VAR_11->d3d_dev.d3dcontext, VAR_11->stagingSys.resource[VAR_13], 0);
        }
    }
    else if (!FUNC_21(VAR_9->format.i_chroma))
    {
        D3D11_MAPPED_SUBRESOURCE VAR_16;
        HRESULT VAR_17;

        VAR_17 = FUNC_11(VAR_11->d3d_dev.d3dcontext, VAR_11->stagingSys.resource[0],
                                        0, VAR_1, 0, &VAR_16);
        if( FUNC_24(FUNC_6(VAR_17)) )
            FUNC_22(VAR_8, "Failed to map the %4.4s staging picture. (hr=0x%lX)", (const char*)&VAR_9->format.i_chroma, VAR_17);
        else
        {
            uint8_t *VAR_18 = VAR_16.pData;
            for (int VAR_19 = 0; VAR_19 < VAR_9->i_planes; VAR_19++)
            {
                VAR_11->stagingPlanes[VAR_19].i_pitch = VAR_16.RowPitch;
                VAR_11->stagingPlanes[VAR_19].p_pixels = VAR_18;

                FUNC_23(&VAR_11->stagingPlanes[VAR_19], &VAR_9->p[VAR_19]);

                VAR_18 += VAR_11->stagingPlanes[VAR_19].i_pitch * VAR_11->stagingPlanes[VAR_19].i_lines;
            }

            FUNC_12(VAR_11->d3d_dev.d3dcontext, VAR_11->stagingSys.resource[0], 0);
        }
    }
    else
    {
        picture_sys_d3d11_t *VAR_20 = FUNC_0(VAR_9);

        FUNC_19( &VAR_11->d3d_dev );

        if (VAR_11->legacy_shader) {
            D3D11_TEXTURE2D_DESC VAR_21,VAR_22;
            FUNC_13(VAR_20->texture[VAR_3], &VAR_21);
            FUNC_13(VAR_11->stagingSys.texture[0], &VAR_22);
            D3D11_BOX VAR_23 = {
                .top = 0,
                .bottom = FUNC_17(VAR_21.Height, VAR_22.Height),
                .left = 0,
                .right = FUNC_17(VAR_21.Width, VAR_22.Width),
                .back = 1,
            };
            FUNC_8(VAR_11->d3d_dev.d3dcontext,
                                                      VAR_11->stagingSys.resource[VAR_3],
                                                      0, 0, 0, 0,
                                                      VAR_20->resource[VAR_3],
                                                      VAR_20->slice_index, &VAR_23);
        }
        else
        {
            D3D11_TEXTURE2D_DESC VAR_24;
            FUNC_13(VAR_20->texture[0], &VAR_24);
            if (VAR_24.BindFlags & VAR_0)
            {


                FUNC_18(VAR_20->renderSrc[0]!=((void*)0));
            }
            if ( VAR_11->picQuad.i_height != VAR_24.Height ||
                 VAR_11->picQuad.i_width != VAR_24.Width )
            {


                VAR_11->area.texture_source.i_width = VAR_11->picQuad.i_height = VAR_24.Height;
                VAR_11->area.texture_source.i_height = VAR_11->picQuad.i_width = VAR_24.Width;

                FUNC_1(FUNC_16(VAR_8), &VAR_11->area, &VAR_11->sys);
                FUNC_15(VAR_8);
            }
        }
    }

    if (VAR_10) {
        int VAR_25 = 0;
        picture_t **VAR_26 = ((void*)0);
        FUNC_5(VAR_8, &VAR_25, &VAR_26, VAR_10);
        FUNC_4(VAR_11->d3dregion_count, VAR_11->d3dregions);
        VAR_11->d3dregion_count = VAR_25;
        VAR_11->d3dregions = VAR_26;
    }

    if (VAR_9->format.mastering.max_luminance)
    {
        FUNC_3(VAR_8, &VAR_11->d3d_dev, &VAR_11->picQuad, (float)VAR_11->display.luminance_peak / FUNC_7(FUNC_16(VAR_8), &VAR_9->format));
    }


    ID3D11ShaderResourceView **VAR_27;
    if (!FUNC_21(VAR_9->format.i_chroma) || VAR_11->legacy_shader)
        VAR_27 = VAR_11->stagingSys.renderSrc;
    else {
        picture_sys_d3d11_t *VAR_28 = FUNC_0(VAR_9);
        VAR_27 = VAR_28->renderSrc;
    }
    FUNC_2(&VAR_11->d3d_dev, &VAR_11->picQuad,
                     VAR_8->source.projection_mode == VAR_4 ? &VAR_11->flatVShader : &VAR_11->projectionVShader,
                     VAR_27, VAR_6, VAR_11);

    if (VAR_10) {

        for (int VAR_29 = 0; VAR_29 < VAR_11->d3dregion_count; ++VAR_29) {
            if (VAR_11->d3dregions[VAR_29])
            {
                d3d_quad_t *VAR_30 = (d3d_quad_t *) VAR_11->d3dregions[VAR_29]->p_sys;
                FUNC_2(&VAR_11->d3d_dev, VAR_30, &VAR_11->flatVShader,
                                 VAR_30->picSys.renderSrc, VAR_6, VAR_11);
            }
        }
    }

    if (VAR_11->prepareWait)
    {
        int VAR_31 = 10;
        FUNC_9(VAR_11->d3d_dev.d3dcontext, (ID3D11Asynchronous*)VAR_11->prepareWait);

        while (VAR_5 == FUNC_10(VAR_11->d3d_dev.d3dcontext,
                                                      (ID3D11Asynchronous*)VAR_11->prepareWait, ((void*)0), 0, 0)
               && --VAR_31)
            FUNC_14(2, VAR_7);
    }

    if (FUNC_21(VAR_9->format.i_chroma) && VAR_11->picQuad.textureFormat->formatTexture != VAR_2)
        FUNC_20( &VAR_11->d3d_dev );
}

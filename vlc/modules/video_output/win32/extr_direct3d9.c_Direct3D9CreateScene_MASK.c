
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_12__ {int TextureFilterCaps; int AlphaCmpCaps; } ;
struct TYPE_16__ {TYPE_1__ caps; int BufferFormat; int * dev; } ;
struct TYPE_14__ {int clear_scene; TYPE_5__ d3d_dev; int * d3dregion; scalar_t__ d3dregion_count; int * sceneTexture; int sceneVertexBuffer; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_15__ {int i_visible_width; int i_visible_height; int i_height; int i_width; } ;
typedef TYPE_4__ video_format_t ;
typedef TYPE_5__ d3d9_device_t ;
typedef int UINT ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;
typedef int CUSTOMVERTEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_41 ;
 int FUNC_2 (int *,int,int,int,int ,int ,int ,int **,int *) ;
 int FUNC_3 (int *,int,int,int ,int ,int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int VAR_42 ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_4__ const*) ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int FUNC_10 (TYPE_2__*,char*,...) ;
 int FUNC_11 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_12(vout_display_t *VAR_45, const video_format_t *VAR_46)
{
    vout_display_sys_t *VAR_47 = VAR_45->sys;
    const d3d9_device_t *VAR_48 = &VAR_47->d3d_dev;
    IDirect3DDevice9 *VAR_49 = VAR_48->dev;
    HRESULT VAR_50;

    if (FUNC_9(VAR_45, VAR_46) != VAR_44)
        return VAR_43;

    UINT VAR_51 = VAR_46->i_visible_width;
    UINT VAR_52 = VAR_46->i_visible_height;



    if (VAR_52 & 1) VAR_52++;
    if (VAR_51 & 1) VAR_51++;






    VAR_50 = FUNC_2(VAR_49,
                                        VAR_51,
                                        VAR_52,
                                        1,
                                        VAR_38,
                                        VAR_48->BufferFormat,
                                        VAR_6,
                                        &VAR_47->sceneTexture,
                                        ((void*)0));
    if (FUNC_1(VAR_50)) {
        FUNC_11(VAR_45, "Failed to create texture. (hr=0x%lX)", VAR_50);
        return VAR_43;
    }


    FUNC_10(VAR_45, "Direct3D created texture: %ix%i",
                VAR_46->i_width, VAR_46->i_height);





    VAR_50 = FUNC_3(VAR_49,
                                             sizeof(CUSTOMVERTEX)*4,
                                             VAR_37|VAR_39,
                                             VAR_4,
                                             VAR_6,
                                             &VAR_47->sceneVertexBuffer,
                                             ((void*)0));
    if (FUNC_1(VAR_50)) {
        FUNC_11(VAR_45, "Failed to create vertex buffer. (hr=0x%lX)", VAR_50);
        FUNC_8(VAR_47->sceneTexture);
        VAR_47->sceneTexture = ((void*)0);
        return VAR_43;
    }


    VAR_50 = FUNC_4(VAR_49, VAR_4);
    if (FUNC_1(VAR_50)) {
        FUNC_10(VAR_45, "Failed SetFVF: 0x%lX", VAR_50);
        return -1;
    }


    VAR_47->d3dregion_count = 0;
    VAR_47->d3dregion = ((void*)0);

    VAR_47->clear_scene = 1;



    FUNC_6(VAR_49, 0, VAR_21, VAR_25);
    FUNC_6(VAR_49, 0, VAR_22, VAR_25);


    if (VAR_47->d3d_dev.caps.TextureFilterCaps & VAR_8) {

        FUNC_6(VAR_49, 0, VAR_24, VAR_28);
    } else {

        FUNC_6(VAR_49, 0, VAR_24, VAR_29);
    }
    if (VAR_47->d3d_dev.caps.TextureFilterCaps & VAR_7) {

        FUNC_6(VAR_49, 0, VAR_23, VAR_28);
    } else {

        FUNC_6(VAR_49, 0, VAR_23, VAR_29);
    }


    FUNC_5(VAR_49, VAR_13, FUNC_0(255,255,255));


    FUNC_5(VAR_49, VAR_14, VAR_3);


    FUNC_5(VAR_49, VAR_20, VAR_40);


    FUNC_5(VAR_49, VAR_17, VAR_41);


    FUNC_5(VAR_49, VAR_16, VAR_42);


    FUNC_5(VAR_49, VAR_19, VAR_41);


    FUNC_5(VAR_49, VAR_9, VAR_41);
    FUNC_5(VAR_49, VAR_18,VAR_1);
    FUNC_5(VAR_49, VAR_15,VAR_0);

    if (VAR_47->d3d_dev.caps.AlphaCmpCaps & VAR_5) {
        FUNC_5(VAR_49, VAR_12,VAR_42);
        FUNC_5(VAR_49, VAR_11, 0x00);
        FUNC_5(VAR_49, VAR_10,VAR_2);
    }


    FUNC_7(VAR_49, 0, VAR_36,VAR_31);
    FUNC_7(VAR_49, 0, VAR_35,VAR_27);

    FUNC_7(VAR_49, 0, VAR_34, VAR_30);
    FUNC_7(VAR_49, 0, VAR_32,VAR_27);
    FUNC_7(VAR_49, 0, VAR_33,VAR_26);

    FUNC_10(VAR_45, "Direct3D9 scene created successfully");

    return VAR_44;
}

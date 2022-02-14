
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int d3d11_handle_t ;
struct TYPE_4__ {int d3ddevice; } ;
typedef TYPE_1__ d3d11_device_t ;
typedef int ID3DBlob ;
typedef int ID3D11PixelShader ;
typedef int HRESULT ;


 int * FUNC_0 (int *,int *,TYPE_1__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,void*,int ,int *,int **) ;
 int FUNC_5 (char**,int ,char*,char const*,char const*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (int *,char*,char const*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static HRESULT FUNC_10(vlc_object_t *VAR_3, d3d11_handle_t *VAR_4, bool VAR_5,
                                   d3d11_device_t *VAR_6,
                                   const char *VAR_7,
                                   const char *VAR_8,
                                   const char *VAR_9,
                                   const char *VAR_10,
                                   const char *VAR_11,
                                   const char *VAR_12, const char *VAR_13,
                                   ID3D11PixelShader **VAR_14)
{
    char *VAR_15;
    int VAR_16 = FUNC_5(&VAR_15, VAR_2, VAR_5 ? "" : "Array",
                             VAR_8, VAR_10,
                             VAR_9, VAR_11,
                             VAR_12, VAR_13, VAR_7);
    if (VAR_16 <= 0)
    {
        FUNC_8(VAR_3, "no room for the Pixel Shader");
        return VAR_1;
    }
    if (FUNC_9(VAR_3, "verbose") >= 4)
        FUNC_7(VAR_3, "shader %s", VAR_15);

    else {
    FUNC_7(VAR_3,"psz_src_to_linear %s", VAR_8);
    FUNC_7(VAR_3,"psz_primaries_transform %s", VAR_9);
    FUNC_7(VAR_3,"psz_tone_mapping %s", VAR_11);
    FUNC_7(VAR_3,"psz_linear_to_display %s", VAR_10);
    FUNC_7(VAR_3,"psz_adjust_range %s", VAR_12);
    FUNC_7(VAR_3,"psz_sampler %s", VAR_7);
    FUNC_7(VAR_3,"psz_move_planes %s", VAR_13);
    }


    ID3DBlob *VAR_17 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_15, 1);
    FUNC_6(VAR_15);
    if (!VAR_17)
        return VAR_0;

    HRESULT VAR_18 = FUNC_4(VAR_6->d3ddevice,
                                                (void *)FUNC_1(VAR_17),
                                                FUNC_2(VAR_17), ((void*)0), VAR_14);

    FUNC_3(VAR_17);
    return VAR_18;
}

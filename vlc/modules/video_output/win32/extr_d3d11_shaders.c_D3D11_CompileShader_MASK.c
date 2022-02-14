
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int d3d11_handle_t ;
struct TYPE_3__ {scalar_t__ feature_level; } ;
typedef TYPE_1__ d3d11_device_t ;
typedef int ID3DBlob ;
typedef int HRESULT ;


 int FUNC_0 (char const*,int ,int *,int *,int *,char*,char const*,int ,int ,int **,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,char*,char*,int ,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static ID3DBlob* FUNC_7(vlc_object_t *VAR_2, const d3d11_handle_t *VAR_3,
                                     const d3d11_device_t *VAR_4,
                                     const char *VAR_5, bool VAR_6)
{
    ID3DBlob* VAR_7 = ((void*)0), *VAR_8;
    const char *VAR_9;
    if (VAR_6)
    {
        if (FUNC_4(VAR_4->feature_level >= VAR_0))
            VAR_9 = "ps_4_0";
        else if (VAR_4->feature_level >= VAR_1)
            VAR_9 = "ps_4_0_level_9_3";
        else
            VAR_9 = "ps_4_0_level_9_1";
    }
    else
    {
        if (FUNC_4(VAR_4->feature_level >= VAR_0))
            VAR_9 = "vs_4_0";
        else if (VAR_4->feature_level >= VAR_1)
            VAR_9 = "vs_4_0_level_9_3";
        else
            VAR_9 = "vs_4_0_level_9_1";
    }

    HRESULT VAR_10 = FUNC_0(VAR_5, FUNC_6(VAR_5),
                            ((void*)0), ((void*)0), ((void*)0), "main", VAR_9,
                            0, 0, &VAR_7, &VAR_8);

    if (FUNC_1(VAR_10)) {
        char *VAR_11 = VAR_8 ? FUNC_2(VAR_8) : ((void*)0);
        FUNC_5(VAR_2, "invalid %s Shader (hr=0x%lX): %s", VAR_6?"Pixel":"Vertex", VAR_10, VAR_11 );
        if (VAR_8)
            FUNC_3(VAR_8);
        return ((void*)0);
    }
    return VAR_7;
}

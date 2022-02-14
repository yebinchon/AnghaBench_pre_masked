
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int Display ;


 int FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static bool FUNC_2 (vlc_object_t *VAR_0, Display *VAR_1)
{
    int VAR_2, VAR_3;
    bool VAR_4 = 0;

    if (!FUNC_0 (VAR_1, &VAR_2, &VAR_3))
        FUNC_1 (VAR_0, "GLX extension not available");
    else
    if (VAR_2 != 1)
        FUNC_1 (VAR_0, "GLX extension version %d.%d unknown", VAR_2, VAR_3);
    else
    if (VAR_3 < 3)
        FUNC_1 (VAR_0, "GLX extension version %d.%d too old", VAR_2, VAR_3);
    else
    {
        FUNC_1 (VAR_0, "using GLX extension version %d.%d", VAR_2, VAR_3);
        VAR_4 = 1;
    }
    return VAR_4;
}

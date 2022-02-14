
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int libs ;
typedef int jobject ;
struct TYPE_5__ {void* p_dl_handle; void* p_surface_handle; } ;
typedef TYPE_1__ NativeSurface ;
typedef int JNIEnv ;
typedef int ANativeWindow ;


 void* FUNC_0 (char const*,TYPE_1__*) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static ANativeWindow*
FUNC_4(JNIEnv *VAR_0, jobject VAR_1)
{
    void *VAR_2;
    NativeSurface *VAR_3;

    static const char *VAR_4[] = {
        "libsurfaceflinger_client.so",
        "libgui.so",
        "libui.so"
    };
    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (!VAR_2)
        return ((void*)0);
    VAR_3 = FUNC_3(sizeof(NativeSurface));
    if (!VAR_3)
        return ((void*)0);
    VAR_3->p_surface_handle = VAR_2;

    for (size_t VAR_5 = 0; VAR_5 < sizeof(VAR_4) / sizeof(*VAR_4); VAR_5++)
    {
        void *VAR_6 = FUNC_0(VAR_4[VAR_5], VAR_3);
        if (VAR_6)
        {
            VAR_3->p_dl_handle = VAR_6;
            return (ANativeWindow*)VAR_3;
        }
    }
    FUNC_2(VAR_3);
    return ((void*)0);
}

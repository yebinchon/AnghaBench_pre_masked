
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int (* vaapi_native_destroy_cb ) (int *) ;
struct vaapi_instance {int (* native_destroy_cb ) (int *) ;int * native; int dpy; } ;
typedef scalar_t__ VAStatus ;
typedef int * VANativeDisplay ;
typedef int VADisplay ;


 scalar_t__ VAR_0 ;
 struct vaapi_instance* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct vaapi_instance *
FUNC_6(vlc_object_t *VAR_1, VADisplay VAR_2,
                             VANativeDisplay VAR_3,
                             vaapi_native_destroy_cb VAR_4)
{
    int VAR_5 = 0, VAR_6 = 0;
    VAStatus VAR_7 = FUNC_4(VAR_2, &VAR_5, &VAR_6);
    if (VAR_7 != VAR_0)
    {
        FUNC_1(VAR_1, "vaInitialize: %s", FUNC_3(VAR_7));
        goto error;
    }
    struct vaapi_instance *VAR_8 = FUNC_0(sizeof(*VAR_8));

    if (FUNC_2(VAR_8 == ((void*)0)))
        goto error;
    VAR_8->dpy = VAR_2;
    VAR_8->native = VAR_3;
    VAR_8->native_destroy_cb = VAR_4;

    return VAR_8;
error:
    FUNC_5(VAR_2);
    if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0))
        VAR_4(VAR_3);
    return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vaapi_instance {int * native; int (* native_destroy_cb ) (int *) ;int dpy; } ;


 int FUNC_0 (struct vaapi_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct vaapi_instance *VAR_0)
{
    FUNC_2(VAR_0->dpy);
    if (VAR_0->native != ((void*)0) && VAR_0->native_destroy_cb != ((void*)0))
        VAR_0->native_destroy_cb(VAR_0->native);
    FUNC_0(VAR_0);
}

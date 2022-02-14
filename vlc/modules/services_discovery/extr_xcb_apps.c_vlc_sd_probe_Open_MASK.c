
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_connection_t ;
typedef int vlc_probe_t ;
typedef int vlc_object_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int * FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7 (vlc_object_t *VAR_2)
{
    vlc_probe_t *VAR_3 = (vlc_probe_t *)VAR_2;

    char *VAR_4 = FUNC_2 (VAR_2, "x11-display");
    xcb_connection_t *VAR_5 = FUNC_4 (VAR_4, ((void*)0));
    FUNC_1 (VAR_4);
    if (FUNC_5 (VAR_5))
        return VAR_1;
    FUNC_6 (VAR_5);
    return FUNC_3 (VAR_3, "xcb_apps",
                             FUNC_0("Screen capture"), VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_generic_event_t ;
typedef int xcb_connection_t ;
typedef int vout_display_t ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

int FUNC_4(vout_display_t *VAR_2, xcb_connection_t *VAR_3)
{
    xcb_generic_event_t *VAR_4;

    while ((VAR_4 = FUNC_3 (VAR_3)) != ((void*)0))
        FUNC_0(VAR_2, VAR_4);

    if (FUNC_2 (VAR_3))
    {
        FUNC_1 (VAR_2, "X server failure");
        return VAR_0;
    }

    return VAR_1;
}

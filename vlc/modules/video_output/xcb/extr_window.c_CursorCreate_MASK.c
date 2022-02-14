
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;
typedef void* xcb_pixmap_t ;
typedef void* xcb_cursor_t ;
typedef int xcb_connection_t ;


 int FUNC_0 (int *,void*,void*,void*,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (int *,int,void*,int ,int,int) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static xcb_cursor_t FUNC_3(xcb_connection_t *VAR_0, xcb_window_t VAR_1)
{
    xcb_cursor_t VAR_2 = FUNC_2(VAR_0);
    xcb_pixmap_t VAR_3 = FUNC_2(VAR_0);

    FUNC_1(VAR_0, 1, VAR_3, VAR_1, 1, 1);
    FUNC_0(VAR_0, VAR_2, VAR_3, VAR_3, 0, 0, 0, 0, 0, 0, 1, 1);
    return VAR_2;
}

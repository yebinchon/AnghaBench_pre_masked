
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xcb_void_cookie_t ;
struct TYPE_15__ {int error_code; } ;
typedef TYPE_4__ xcb_generic_error_t ;
typedef int xcb_connection_t ;
struct TYPE_16__ {TYPE_3__* cfg; TYPE_6__* sys; } ;
typedef TYPE_5__ vout_display_t ;
struct TYPE_12__ {int dest; int scale; } ;
struct TYPE_17__ {TYPE_1__ picture; int * conn; } ;
typedef TYPE_6__ vout_display_sys_t ;
typedef int picture_t ;
struct TYPE_13__ {int height; int width; } ;
struct TYPE_14__ {TYPE_2__ display; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,char*,char*,int ) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(vout_display_t *VAR_2, picture_t *VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_2->sys;
    xcb_connection_t *VAR_5 = VAR_4->conn;
    xcb_void_cookie_t VAR_6;

    FUNC_2(VAR_2, VAR_5);




    VAR_6 = FUNC_3(VAR_5, VAR_1,
                                      VAR_4->picture.scale,
                                      VAR_0,
                                      VAR_4->picture.dest, 0, 0, 0, 0, 0, 0,
                                      VAR_2->cfg->display.width,
                                      VAR_2->cfg->display.height);

    xcb_generic_error_t *VAR_7 = FUNC_4(VAR_5, VAR_6);
    if (VAR_7 != ((void*)0)) {
        FUNC_1(VAR_2, "%s: RENDER error %d", "cannot composite",
                VAR_7->error_code);
        FUNC_0(VAR_7);
    }
    (void) VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_8__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vout_display_t ;
struct TYPE_7__ {int crop; int scale; } ;
struct TYPE_6__ {int crop; int scale; } ;
struct TYPE_9__ {TYPE_2__ drawable; TYPE_1__ picture; int * conn; } ;
typedef TYPE_4__ vout_display_sys_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    xcb_connection_t *VAR_2 = VAR_1->conn;

    FUNC_1(VAR_2, VAR_1->picture.scale);
    FUNC_1(VAR_2, VAR_1->picture.crop);
    FUNC_0(VAR_2, VAR_1->drawable.scale);
    FUNC_0(VAR_2, VAR_1->drawable.crop);
}

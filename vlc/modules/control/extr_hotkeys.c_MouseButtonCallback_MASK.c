
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_9__ {int i_int; } ;
typedef TYPE_2__ vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ intf_thread_t ;
struct TYPE_8__ {int btn_pressed; int y; int x; } ;
struct TYPE_11__ {TYPE_1__ vrnav; } ;
typedef TYPE_4__ intf_sys_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_8(vlc_object_t *VAR_6, char const *VAR_7,
                    vlc_value_t VAR_8, vlc_value_t VAR_9, void *VAR_10)
{
    FUNC_1(VAR_7);

    intf_thread_t *VAR_11 = VAR_10;
    intf_sys_t *VAR_12 = VAR_11->p_sys;
    vout_thread_t *VAR_13 = (vout_thread_t *)VAR_6;

    if ((VAR_9.i_int & (1 << VAR_1)) &&
        FUNC_2(VAR_13, "viewpoint-changeable"))
    {
        if (!VAR_12->vrnav.btn_pressed)
        {
            VAR_12->vrnav.btn_pressed = 1;
            FUNC_3(VAR_13, "mouse-moved", &VAR_12->vrnav.x, &VAR_12->vrnav.y);
        }
    }
    else
        VAR_12->vrnav.btn_pressed = 0;

    unsigned VAR_14 = VAR_9.i_int & ~VAR_8.i_int;
    if (VAR_14 & (1 << VAR_1))
        FUNC_4(FUNC_7(VAR_11), "intf-popupmenu", 0);
    if (VAR_14 & (1 << VAR_0))
        FUNC_6(FUNC_7(VAR_11), "intf-toggle-fscontrol");

    if (VAR_14 & (1 << VAR_2))




        FUNC_4(FUNC_7(VAR_11), "intf-popupmenu", 1);
    for (int VAR_15 = VAR_4; VAR_15 <= VAR_3; VAR_15++)
        if (VAR_14 & (1 << VAR_15))
        {
            int VAR_16 = FUNC_0(VAR_15);
            FUNC_5(FUNC_7(VAR_11), "key-pressed", VAR_16);
        }

    return VAR_5;
}

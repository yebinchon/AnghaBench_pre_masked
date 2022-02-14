
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_5__ {int hwnd; } ;
typedef TYPE_2__ vout_window_sys_t ;
typedef enum vout_window_state { ____Placeholder_vout_window_state } vout_window_state ;
typedef int HMENU ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int) ;



 int VAR_11 ;

__attribute__((used)) static void FUNC_4( vout_window_t *VAR_12, enum vout_window_state VAR_13 )
{
    vout_window_sys_t *VAR_14 = VAR_12->sys;
    switch (VAR_13) {
    case 128:
        if ((FUNC_2(VAR_14->hwnd, VAR_1) & VAR_11))
        {
            HMENU VAR_15 = FUNC_1(VAR_14->hwnd, VAR_0);
            FUNC_0(VAR_15, VAR_5, VAR_8 | VAR_7);
            FUNC_3(VAR_14->hwnd, VAR_3, 0, 0, 0, 0, VAR_10|VAR_9);
        }
        break;
    case 130:
        if (!(FUNC_2(VAR_14->hwnd, VAR_1) & VAR_11))
        {
            HMENU VAR_16 = FUNC_1(VAR_14->hwnd, VAR_0);
            FUNC_0(VAR_16, VAR_5, VAR_8 | VAR_6);
            FUNC_3(VAR_14->hwnd, VAR_4, 0, 0, 0, 0, VAR_10 | VAR_9);
        }
        break;
    case 129:
        FUNC_3(VAR_14->hwnd, VAR_2, 0, 0, 0, 0, VAR_10 | VAR_9);
        break;

    }
}

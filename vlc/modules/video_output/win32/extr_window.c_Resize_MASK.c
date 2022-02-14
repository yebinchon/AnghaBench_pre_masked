
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_9__ {int hwnd; } ;
typedef TYPE_2__ vout_window_sys_t ;
struct TYPE_10__ {unsigned int right; unsigned int bottom; } ;
typedef TYPE_3__ RECT ;
typedef int LONG ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__) ;
 int FUNC_3 (TYPE_3__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(vout_window_t *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
    vout_window_sys_t *VAR_6 = VAR_3->sys;





    RECT VAR_7 = {
        .right = VAR_4,
        .bottom = VAR_5,
    };
    LONG VAR_8 = FUNC_1(VAR_6->hwnd, VAR_0);
    FUNC_0( &VAR_7, VAR_8, 0 );
    FUNC_4(VAR_6->hwnd, 0, 0, 0,
                 FUNC_3(VAR_7), FUNC_2(VAR_7),
                 VAR_2|VAR_1);
}

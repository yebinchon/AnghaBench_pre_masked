
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_7__ {int color; int yellow_b; int yellow_g; int yellow_r; } ;
typedef TYPE_2__ intf_sys_t ;
struct TYPE_8__ {int b; int f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *,int *,int *) ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(intf_thread_t *VAR_4)
{
    intf_sys_t *VAR_5 = VAR_4->p_sys;

    if (!FUNC_2()) {
        VAR_5->color = 0;
        FUNC_5(VAR_4, "Terminal doesn't support colors");
        return;
    }

    FUNC_6();
    for (int VAR_6 = VAR_1 + 1; VAR_6 < VAR_2; VAR_6++)
        FUNC_4(VAR_6, VAR_3[VAR_6].f, VAR_3[VAR_6].b);


    if (FUNC_0()) {
        FUNC_1(VAR_0, &VAR_5->yellow_r, &VAR_5->yellow_g, &VAR_5->yellow_b);
        FUNC_3(VAR_0, 960, 500, 0);
    }
}

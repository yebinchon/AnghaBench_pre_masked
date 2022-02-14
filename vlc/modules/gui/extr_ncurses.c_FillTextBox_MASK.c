
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ box_type; int search_chain; int open_chain; } ;
typedef TYPE_1__ intf_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(intf_sys_t *VAR_2)
{
    int VAR_3 = VAR_1 - 2;

    FUNC_0(7, 1, VAR_3);
    if (VAR_2->box_type == VAR_0)
        FUNC_2(7, 1, VAR_3, FUNC_1("Open: %s"), VAR_2->open_chain);
    else
        FUNC_2(7, 1, VAR_3, FUNC_1("Find: %s"), VAR_2->search_chain);
}

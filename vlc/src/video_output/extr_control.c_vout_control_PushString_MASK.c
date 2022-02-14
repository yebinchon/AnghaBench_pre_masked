
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_control_t ;
struct TYPE_4__ {int * string; } ;
typedef TYPE_1__ vout_control_cmd_t ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(vout_control_t *VAR_0, int VAR_1, const char *VAR_2)
{
    vout_control_cmd_t VAR_3;

    FUNC_2(&VAR_3, VAR_1);
    VAR_3.string = VAR_2 ? FUNC_0(VAR_2) : ((void*)0);
    FUNC_1(VAR_0, &VAR_3);
}

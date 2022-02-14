
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_dialog_id; int p_obj; } ;
typedef TYPE_1__ scan_t ;


 int FUNC_0 (int ,int *) ;

bool FUNC_1( scan_t *VAR_0 )
{
    if( VAR_0->p_dialog_id == ((void*)0) )
        return 0;
    return FUNC_0( VAR_0->p_obj, VAR_0->p_dialog_id );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cmd; } ;
typedef TYPE_1__ access_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( access_sys_t *VAR_0 )
{
    if( VAR_0->cmd != ((void*)0) )
    {
        FUNC_0( VAR_0->cmd );
        VAR_0->cmd = ((void*)0);
    }
}

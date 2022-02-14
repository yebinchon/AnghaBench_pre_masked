
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int extensions_manager_t ;
struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_5__ {int * L; int dtable; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( extensions_manager_t *VAR_1,
                             extension_t *VAR_2 )
{
    int VAR_3 = FUNC_0( VAR_1, VAR_2, "trigger", VAR_0 );


    if( VAR_2->p_sys->L )
    {
        FUNC_2( &VAR_2->p_sys->dtable );
        FUNC_1( VAR_2->p_sys->L );
    }
    VAR_2->p_sys->L = ((void*)0);

    return VAR_3;
}

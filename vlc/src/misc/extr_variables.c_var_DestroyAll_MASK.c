
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * var_root; } ;
typedef TYPE_1__ vlc_object_internals_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *) ;

void FUNC_2( vlc_object_t *VAR_1 )
{
    vlc_object_internals_t *VAR_2 = FUNC_1( VAR_1 );

    FUNC_0( VAR_2->var_root, VAR_0 );
    VAR_2->var_root = ((void*)0);
}

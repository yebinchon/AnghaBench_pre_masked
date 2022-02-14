
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int var_lock; } ;
typedef TYPE_1__ vlc_object_internals_t ;
struct TYPE_8__ {int val; } ;
typedef TYPE_2__ variable_t ;


 TYPE_2__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,TYPE_2__*,char const*,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void (FUNC_5)(vlc_object_t *VAR_0, const char *VAR_1)
{
    vlc_object_internals_t *VAR_2 = FUNC_3( VAR_0 );
    variable_t *VAR_3 = FUNC_0( VAR_0, VAR_1 );
    if( VAR_3 != ((void*)0) )
    {
        FUNC_2( VAR_0, VAR_3 );



        FUNC_1( VAR_0, VAR_3, VAR_1, VAR_3->val );
    }
    FUNC_4( &VAR_2->var_lock );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int var_lock; } ;
typedef TYPE_1__ vlc_object_internals_t ;
struct TYPE_6__ {int i_type; scalar_t__ choices_count; } ;
typedef TYPE_2__ variable_t ;


 TYPE_2__* FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int (FUNC_4)(vlc_object_t *VAR_1, const char *VAR_2)
{
    variable_t *VAR_3;
    int VAR_4 = 0;

    FUNC_1( VAR_1 );

    vlc_object_internals_t *VAR_5 = FUNC_2( VAR_1 );

    VAR_3 = FUNC_0( VAR_1, VAR_2 );
    if( VAR_3 != ((void*)0) )
    {
        VAR_4 = VAR_3->i_type;
        if (VAR_3->choices_count > 0)
            VAR_4 |= VAR_0;
    }
    FUNC_3( &VAR_5->var_lock );

    return VAR_4;
}

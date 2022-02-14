
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_7__ {int var_lock; } ;
typedef TYPE_2__ vlc_object_internals_t ;
struct TYPE_8__ {int i_type; TYPE_1__* ops; int val; } ;
typedef TYPE_3__ variable_t ;
struct TYPE_6__ {int (* pf_dup ) (int *) ;} ;


 TYPE_3__* FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int (FUNC_5)(vlc_object_t *VAR_4, const char *VAR_5,
                     int VAR_6, vlc_value_t *VAR_7)
{
    FUNC_1( *VAR_4 );

    vlc_object_internals_t *VAR_8 = FUNC_3( VAR_4 );
    variable_t *VAR_9;
    int VAR_10 = VAR_1;

    VAR_9 = FUNC_0( VAR_4, VAR_5 );
    if( VAR_9 != ((void*)0) )
    {
        FUNC_1( VAR_6 == 0 ||
                (VAR_9->i_type & VAR_2) == VAR_6 );
        FUNC_1 ((VAR_9->i_type & VAR_2) != VAR_3);


        *VAR_7 = VAR_9->val;


        VAR_9->ops->pf_dup( VAR_7 );
    }
    else
        VAR_10 = VAR_0;

    FUNC_4( &VAR_8->var_lock );
    return VAR_10;
}

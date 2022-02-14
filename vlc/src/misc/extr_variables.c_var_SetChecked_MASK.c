
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_10__ {int var_lock; } ;
typedef TYPE_2__ vlc_object_internals_t ;
struct TYPE_11__ {int i_type; TYPE_1__* ops; int val; } ;
typedef TYPE_3__ variable_t ;
struct TYPE_9__ {int (* pf_free ) (int *) ;int (* pf_dup ) (int *) ;} ;


 int FUNC_0 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,TYPE_3__*,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int (FUNC_9)(vlc_object_t *VAR_4, const char *VAR_5,
                     int VAR_6, vlc_value_t VAR_7)
{
    variable_t *VAR_8;
    vlc_value_t VAR_9;

    FUNC_4( *VAR_4 );

    vlc_object_internals_t *VAR_10 = FUNC_7( VAR_4 );

    VAR_8 = FUNC_1( VAR_4, VAR_5 );
    if( VAR_8 == ((void*)0) )
    {
        FUNC_8( &VAR_10->var_lock );
        return VAR_0;
    }

    FUNC_4( VAR_6 == 0 ||
            (VAR_8->i_type & VAR_2) == VAR_6 );
    FUNC_4 ((VAR_8->i_type & VAR_2) != VAR_3);

    FUNC_3( VAR_4, VAR_8 );


    VAR_8->ops->pf_dup( &VAR_7 );


    VAR_9 = VAR_8->val;


    FUNC_0( VAR_8, &VAR_7 );


    VAR_8->val = VAR_7;


    FUNC_2( VAR_4, VAR_8, VAR_5, VAR_9 );


    VAR_8->ops->pf_free( &VAR_9 );

    FUNC_8( &VAR_10->var_lock );
    return VAR_1;
}

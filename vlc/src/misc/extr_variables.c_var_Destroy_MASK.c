
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int var_lock; int var_root; } ;
typedef TYPE_1__ vlc_object_internals_t ;
struct TYPE_8__ {scalar_t__ i_usage; int b_incallback; } ;
typedef TYPE_2__ variable_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void (FUNC_7)(vlc_object_t *VAR_1, const char *VAR_2)
{
    variable_t *VAR_3;

    FUNC_2( *VAR_1 );

    vlc_object_internals_t *VAR_4 = FUNC_5( VAR_1 );

    VAR_3 = FUNC_1( VAR_1, VAR_2 );
    if( VAR_3 == ((void*)0) )
        FUNC_3( VAR_1, "attempt to destroy nonexistent variable \"%s\"",
                 VAR_2 );
    else if( --VAR_3->i_usage == 0 )
    {
        FUNC_2(!VAR_3->b_incallback);
        FUNC_4( VAR_3, &VAR_4->var_root, VAR_0 );
    }
    else
    {
        FUNC_2(VAR_3->i_usage != -1u);
        VAR_3 = ((void*)0);
    }
    FUNC_6( &VAR_4->var_lock );

    if( VAR_3 != ((void*)0) )
        FUNC_0( VAR_3 );
}

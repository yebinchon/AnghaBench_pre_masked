
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int subpicture_updater_t ;
struct TYPE_7__ {int * p_private; int updater; } ;
typedef TYPE_1__ subpicture_t ;
typedef int subpicture_private_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static subpicture_t *FUNC_2( subpicture_t *VAR_0, subpicture_updater_t *VAR_1 )
{
    subpicture_t *VAR_2;
    subpicture_updater_t VAR_3;
    subpicture_private_t *VAR_4;

    VAR_2 = FUNC_1( VAR_1 );

    if( !VAR_2 )
    {
        return ((void*)0);
    }


    VAR_3 = VAR_2->updater;
    VAR_4 = VAR_2->p_private;


    FUNC_0( VAR_2, VAR_0, sizeof( subpicture_t ) );


    VAR_2->updater = VAR_3;
    VAR_2->p_private = VAR_4;

    return VAR_2;
}

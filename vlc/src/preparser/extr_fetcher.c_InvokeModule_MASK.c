
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_8__ {int e_scope; int * p_item; } ;
typedef TYPE_1__ meta_fetcher_t ;
typedef int input_item_t ;
struct TYPE_9__ {int owner; } ;
typedef TYPE_2__ input_fetcher_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,char const*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int ,int,char const*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5( input_fetcher_t* VAR_2, input_item_t* VAR_3,
                         int VAR_4, char const* VAR_5 )
{
    meta_fetcher_t* VAR_6 = FUNC_3( VAR_2->owner,
                                            sizeof( *VAR_6 ), VAR_5 );
    if( FUNC_2( !VAR_6 ) )
        return VAR_0;

    VAR_6->e_scope = VAR_4;
    VAR_6->p_item = VAR_3;

    module_t* VAR_7 = FUNC_0( VAR_6, VAR_5, ((void*)0), 0 );

    if( VAR_7 )
        FUNC_1( VAR_6, VAR_7 );

    FUNC_4(VAR_6);

    return VAR_1;
}

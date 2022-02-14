
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_type; int i_priority; int b_forced; int psz_uri; } ;
typedef TYPE_1__ input_item_slave_t ;
typedef enum slave_type { ____Placeholder_slave_type } slave_type ;
typedef enum slave_priority { ____Placeholder_slave_priority } slave_priority ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

input_item_slave_t *FUNC_3(const char *VAR_0, enum slave_type VAR_1,
                                       enum slave_priority VAR_2)
{
    if( !VAR_0 )
        return ((void*)0);

    input_item_slave_t *VAR_3 = FUNC_0( sizeof( *VAR_3 ) + FUNC_2( VAR_0 ) + 1 );
    if( !VAR_3 )
        return ((void*)0);

    VAR_3->i_type = VAR_1;
    VAR_3->i_priority = VAR_2;
    VAR_3->b_forced = 0;
    FUNC_1( VAR_3->psz_uri, VAR_0 );

    return VAR_3;
}

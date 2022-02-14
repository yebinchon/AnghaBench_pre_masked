
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int psz_uri; } ;
typedef TYPE_1__ input_item_slave_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2( const void *VAR_0, const void *VAR_1 )
{
    const input_item_slave_t *VAR_2 = *((const input_item_slave_t **) VAR_0);
    const input_item_slave_t *VAR_3 = *((const input_item_slave_t **) VAR_1);

    if( VAR_2 == ((void*)0) || VAR_3 == ((void*)0) )
        return 0;





    return FUNC_0( VAR_2->psz_uri, VAR_3->psz_uri );

}

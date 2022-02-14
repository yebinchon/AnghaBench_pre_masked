
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_preparse_depth; int lock; } ;
typedef TYPE_1__ input_item_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2( input_item_t *VAR_0 )
{
    bool VAR_1;

    FUNC_0( &VAR_0->lock );
    VAR_1 = VAR_0->i_preparse_depth == -1 ? 1 : VAR_0->i_preparse_depth > 0;
    FUNC_1( &VAR_0->lock );

    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int pp_slaves; int i_slaves; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_7__ {scalar_t__ i_priority; } ;
typedef TYPE_2__ input_item_slave_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(input_item_t *VAR_3, input_item_slave_t *VAR_4)
{
    if( VAR_3 == ((void*)0) || VAR_4 == ((void*)0)
     || VAR_4->i_priority < VAR_0 )
        return VAR_1;

    FUNC_1( &VAR_3->lock );

    FUNC_0(VAR_3->i_slaves, VAR_3->pp_slaves, VAR_4);

    FUNC_2( &VAR_3->lock );
    return VAR_2;
}

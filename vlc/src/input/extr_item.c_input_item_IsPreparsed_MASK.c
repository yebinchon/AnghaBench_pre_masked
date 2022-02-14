
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; scalar_t__ p_meta; } ;
typedef TYPE_1__ input_item_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3( input_item_t *VAR_1 )
{
    FUNC_1( &VAR_1->lock );
    bool VAR_2 = VAR_1->p_meta ? ( FUNC_0(VAR_1->p_meta) & VAR_0 ) != 0 : 0;
    FUNC_2( &VAR_1->lock );

    return VAR_2;
}

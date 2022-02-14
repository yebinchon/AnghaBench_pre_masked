
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; scalar_t__ p_meta; } ;
typedef TYPE_1__ input_item_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( input_item_t *VAR_1, bool VAR_2 )
{
    FUNC_3( &VAR_1->lock );

    if( !VAR_1->p_meta )
        VAR_1->p_meta = FUNC_1();

    int VAR_3 = FUNC_0(VAR_1->p_meta);

    if( VAR_2 )
        VAR_3 |= VAR_0;
    else
        VAR_3 &= ~VAR_0;

    FUNC_2(VAR_1->p_meta, VAR_3);

    FUNC_4( &VAR_1->lock );
}

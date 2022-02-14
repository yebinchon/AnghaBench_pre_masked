
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int overlay_t ;
struct TYPE_3__ {int * pp_head; int * pp_tail; } ;
typedef TYPE_1__ list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int) ;

int FUNC_1( list_t *VAR_2 )
{
    VAR_2->pp_head = FUNC_0( 16, sizeof( overlay_t * ) );
    if( VAR_2->pp_head == ((void*)0) )
        return VAR_0;

    VAR_2->pp_tail = VAR_2->pp_head + 16;
    return VAR_1;
}

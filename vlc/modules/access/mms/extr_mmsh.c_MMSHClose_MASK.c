
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int url; int proxy; scalar_t__ b_proxy; struct TYPE_7__* p_header; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void FUNC_3 ( stream_t *VAR_0 )
{
    access_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_0( VAR_0 );

    FUNC_1( VAR_1->p_header );

    if( VAR_1->b_proxy )
        FUNC_2( &VAR_1->proxy );
    FUNC_2( &VAR_1->url );
    FUNC_1( VAR_1 );
}

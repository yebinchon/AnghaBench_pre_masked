
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int fifo; } ;
typedef TYPE_2__ filter_sys_t ;
typedef int block_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void *FUNC_6( void *VAR_0 )
{
    filter_t *VAR_1 = VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    for (;;)
    {
        block_t *VAR_3 = FUNC_1( VAR_2->fifo );

        int VAR_4 = FUNC_5( );
        FUNC_2( FUNC_0( VAR_1, VAR_3 ) );
        FUNC_4( VAR_4 );
    }
    FUNC_3();
}

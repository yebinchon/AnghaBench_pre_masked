
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_9__ {int b_slice; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_10__ {int i_flags; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static block_t * FUNC_2( void *VAR_1 )
{
    decoder_t *VAR_2 = VAR_1;
    decoder_sys_t *VAR_3 = VAR_2->p_sys;

    if( !VAR_3->b_slice )
        return ((void*)0);

    block_t *VAR_4 = FUNC_0( VAR_2 );
    if( VAR_4 && (VAR_4->i_flags & VAR_0) )
    {
        FUNC_1( VAR_4 );
        VAR_4 = ((void*)0);
    }

    return VAR_4;
}

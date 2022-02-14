
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_6__ {scalar_t__ p_chain; } ;
struct TYPE_8__ {scalar_t__ sets; scalar_t__ b_recovery_point; TYPE_1__ frame; } ;
typedef TYPE_3__ decoder_sys_t ;
typedef int block_t ;


 int * FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static block_t * FUNC_3(void *VAR_1)
{
    decoder_t *VAR_2 = VAR_1;
    decoder_sys_t *VAR_3 = VAR_2->p_sys;

    block_t *VAR_4 = ((void*)0);

    if( VAR_3->frame.p_chain &&
        VAR_3->sets != VAR_0 &&
        VAR_3->b_recovery_point )
    {
        VAR_4 = FUNC_1(VAR_3, 1);
        if( VAR_4 )
        {
            VAR_4 = FUNC_0(VAR_4);
            if( VAR_4 )
                FUNC_2( VAR_2, VAR_4 );
        }
    }
    return VAR_4;
}

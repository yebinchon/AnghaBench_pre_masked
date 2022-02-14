
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int b_mlp; int b_discontinuity; int end_date; int bytestream; int i_state; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;

    VAR_3->b_mlp = 0;
    VAR_3->i_state = VAR_0;
    VAR_3->b_discontinuity = 1;
    FUNC_0( &VAR_3->bytestream );
    FUNC_1( &VAR_3->end_date, VAR_1 );
}

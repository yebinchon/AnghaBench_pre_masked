
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int b_recovery_point; int b_need_ts; int dts; int sets; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, bool VAR_3)
{
    decoder_t *VAR_4 = VAR_2;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;

    block_t *VAR_6 = FUNC_0(VAR_5, 0);
    if(VAR_6)
        FUNC_1(VAR_6);

    if(VAR_3)
    {
        VAR_5->sets = VAR_0;
        VAR_5->b_recovery_point = 0;
    }
    VAR_5->b_need_ts = 1;
    FUNC_2(&VAR_5->dts, VAR_1);
}

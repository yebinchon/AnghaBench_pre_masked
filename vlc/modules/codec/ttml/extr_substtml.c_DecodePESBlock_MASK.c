
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int pes; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_1( decoder_t *VAR_1, block_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    return FUNC_0( VAR_1, &VAR_3->pes, VAR_0, VAR_2 );
}

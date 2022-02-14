
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int p_ccs; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int decoder_cc_desc_t ;
typedef int block_t ;


 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static block_t *FUNC_1( decoder_t *VAR_0, decoder_cc_desc_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    return FUNC_0( VAR_2->p_ccs, VAR_1 );
}

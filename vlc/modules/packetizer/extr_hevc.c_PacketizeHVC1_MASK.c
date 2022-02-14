
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int i_nal_length_size; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;


 int * FUNC_0 (TYPE_1__*,int ,int **,int ) ;
 int VAR_0 ;

__attribute__((used)) static block_t *FUNC_1(decoder_t *VAR_1, block_t **VAR_2)
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;

    return FUNC_0( VAR_1, VAR_3->i_nal_length_size,
                          VAR_2, VAR_0 );
}

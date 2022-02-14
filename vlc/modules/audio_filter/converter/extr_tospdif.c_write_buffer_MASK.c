
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_12__ {TYPE_1__* p_out_buf; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_13__ {scalar_t__ i_length; int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_10__ {int i_length; } ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2( filter_t *VAR_0, block_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    FUNC_1( VAR_0, VAR_1->p_buffer, VAR_1->i_buffer,
                FUNC_0( VAR_0, VAR_1 ) );
    VAR_2->p_out_buf->i_length += VAR_1->i_length;
}

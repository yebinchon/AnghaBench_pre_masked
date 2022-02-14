
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int audio; } ;
struct TYPE_9__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_10__ {int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (TYPE_2__*,float*,float*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static block_t * FUNC_2( filter_t * VAR_0, block_t * VAR_1 )
{
    FUNC_0( VAR_0, (float*)VAR_1->p_buffer,
               (float*)VAR_1->p_buffer, VAR_1->i_nb_samples,
               FUNC_1( &VAR_0->fmt_in.audio ) );
    return VAR_1;
}

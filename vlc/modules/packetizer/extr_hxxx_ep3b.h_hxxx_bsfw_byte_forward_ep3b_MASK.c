
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hxxx_bsfw_ep3b_ctx_s {int i_bytepos; int i_prev; int i_bytesize; } ;
struct TYPE_3__ {int * p_end; int * p; int * p_start; scalar_t__ p_priv; } ;
typedef TYPE_1__ bs_t ;


 int * FUNC_0 (int *,int *,int *,size_t) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static size_t FUNC_2( bs_t *VAR_0, size_t VAR_1 )
{
    struct hxxx_bsfw_ep3b_ctx_s *VAR_2 = (struct hxxx_bsfw_ep3b_ctx_s *) VAR_0->p_priv;
    if( VAR_0->p == ((void*)0) )
    {
        VAR_2->i_bytesize = FUNC_1( VAR_0->p_start, VAR_0->p_end );
        VAR_0->p = VAR_0->p_start;
        VAR_2->i_bytepos = 1;
        return 1;
    }

    if( VAR_0->p >= VAR_0->p_end )
        return 0;

    VAR_0->p = FUNC_0( VAR_0->p, VAR_0->p_end, &VAR_2->i_prev, VAR_1 );
    VAR_2->i_bytepos += VAR_1;
    return VAR_1;
}

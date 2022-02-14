
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hxxx_bsfw_ep3b_ctx_s {scalar_t__ i_bytesize; scalar_t__ i_bytepos; } ;
struct TYPE_3__ {scalar_t__ p_start; scalar_t__ p_end; scalar_t__ p_priv; } ;
typedef TYPE_1__ bs_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static size_t FUNC_1( const bs_t *VAR_0 )
{
    struct hxxx_bsfw_ep3b_ctx_s *VAR_1 = (struct hxxx_bsfw_ep3b_ctx_s *) VAR_0->p_priv;
    if( VAR_1->i_bytesize == 0 && VAR_0->p_start != VAR_0->p_end )
        VAR_1->i_bytesize = FUNC_0( VAR_0->p_start, VAR_0->p_end );
    return (VAR_1->i_bytesize > VAR_1->i_bytepos) ? VAR_1->i_bytesize - VAR_1->i_bytepos : 0;
}

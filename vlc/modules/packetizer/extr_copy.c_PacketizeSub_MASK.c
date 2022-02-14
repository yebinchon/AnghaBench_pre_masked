
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_5__ {int i_flags; scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static block_t *FUNC_2( decoder_t *VAR_2, block_t **VAR_3 )
{
    block_t *VAR_4;

    if( VAR_3 == ((void*)0) || *VAR_3 == ((void*)0) )
        return ((void*)0);
    if( (*VAR_3)->i_flags&(VAR_0) )
    {
        FUNC_0( *VAR_3 );
        return ((void*)0);
    }

    VAR_4 = *VAR_3;
    *VAR_3 = ((void*)0);

    if( VAR_4->i_dts == VAR_1 )
    {
        VAR_4->i_dts = VAR_4->i_pts;
    }

    if( VAR_4->i_dts == VAR_1 )
    {
        FUNC_1( VAR_2, "need valid dts" );
        FUNC_0( VAR_4 );
        return ((void*)0);
    }

    return VAR_4;
}

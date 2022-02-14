
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_6__ {int i_length; int i_pts; int i_dts; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static block_t *FUNC_1( decoder_t *VAR_1, block_t **VAR_2 )
{
    block_t *VAR_3, *VAR_4;

    if( VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) ) return ((void*)0);

    VAR_3 = *VAR_2;
    *VAR_2 = ((void*)0);

    if( !(VAR_4 = FUNC_0( VAR_1, VAR_3 )) ) return ((void*)0);

    VAR_4->i_dts = VAR_4->i_pts;
    VAR_4->i_length = VAR_0;

    return VAR_4;
}

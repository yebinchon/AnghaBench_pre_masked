
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int end_date; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {scalar_t__ i_pts; scalar_t__ i_length; scalar_t__ i_dts; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int*,int*,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static block_t *FUNC_3( decoder_t *VAR_0, block_t **VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    block_t *VAR_3;
    int VAR_4, VAR_5;

    if( !VAR_1 )
        return ((void*)0);
    VAR_3 = *VAR_1;
    *VAR_1 = ((void*)0);

    VAR_3 = FUNC_0( VAR_0, &VAR_4, &VAR_5, VAR_3, 1 );
    if( !VAR_3 )
        return ((void*)0);

    VAR_3->i_pts = VAR_3->i_dts = FUNC_1( &VAR_2->end_date );
    VAR_3->i_length = FUNC_2( &VAR_2->end_date, VAR_4 ) - VAR_3->i_pts;


    return VAR_3;
}

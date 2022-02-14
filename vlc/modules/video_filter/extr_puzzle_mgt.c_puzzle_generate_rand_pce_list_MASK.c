
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_5__ {size_t i_pieces_nbr; } ;
struct TYPE_7__ {TYPE_1__ s_allocated; } ;
typedef TYPE_3__ filter_sys_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t*) ;
 scalar_t__ FUNC_2 () ;

int FUNC_3( filter_t *VAR_3, int32_t **VAR_4 )
{
    filter_sys_t *VAR_5 = VAR_3->p_sys;
    int32_t VAR_6 = VAR_5->s_allocated.i_pieces_nbr;

    FUNC_1( *VAR_4 );
    *VAR_4 = FUNC_0( VAR_6, sizeof(**VAR_4) );
    if( !*VAR_4 )
        return VAR_1;

    for( int32_t VAR_7 = 0; VAR_7 < VAR_6; VAR_7++ )
        (*VAR_4)[VAR_7] = VAR_0;

    for( int32_t VAR_8 = 0; VAR_8 < VAR_6; ) {
        int32_t VAR_9 = ((unsigned)FUNC_2()) % VAR_6;
        if( (*VAR_4)[VAR_9] == VAR_0 )
            (*VAR_4)[VAR_9] = VAR_8++;
    }
    return VAR_2;
}

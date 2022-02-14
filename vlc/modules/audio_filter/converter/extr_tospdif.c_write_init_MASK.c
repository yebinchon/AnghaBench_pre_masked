
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_8__ {size_t i_out_offset; TYPE_6__* p_out_buf; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_9__ {int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;
struct TYPE_10__ {unsigned int i_nb_samples; int i_pts; int i_dts; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2( filter_t *VAR_3, block_t *VAR_4,
                       size_t VAR_5, unsigned VAR_6 )
{
    filter_sys_t *VAR_7 = VAR_3->p_sys;

    FUNC_0( VAR_7->p_out_buf == ((void*)0) );
    FUNC_0( VAR_5 > VAR_0 && ( VAR_5 & 3 ) == 0 );

    VAR_7->p_out_buf = FUNC_1( VAR_5 );
    if( !VAR_7->p_out_buf )
        return VAR_1;
    VAR_7->p_out_buf->i_dts = VAR_4->i_dts;
    VAR_7->p_out_buf->i_pts = VAR_4->i_pts;
    VAR_7->p_out_buf->i_nb_samples = VAR_6;

    VAR_7->i_out_offset = VAR_0;
    return VAR_2;
}

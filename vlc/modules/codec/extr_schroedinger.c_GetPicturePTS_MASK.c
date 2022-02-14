
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ encoder_t ;
struct TYPE_8__ {TYPE_1__* pts_tlb; } ;
typedef TYPE_3__ encoder_sys_t ;
struct TYPE_6__ {int b_empty; scalar_t__ u_pnum; int i_pts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,scalar_t__) ;

__attribute__((used)) static vlc_tick_t FUNC_1( encoder_t *VAR_2, uint32_t VAR_3 )
{
    encoder_sys_t *VAR_4 = VAR_2->p_sys;

    for( int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
    {
        if( !VAR_4->pts_tlb[VAR_5].b_empty &&
            VAR_4->pts_tlb[VAR_5].u_pnum == VAR_3 )
        {
             VAR_4->pts_tlb[VAR_5].b_empty = 1;
             return VAR_4->pts_tlb[VAR_5].i_pts;
        }
    }

    FUNC_0( VAR_2, "Could not retrieve PTS for picture %u", VAR_3 );
    return VAR_1;
}

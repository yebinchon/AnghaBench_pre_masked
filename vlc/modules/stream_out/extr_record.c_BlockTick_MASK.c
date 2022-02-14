
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_1__ block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static vlc_tick_t FUNC_2( const block_t *VAR_1 )
{
    if( FUNC_1(!VAR_1) )
        return VAR_0;
    else if( FUNC_0(VAR_1->i_dts != VAR_0) )
        return VAR_1->i_dts;
    else
        return VAR_1->i_pts;
}

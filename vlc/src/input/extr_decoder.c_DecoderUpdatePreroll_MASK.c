
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {int i_flags; scalar_t__ i_buffer; scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1( vlc_tick_t *VAR_5, const block_t *VAR_6 )
{
    if( VAR_6->i_flags & VAR_2 )
        *VAR_5 = VAR_3;

    else if( (VAR_6->i_flags & VAR_1) &&
             (VAR_6->i_buffer == 0 || (VAR_6->i_flags & VAR_0)) )
        *VAR_5 = VAR_3;
    else if( VAR_6->i_dts != VAR_4 )
        *VAR_5 = FUNC_0( *VAR_5, VAR_6->i_dts );
    else if( VAR_6->i_pts != VAR_4 )
        *VAR_5 = FUNC_0( *VAR_5, VAR_6->i_pts );
}

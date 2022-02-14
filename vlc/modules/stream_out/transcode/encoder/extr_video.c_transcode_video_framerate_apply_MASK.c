
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_frame_rate_base; scalar_t__ i_frame_rate; } ;
typedef TYPE_1__ video_format_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1( const video_format_t *VAR_2,
                                             video_format_t *VAR_3 )
{

    if( !VAR_3->i_frame_rate || !VAR_3->i_frame_rate_base )
    {
        VAR_3->i_frame_rate = VAR_2->i_frame_rate;
        VAR_3->i_frame_rate_base = VAR_2->i_frame_rate_base;

        if( !VAR_3->i_frame_rate || !VAR_3->i_frame_rate_base )
        {

            VAR_3->i_frame_rate = VAR_0;
            VAR_3->i_frame_rate_base = VAR_1;
        }
    }

    FUNC_0( &VAR_3->i_frame_rate, &VAR_3->i_frame_rate_base,
                  VAR_3->i_frame_rate, VAR_3->i_frame_rate_base, 0 );
}

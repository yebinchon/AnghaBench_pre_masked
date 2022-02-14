
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int pts; int cc; int framedrop; scalar_t__ i_late_frames; int * p_context; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;
    AVCodecContext *VAR_4 = VAR_3->p_context;

    VAR_3->i_late_frames = 0;
    VAR_3->framedrop = VAR_0;
    FUNC_2( &VAR_3->cc );




    FUNC_4( VAR_2, 1 );


    if( FUNC_1( VAR_4 ) )
        FUNC_0( VAR_4 );

    FUNC_3(&VAR_3->pts, VAR_1);


    FUNC_4( VAR_2, 0 );
}

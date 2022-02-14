
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_10__ {int i_last_output_frame; int cc; int lock; int pts; int framedrop; scalar_t__ i_late_frames; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_11__ {int i_flags; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( decoder_t *VAR_4, block_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;
    block_t **VAR_7 = VAR_5 ? &VAR_5 : ((void*)0) ;

    if( VAR_5 &&
        VAR_5->i_flags & (VAR_1|VAR_0) )
    {

        if( VAR_5->i_flags & VAR_1 )
            FUNC_0( VAR_4, ((void*)0) );
        VAR_6->i_late_frames = 0;
        VAR_6->i_last_output_frame = -1;
        VAR_6->framedrop = VAR_2;

        FUNC_4(&VAR_6->lock);
        FUNC_3( &VAR_6->pts, VAR_3 );
        FUNC_5(&VAR_6->lock);

        FUNC_2( &VAR_6->cc );

        if( VAR_5->i_flags & VAR_0 )
        {
            FUNC_1( VAR_5 );
            VAR_5 = ((void*)0);
        }
    }

    return FUNC_0( VAR_4, VAR_7 );
}

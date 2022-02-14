
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_7__ {scalar_t__ i_result; int ack_event; int tid; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_video_context ;
typedef int video_format_t ;
struct open_init {int * fmtp; int const* cfg; TYPE_1__* vd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int,struct open_init*) ;
 TYPE_2__* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7 ( vout_display_t *VAR_6, const vout_display_cfg_t *VAR_7,
                  video_format_t *VAR_8, vlc_video_context *VAR_9 )
{
    vout_display_sys_t *VAR_10;
    struct open_init VAR_11 = {
        .vd = VAR_6,
        .cfg = VAR_7,
        .fmtp = VAR_8,
    };
    FUNC_3(VAR_9);

    VAR_6->sys = VAR_10 = FUNC_5( 1, sizeof( *VAR_10 ));
    if( !VAR_10 )
        return VAR_4;

    FUNC_1( ((void*)0), &VAR_10->ack_event, 0, VAR_0 );

    VAR_10->tid = FUNC_4( VAR_1, ((void*)0), 1024 * 1024, &VAR_11 );
    FUNC_2( VAR_10->ack_event, VAR_2 );

    if( VAR_10->i_result != VAR_5 )
    {
        FUNC_0( VAR_10->ack_event );

        FUNC_6( VAR_10 );

        return VAR_3;
    }

    return VAR_5;
}

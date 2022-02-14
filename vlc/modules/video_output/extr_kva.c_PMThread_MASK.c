
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_18__ {int close; int control; int display; int prepare; TYPE_1__* cfg; TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_14__ {int ulMode; } ;
struct TYPE_19__ {scalar_t__ frame; scalar_t__ client; int ack_event; int i_result; int hab; int hmq; scalar_t__ is_mouse_hidden; int p_old_frame; TYPE_3__* parent_window; TYPE_10__ kvac; scalar_t__ parent; int b_fixt23; } ;
typedef TYPE_5__ vout_display_sys_t ;
typedef int vout_display_cfg_t ;
typedef int video_format_t ;
struct open_init {int * fmtp; int * cfg; TYPE_4__* vd; } ;
typedef int ULONG ;
struct TYPE_16__ {scalar_t__ hwnd; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_2__ handle; } ;
struct TYPE_15__ {TYPE_3__* window; } ;
typedef int QMSG ;
typedef int PVOID ;
typedef scalar_t__ HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 () ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int*,int ,char*,long,scalar_t__,int,scalar_t__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *,scalar_t__,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ,int ,int ,int,int) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (scalar_t__,int ,TYPE_4__*) ;
 int FUNC_15 (scalar_t__,int ,int) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (int ) ;
 int VAR_30 ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (TYPE_10__*) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 (int,scalar_t__,int ) ;
 int FUNC_26 (TYPE_4__*,char*,int ) ;
 int FUNC_27 (TYPE_4__*,char*) ;
 int * VAR_31 ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int FUNC_29 (TYPE_4__*,char*) ;
 char* FUNC_30 (TYPE_4__*,char*) ;
 int FUNC_31 (int *,int *) ;

__attribute__((used)) static void FUNC_32( void *VAR_32 )
{
    struct open_init *VAR_33 = ( struct open_init * )VAR_32;
    vout_display_t *VAR_34 = VAR_33->vd;
    vout_display_sys_t * VAR_35 = VAR_34->sys;
    const vout_display_cfg_t * VAR_36 = VAR_33->cfg;
    video_format_t *VAR_37 = VAR_33->fmtp;
    ULONG VAR_38;
    QMSG VAR_39;
    char *VAR_40;
    ULONG VAR_41;


    video_format_t VAR_42;
    FUNC_31(&VAR_42, VAR_37);


    FUNC_2();

    VAR_35->hab = FUNC_10( 0 );
    VAR_35->hmq = FUNC_4( VAR_35->hab, 0);

    FUNC_12( VAR_35->hab,
                      VAR_27,
                      VAR_30,
                      VAR_2 | VAR_1,
                      sizeof( PVOID ));

    VAR_35->b_fixt23 = FUNC_29( VAR_34, "kva-fixt23");

    if( !VAR_35->b_fixt23 && VAR_34->cfg->window->type == VAR_26 )

        VAR_35->parent_window = VAR_34->cfg->window;

    if( VAR_35->parent_window )
    {
        VAR_35->parent = ( HWND )VAR_35->parent_window->handle.hwnd;

        ULONG VAR_43 = FUNC_11( VAR_35->parent, VAR_22 );
        FUNC_15( VAR_35->parent, VAR_22,
                           VAR_43 | VAR_28 );

        VAR_38 = VAR_11;
    }
    else
    {
        VAR_35->parent = VAR_12;

        VAR_38 = VAR_9 | VAR_11 | VAR_7 |
                        VAR_8 | VAR_10;
    }

    VAR_35->frame =
        FUNC_5( VAR_35->parent,
                            VAR_29,
                            &VAR_38,
                            VAR_27,
                            "",
                            0L,
                            VAR_20,
                            1,
                            &VAR_35->client );

    if( VAR_35->frame == VAR_20 )
    {
        FUNC_27( VAR_34, "cannot create a frame window");

        goto exit_frame;
    }

    FUNC_14( VAR_35->client, 0, VAR_34 );

    if( !VAR_35->parent_window )
    {
        FUNC_14( VAR_35->frame, 0, VAR_34 );
        VAR_35->p_old_frame = FUNC_17( VAR_35->frame, VAR_19 );
    }

    VAR_40 = FUNC_30( VAR_34, "kva-video-mode" );

    VAR_41 = VAR_13;
    if( FUNC_28( VAR_40, "snap" ) == 0 )
        VAR_41 = VAR_15;
    else if( FUNC_28( VAR_40, "wo" ) == 0 )
        VAR_41 = VAR_17;
    else if( FUNC_28( VAR_40, "vman" ) == 0 )
        VAR_41 = VAR_16;
    else if( FUNC_28( VAR_40, "dive" ) == 0 )
        VAR_41 = VAR_14;

    FUNC_20( VAR_40 );

    if( FUNC_25( VAR_41, VAR_35->client, VAR_0 ))
    {
        FUNC_27( VAR_34, "cannot initialize KVA");

        goto exit_kva_init;
    }

    FUNC_21( &VAR_35->kvac );

    FUNC_26( VAR_34, "selected video mode = %s",
             VAR_31[ VAR_35->kvac.ulMode - 1 ]);

    if( FUNC_3( VAR_34, &VAR_42 ) )
    {
        FUNC_27( VAR_34, "cannot open display");

        goto exit_open_display;
    }

    FUNC_22();


    *VAR_37 = VAR_42;

    VAR_34->prepare = VAR_21;
    VAR_34->display = VAR_5;
    VAR_34->control = VAR_4;
    VAR_34->close = VAR_3;


    FUNC_19(VAR_18, VAR_18);

    VAR_35->i_result = VAR_25;
    FUNC_1( VAR_35->ack_event );

    if( !VAR_35->parent_window )
        FUNC_13( VAR_35->frame, VAR_23 );

    while( FUNC_9( VAR_35->hab, &VAR_39, VAR_20, 0, 0 ))
        FUNC_8( VAR_35->hab, &VAR_39 );

    if( !VAR_35->parent_window )
        FUNC_13( VAR_35->frame, VAR_6 );

    FUNC_24();

    FUNC_0( VAR_34 );



exit_open_display :
    FUNC_23();

exit_kva_init :
    if( !VAR_35->parent_window )
        FUNC_17( VAR_35->frame, VAR_35->p_old_frame );

    FUNC_7( VAR_35->frame );

exit_frame :
    if( VAR_35->is_mouse_hidden )
        FUNC_16( VAR_12, VAR_23 );

    FUNC_6( VAR_35->hmq );
    FUNC_18( VAR_35->hab );

    VAR_35->i_result = VAR_24;
    FUNC_1( VAR_35->ack_event );
}

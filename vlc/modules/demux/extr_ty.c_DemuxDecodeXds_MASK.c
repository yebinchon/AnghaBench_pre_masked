
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_22__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ psz_name; } ;
struct TYPE_24__ {scalar_t__ psz_name; } ;
struct TYPE_27__ {TYPE_2__ future; TYPE_1__ current; scalar_t__ psz_channel_number; scalar_t__ psz_channel_call_letter; scalar_t__ psz_channel_name; } ;
typedef TYPE_3__ xds_meta_t ;
struct TYPE_28__ {scalar_t__ i_event; } ;
typedef TYPE_4__ vlc_meta_t ;
typedef TYPE_4__ vlc_epg_t ;
struct TYPE_29__ {int psz_name; } ;
typedef TYPE_6__ vlc_epg_event_t ;
typedef int uint8_t ;
struct TYPE_30__ {int out; TYPE_8__* p_sys; } ;
typedef TYPE_7__ demux_t ;
struct TYPE_25__ {int b_meta_changed; TYPE_3__ meta; } ;
struct TYPE_31__ {TYPE_22__ xds; } ;
typedef TYPE_8__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_22__*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 TYPE_6__* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_10 (TYPE_4__*) ;
 TYPE_4__* FUNC_11 () ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_14( demux_t *VAR_3, uint8_t VAR_4, uint8_t VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_3->p_sys;

    FUNC_0( &VAR_6->xds, VAR_4, VAR_5 );
    if( VAR_6->xds.b_meta_changed )
    {
        xds_meta_t *VAR_7 = &VAR_6->xds.meta;
        vlc_meta_t *VAR_8;


        VAR_8 = FUNC_11();
        if( VAR_7->psz_channel_name )
            FUNC_12( VAR_8, VAR_7->psz_channel_name );
        if( VAR_7->psz_channel_call_letter )
            FUNC_13( VAR_8, VAR_7->psz_channel_call_letter );
        if( VAR_7->psz_channel_number )
            FUNC_9( VAR_8, "Channel number", VAR_7->psz_channel_number );
        FUNC_1( VAR_3->out, VAR_1, VAR_2, VAR_8 );
        FUNC_10( VAR_8 );


        if( VAR_7->current.psz_name )
        {
            vlc_epg_t *VAR_9 = FUNC_5( VAR_2, VAR_2 );
            if ( VAR_9 )
            {
                vlc_epg_event_t *VAR_10 = FUNC_8( 0, 0, 0 );
                if ( VAR_10 )
                {
                    if( VAR_7->current.psz_name )
                        VAR_10->psz_name = FUNC_2( VAR_7->current.psz_name );
                    if( !FUNC_3( VAR_9, VAR_10 ) )
                        FUNC_7( VAR_10 );
                }


                FUNC_6( VAR_9, 0 );

                if( VAR_7->future.psz_name )
                {
                }
                if( VAR_9->i_event > 0 )
                    FUNC_1( VAR_3->out, VAR_0,
                                    VAR_2, VAR_9 );
                FUNC_4( VAR_9 );
            }
        }
    }
    VAR_6->xds.b_meta_changed = 0;
}

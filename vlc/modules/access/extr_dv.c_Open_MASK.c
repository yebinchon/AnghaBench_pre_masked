
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
struct raw1394_portinfo {int dummy; } ;
struct TYPE_13__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_12__ {int events; int fd; } ;
struct TYPE_14__ {scalar_t__ i_cards; scalar_t__ i_node; int i_channel; TYPE_5__* p_ev; TYPE_1__ raw1394_poll; int * p_raw1394; scalar_t__ i_port; int * p_avc1394; scalar_t__ i_guid; int lock; int * p_frame; } ;
typedef TYPE_3__ access_sys_t ;
struct TYPE_15__ {int thread; int lock; TYPE_2__* p_access; int * p_frame; int ** pp_last; } ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int * FUNC_1 (TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,struct raw1394_portinfo*,int) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int ,int,int ,int) ;
 int FUNC_10 (int *,int,int,int ) ;
 int * FUNC_11 () ;
 scalar_t__ FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_14 (int *,int ,TYPE_5__*,int ) ;
 int FUNC_15 (int *) ;
 TYPE_3__* FUNC_16 (int *,int) ;

__attribute__((used)) static int FUNC_17( vlc_object_t *VAR_13 )
{
    stream_t *VAR_14 = (stream_t*)VAR_13;
    access_sys_t *VAR_15;

    struct raw1394_portinfo VAR_16[ 16 ];

    FUNC_5( VAR_14, "opening device" );


    FUNC_0( ((void*)0), VAR_0, VAR_1, ((void*)0) );

    VAR_14->p_sys = VAR_15 = FUNC_16( VAR_13, sizeof( *VAR_15 ) );
    if( !VAR_15 )
        return VAR_9;

    VAR_15->i_cards = 0;
    VAR_15->i_node = 0;
    VAR_15->i_port = 0;
    VAR_15->i_guid = 0;
    VAR_15->i_channel = 63;
    VAR_15->p_raw1394 = ((void*)0);
    VAR_15->p_avc1394 = ((void*)0);
    VAR_15->p_frame = ((void*)0);
    VAR_15->p_ev = ((void*)0);

    FUNC_15( &VAR_15->lock );

    VAR_15->i_node = FUNC_3( VAR_14, &VAR_15->i_port, VAR_15->i_guid );
    if( VAR_15->i_node < 0 )
    {
        FUNC_6( VAR_14, "failed to open a Firewire (IEEE1394) connection" );
        FUNC_2( VAR_13 );
        return VAR_9;
    }

    VAR_15->p_avc1394 = FUNC_1( VAR_14, VAR_15->i_port );
    if( !VAR_15->p_avc1394 )
    {
        FUNC_6( VAR_14, "no Digital Video Control device found" );
        FUNC_2( VAR_13 );
        return VAR_9;
    }

    VAR_15->p_raw1394 = FUNC_11();
    if( !VAR_15->p_raw1394 )
    {
        FUNC_6( VAR_14, "no Digital Video device found" );
        FUNC_2( VAR_13 );
        return VAR_9;
    }

    VAR_15->i_cards = FUNC_8( VAR_15->p_raw1394, VAR_16, 16 );
    if( VAR_15->i_cards < 0 )
    {
        FUNC_6( VAR_14, "failed to get port info" );
        FUNC_2( VAR_13 );
        return VAR_9;
    }

    if( FUNC_12( VAR_15->p_raw1394, VAR_15->i_port ) < 0 )
    {
        FUNC_6( VAR_14, "failed to set port info" );
        FUNC_2( VAR_13 );
        return VAR_9;
    }

    if ( FUNC_9( VAR_15->p_raw1394, VAR_8,
                VAR_3, VAR_2,
                VAR_15->i_channel, VAR_6, -1 ) < 0 )
    {
        FUNC_6( VAR_14, "failed to init isochronous recv" );
        FUNC_2( VAR_13 );
        return VAR_9;
    }

    FUNC_13( VAR_15->p_raw1394, VAR_14 );
    FUNC_10( VAR_15->p_raw1394, -1, -1, 0 );

    VAR_15->raw1394_poll.fd = FUNC_7( VAR_15->p_raw1394 );
    VAR_15->raw1394_poll.events = VAR_4 | VAR_5;


    VAR_15->p_ev = FUNC_4( 1, sizeof( *VAR_15->p_ev ) );
    if( !VAR_15->p_ev )
    {
        FUNC_6( VAR_14, "failed to create event thread struct" );
        FUNC_2( VAR_13 );
        return VAR_10;
    }

    VAR_15->p_ev->p_frame = ((void*)0);
    VAR_15->p_ev->pp_last = &VAR_15->p_ev->p_frame;
    VAR_15->p_ev->p_access = VAR_14;
    FUNC_15( &VAR_15->p_ev->lock );
    if( FUNC_14( &VAR_15->p_ev->thread, VAR_7,
               VAR_15->p_ev, VAR_12 ) )
    {
        FUNC_6( VAR_14, "failed to clone event thread" );
        FUNC_2( VAR_13 );
        return VAR_9;
    }

    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_14__ {int i_width; int i_height; } ;
struct TYPE_15__ {TYPE_1__ video; int i_codec; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_16__ {int * out; int psz_location; TYPE_4__* p_sys; int pf_control; int pf_demux; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_17__ {int width; int height; int brightness; int focus; int selected_camera; int dma_buffers; int * camera; int p_es_video; int video_mode; int frame_rate; scalar_t__ video_device; int features; scalar_t__ reset_bus; int * p_dccontext; } ;
typedef TYPE_4__ demux_sys_t ;
typedef scalar_t__ dc1394error_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *,int ) ;
 int FUNC_17 (TYPE_2__*,int ,int ) ;
 int FUNC_18 (int *,TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int ,int) ;
 int FUNC_20 (TYPE_3__*,char*,...) ;
 int FUNC_21 (TYPE_3__*,char*,...) ;
 scalar_t__ FUNC_22 (TYPE_3__*) ;
 int VAR_15 ;
 TYPE_4__* FUNC_23 (int *,int,int) ;

__attribute__((used)) static int FUNC_24( vlc_object_t *VAR_16 )
{
    demux_t *VAR_17 = (demux_t*)VAR_16;
    demux_sys_t *VAR_18;
    es_format_t VAR_19;
    dc1394error_t VAR_20;

    if (VAR_17->out == ((void*)0))
        return VAR_12;


    VAR_17->pf_demux = VAR_9;
    VAR_17->pf_control = VAR_0;

    VAR_17->p_sys = VAR_18 = FUNC_23( VAR_16, 1, sizeof( demux_sys_t ) );
    if( !VAR_18 )
        return VAR_13;

    FUNC_19( &VAR_19, 0, sizeof( es_format_t ) );


    VAR_18->video_mode = VAR_8;
    VAR_18->width = 640;
    VAR_18->height = 480;
    VAR_18->frame_rate = VAR_3;
    VAR_18->brightness = 200;
    VAR_18->focus = 0;
    VAR_18->p_dccontext = ((void*)0);
    VAR_18->camera = ((void*)0);
    VAR_18->selected_camera = -1;
    VAR_18->dma_buffers = 1;
    VAR_18->reset_bus = 0;


    if( FUNC_22(VAR_17) != VAR_14 )
    {
        FUNC_21( VAR_17, "Bad MRL, please check the option line "
                          "(MRL was: %s)",
                          VAR_17->psz_location );
        return VAR_12;
    }

    VAR_18->p_dccontext = FUNC_11();
    if( !VAR_18->p_dccontext )
    {
        FUNC_21( VAR_17, "Failed to initialise libdc1394");
        return VAR_12;
    }

    if( FUNC_1( VAR_18, VAR_17 ) != VAR_14 )
    {
        FUNC_10( VAR_18->p_dccontext );
        return VAR_12;
    }

    if( !VAR_18->camera )
    {
        FUNC_21( VAR_17, "No camera found !!" );
        FUNC_10( VAR_18->p_dccontext );
        return VAR_12;
    }

    if( VAR_18->reset_bus )
    {
        if( FUNC_12( VAR_18->camera ) != VAR_7 )
        {
            FUNC_21( VAR_17, "Unable to reset IEEE 1394 bus");
            FUNC_0( VAR_16 );
            return VAR_12;
        }
        else FUNC_20( VAR_17, "Successfully reset IEEE 1394 bus");
    }

    if( FUNC_3( VAR_18->camera ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to reset camera");
        FUNC_0( VAR_16 );
        return VAR_12;
    }

    if( FUNC_2( VAR_18->camera,
                  VAR_15 ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to print camera info");
        FUNC_0( VAR_16 );
        return VAR_12;
    }

    if( FUNC_7( VAR_18->camera,
                &VAR_18->features ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to get feature set");
        FUNC_0( VAR_16 );
        return VAR_12;
    }

    FUNC_8(&VAR_18->features, VAR_15);
    if( VAR_18->focus )
    {
        if( FUNC_9( VAR_18->camera,
                      VAR_2,
                      VAR_18->focus ) != VAR_7 )
        {
            FUNC_21( VAR_17, "Unable to set initial focus to %u",
                     VAR_18->focus );
        }
        else
            FUNC_20( VAR_17, "Initial focus set to %u", VAR_18->focus );
    }

    if( FUNC_9( VAR_18->camera,
                  VAR_2,
                  VAR_18->brightness ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to set initial brightness to %u",
                 VAR_18->brightness );
    }
    else
        FUNC_20( VAR_17, "Initial brightness set to %u", VAR_18->brightness );

    if( FUNC_13( VAR_18->camera,
                    VAR_18->frame_rate ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to set framerate");
        FUNC_0( VAR_16 );
        return VAR_12;
    }

    if( FUNC_15( VAR_18->camera,
                   VAR_18->video_mode ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to set video mode");
        FUNC_0( VAR_16 );
        return VAR_12;
    }

    if( FUNC_14( VAR_18->camera,
                    VAR_4 ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to set iso speed");
        FUNC_0( VAR_16 );
        return VAR_12;
    }


    VAR_20 = FUNC_5( VAR_18->camera,
                    VAR_18->dma_buffers,
                VAR_1);
    if( VAR_20 != VAR_7 )
    {
        if( VAR_20 == VAR_5 )
        {
            FUNC_21( VAR_17 ,"No bandwidth: try adding the "
             "\"resetbus\" option" );
        }
        else
        {
            FUNC_21( VAR_17 ,"Unable to setup capture" );
        }
        FUNC_0( VAR_16 );
        return VAR_12;
    }




    FUNC_17( &VAR_19, VAR_10, VAR_11 );

    VAR_19.video.i_width = VAR_18->width;
    VAR_19.video.i_height = VAR_18->height;

    FUNC_20( VAR_17, "Added new video es %4.4s %dx%d",
             (char*)&VAR_19.i_codec, VAR_19.video.i_width, VAR_19.video.i_height );

    VAR_18->p_es_video = FUNC_18( VAR_17->out, &VAR_19 );


    if( FUNC_16( VAR_18->camera,
                       VAR_6 ) != VAR_7 )
    {
        FUNC_21( VAR_17, "Unable to start camera iso transmission" );
        FUNC_6( VAR_18->camera );
        FUNC_0( VAR_16 );
        return VAR_12;
    }
    FUNC_20( VAR_17, "Set iso transmission" );

    return VAR_14;
}

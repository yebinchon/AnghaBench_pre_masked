
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int p_address; } ;
typedef TYPE_1__ vlc_value_t ;
struct TYPE_22__ {int i_refcount; int player; int listener; int event_manager; int aout_listener; TYPE_3__* p_libvlc_instance; int * p_md; } ;
typedef TYPE_2__ libvlc_media_player_t ;
struct TYPE_23__ {int p_libvlc_int; } ;
typedef TYPE_3__ libvlc_instance_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*,int) ;
 int FUNC_9 (TYPE_2__*,char*,int) ;
 int FUNC_10 (TYPE_2__*,char*,int,TYPE_1__) ;
 int FUNC_11 (TYPE_2__*,char*,int) ;
 int FUNC_12 () ;
 TYPE_2__* FUNC_13 (int ,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int ,int *,TYPE_2__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int *,int *) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int *,TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;

libvlc_media_player_t *
FUNC_23( libvlc_instance_t *VAR_10 )
{
    libvlc_media_player_t * VAR_11;

    FUNC_1(VAR_10);

    VAR_11 = FUNC_13 (VAR_10->p_libvlc_int, sizeof(*VAR_11));
    if (FUNC_6(VAR_11 == ((void*)0)))
    {
        FUNC_3("Not enough memory");
        return ((void*)0);
    }


    FUNC_8 (VAR_11, "rate", VAR_4|VAR_3);
    FUNC_8 (VAR_11, "sout", VAR_6);
    FUNC_8 (VAR_11, "demux-filter", VAR_6);


    FUNC_8 (VAR_11, "vout", VAR_6|VAR_3);
    FUNC_8 (VAR_11, "window", VAR_6);
    FUNC_8 (VAR_11, "gl", VAR_6);
    FUNC_8 (VAR_11, "gles2", VAR_6);
    FUNC_8 (VAR_11, "vmem-lock", VAR_1);
    FUNC_8 (VAR_11, "vmem-unlock", VAR_1);
    FUNC_8 (VAR_11, "vmem-display", VAR_1);
    FUNC_8 (VAR_11, "vmem-data", VAR_1);
    FUNC_8 (VAR_11, "vmem-setup", VAR_1);
    FUNC_8 (VAR_11, "vmem-cleanup", VAR_1);
    FUNC_8 (VAR_11, "vmem-chroma", VAR_6 | VAR_3);
    FUNC_8 (VAR_11, "vmem-width", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "vmem-height", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "vmem-pitch", VAR_5 | VAR_3);

    FUNC_8( VAR_11, "vout-cb-opaque", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-setup", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-cleanup", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-resize-cb", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-update-output", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-swap", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-get-proc-address", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-make-current", VAR_1 );
    FUNC_8( VAR_11, "vout-cb-select-plane", VAR_1 );

    FUNC_8 (VAR_11, "dec-dev", VAR_6);
    FUNC_8 (VAR_11, "drawable-xid", VAR_5);
    FUNC_8 (VAR_11, "keyboard-events", VAR_2);
    FUNC_9 (VAR_11, "keyboard-events", 1);
    FUNC_8 (VAR_11, "mouse-events", VAR_2);
    FUNC_9 (VAR_11, "mouse-events", 1);

    FUNC_8 (VAR_11, "fullscreen", VAR_2);
    FUNC_8 (VAR_11, "autoscale", VAR_2 | VAR_3);
    FUNC_8 (VAR_11, "zoom", VAR_4 | VAR_3);
    FUNC_8 (VAR_11, "aspect-ratio", VAR_6);
    FUNC_8 (VAR_11, "crop", VAR_6);
    FUNC_8 (VAR_11, "deinterlace", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "deinterlace-mode", VAR_6 | VAR_3);

    FUNC_8 (VAR_11, "vbi-page", VAR_5);
    FUNC_11 (VAR_11, "vbi-page", 100);

    FUNC_8 (VAR_11, "video-filter", VAR_6 | VAR_3);
    FUNC_8 (VAR_11, "sub-source", VAR_6 | VAR_3);
    FUNC_8 (VAR_11, "sub-filter", VAR_6 | VAR_3);

    FUNC_8 (VAR_11, "marq-marquee", VAR_6);
    FUNC_8 (VAR_11, "marq-color", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "marq-opacity", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "marq-position", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "marq-refresh", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "marq-size", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "marq-timeout", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "marq-x", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "marq-y", VAR_5 | VAR_3);

    FUNC_8 (VAR_11, "logo-file", VAR_6);
    FUNC_8 (VAR_11, "logo-x", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "logo-y", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "logo-delay", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "logo-repeat", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "logo-opacity", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "logo-position", VAR_5 | VAR_3);

    FUNC_8 (VAR_11, "contrast", VAR_4 | VAR_3);
    FUNC_8 (VAR_11, "brightness", VAR_4 | VAR_3);
    FUNC_8 (VAR_11, "hue", VAR_4 | VAR_3);
    FUNC_8 (VAR_11, "saturation", VAR_4 | VAR_3);
    FUNC_8 (VAR_11, "gamma", VAR_4 | VAR_3);


    FUNC_8 (VAR_11, "aout", VAR_6 | VAR_3);
    FUNC_8 (VAR_11, "audio-device", VAR_6);
    FUNC_8 (VAR_11, "mute", VAR_2);
    FUNC_8 (VAR_11, "volume", VAR_4);
    FUNC_8 (VAR_11, "corks", VAR_5);
    FUNC_8 (VAR_11, "audio-filter", VAR_6);
    FUNC_8 (VAR_11, "role", VAR_6 | VAR_3);
    FUNC_8 (VAR_11, "amem-data", VAR_1);
    FUNC_8 (VAR_11, "amem-setup", VAR_1);
    FUNC_8 (VAR_11, "amem-cleanup", VAR_1);
    FUNC_8 (VAR_11, "amem-play", VAR_1);
    FUNC_8 (VAR_11, "amem-pause", VAR_1);
    FUNC_8 (VAR_11, "amem-resume", VAR_1);
    FUNC_8 (VAR_11, "amem-flush", VAR_1);
    FUNC_8 (VAR_11, "amem-drain", VAR_1);
    FUNC_8 (VAR_11, "amem-set-volume", VAR_1);
    FUNC_8 (VAR_11, "amem-format", VAR_6 | VAR_3);
    FUNC_8 (VAR_11, "amem-rate", VAR_5 | VAR_3);
    FUNC_8 (VAR_11, "amem-channels", VAR_5 | VAR_3);


    FUNC_8 (VAR_11, "video-title-show", VAR_2);
    FUNC_8 (VAR_11, "video-title-position", VAR_5);
    FUNC_8 (VAR_11, "video-title-timeout", VAR_5);


    FUNC_8 (VAR_11, "equalizer-preamp", VAR_4);
    FUNC_8 (VAR_11, "equalizer-vlcfreqs", VAR_2);
    FUNC_8 (VAR_11, "equalizer-bands", VAR_6);


    vlc_value_t VAR_12;
    VAR_12.p_address = FUNC_12();
    if ( FUNC_5(VAR_12.p_address) )
    {
        FUNC_8(VAR_11, "http-cookies", VAR_1);
        FUNC_10(VAR_11, "http-cookies", VAR_1, VAR_12);
    }

    VAR_11->p_md = ((void*)0);
    VAR_11->p_libvlc_instance = VAR_10;

    VAR_11->player = FUNC_19(FUNC_0(VAR_11), VAR_0,
                                ((void*)0), ((void*)0));
    if (FUNC_6(!VAR_11->player))
        goto error1;

    FUNC_18(VAR_11->player);

    VAR_11->listener = FUNC_16(VAR_11->player, &VAR_9, VAR_11);
    if (FUNC_6(!VAR_11->listener))
        goto error2;

    VAR_11->aout_listener =
        FUNC_22(VAR_11->player, &VAR_8, VAR_11);
    if (FUNC_6(!VAR_11->aout_listener))
        goto error3;

    FUNC_21(VAR_11->player);

    VAR_11->i_refcount = 1;
    FUNC_2(&VAR_11->event_manager, VAR_11);
    FUNC_7(FUNC_15(VAR_11),
                    "snapshot-file", VAR_7, VAR_11);

    FUNC_4(VAR_10);
    return VAR_11;

error3:
    FUNC_20(VAR_11->player, VAR_11->listener);
error2:
    FUNC_21(VAR_11->player);
    FUNC_17(VAR_11->player);
error1:
    FUNC_14(VAR_11);
    return ((void*)0);
}

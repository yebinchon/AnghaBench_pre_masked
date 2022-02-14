
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int p_segments; int inner_align; } ;
struct TYPE_24__ {TYPE_3__ region; TYPE_2__* p_default_style; } ;
typedef TYPE_4__ subtext_updater_sys_t ;
struct TYPE_21__ {TYPE_4__* p_sys; } ;
struct TYPE_25__ {int b_ephemer; int b_absolute; scalar_t__ i_stop; scalar_t__ i_start; TYPE_1__ updater; } ;
typedef TYPE_5__ subpicture_t ;
struct TYPE_26__ {int psz_alert_text; scalar_t__ alert_message_time_remaining; } ;
typedef TYPE_6__ scte18_cea_t ;
struct TYPE_27__ {TYPE_8__* p_sys; } ;
typedef TYPE_7__ decoder_t ;
struct TYPE_28__ {int p_handle; } ;
typedef TYPE_8__ decoder_sys_t ;
struct TYPE_29__ {int i_flags; scalar_t__ i_pts; } ;
typedef TYPE_9__ block_t ;
struct TYPE_22__ {int i_style_flags; int i_features; int i_background_color; int i_font_color; int i_background_alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_9__*) ;
 TYPE_5__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_7__*,char*,int ) ;
 TYPE_6__* FUNC_4 (int ,TYPE_9__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8( decoder_t *VAR_11, block_t *VAR_12 )
{
    if ( VAR_12 == ((void*)0) )
        return VAR_9;
    subpicture_t *VAR_13 = ((void*)0);

    if (VAR_12->i_flags & (VAR_0))
        goto exit;

    decoder_sys_t *VAR_14 = VAR_11->p_sys;

    scte18_cea_t *VAR_15 = FUNC_4( VAR_14->p_handle, VAR_12 );
    if( VAR_15 )
    {
        VAR_13 = FUNC_1( VAR_11 );
        if( VAR_13 )
        {
            subtext_updater_sys_t *VAR_16 = VAR_13->updater.p_sys;

            VAR_13->i_start = VAR_12->i_pts;
            if( VAR_15->alert_message_time_remaining )
                VAR_13->i_stop = VAR_13->i_start + FUNC_7( VAR_15->alert_message_time_remaining );
            else
                VAR_13->i_stop = VAR_10;

            VAR_13->b_ephemer = 1;
            VAR_13->b_absolute = 0;

            VAR_16->region.inner_align = VAR_8;
            VAR_16->p_default_style->i_style_flags = VAR_3 | VAR_2;
            VAR_16->p_default_style->i_features |= VAR_6;
            VAR_16->p_default_style->i_background_color = 0x000000;
            VAR_16->p_default_style->i_background_alpha = VAR_1;
            VAR_16->p_default_style->i_features |= VAR_5 | VAR_4;
            VAR_16->p_default_style->i_font_color = 0xFF0000;
            VAR_16->p_default_style->i_features |= VAR_7;

            VAR_16->region.p_segments = FUNC_6( VAR_15->psz_alert_text );
            FUNC_2( VAR_11, VAR_13 );
        }
        FUNC_3( VAR_11, "Received %s", VAR_15->psz_alert_text );
        FUNC_5( VAR_15 );
    }

exit:
    FUNC_0( VAR_12 );
    return VAR_9;
}

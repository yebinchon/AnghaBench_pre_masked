
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int uint32_t ;
struct TYPE_15__ {int * p_infe; int fmt; int * p_shared_header; TYPE_4__* (* BOXDATA ) (int ) ;} ;
struct heif_private_t {scalar_t__ i_end_display_time; scalar_t__ i_pcr; scalar_t__ i_image_duration; int b_seekpoint_changed; scalar_t__ id; TYPE_1__ current; int * p_root; } ;
typedef int es_format_t ;
struct TYPE_16__ {int out; scalar_t__ p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_17__ {scalar_t__ i_dts; scalar_t__ i_pts; scalar_t__ i_length; int i_flags; } ;
typedef TYPE_3__ block_t ;
struct TYPE_18__ {scalar_t__ item_type; int i_item_id; } ;
struct TYPE_14__ {int i_item_id; } ;
typedef int MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_13__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int const,int *,TYPE_3__**) ;
 int VAR_2 ;
 void* FUNC_2 (int *,int *,int ,char*,int ,int *) ;
 void* FUNC_3 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int const,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int *,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (char,char,char,char) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ,int*) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,scalar_t__,TYPE_3__*) ;
 int FUNC_15 (int ,scalar_t__) ;
 int VAR_11 ;
 TYPE_4__* FUNC_16 (int ) ;
 TYPE_4__* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20( demux_t *VAR_12 )
{
    struct heif_private_t *VAR_13 = (void *) VAR_12->p_sys;


    if( VAR_13->i_end_display_time > 0 )
    {
        bool VAR_14;
        FUNC_12( VAR_12->out, VAR_2, &VAR_14 );
        if( !VAR_14 || FUNC_18() <= VAR_13->i_end_display_time )
        {
            FUNC_19( FUNC_7(40) );
            return VAR_7;
        }
        VAR_13->i_end_display_time = 0;
    }


    VAR_13->current.p_shared_header = ((void*)0);


    if( !VAR_13->current.p_infe )
    {
        MP4_Box_t *VAR_15 = FUNC_3( VAR_13->p_root, "meta/pitm" );
        if( !VAR_15 )
            return VAR_6;

        VAR_13->current.p_infe = FUNC_2( VAR_13->p_root, ((void*)0),
                                         VAR_0, "meta/iinf/infe",
                                         VAR_3, &FUNC_0(VAR_15)->i_item_id );
    }
    else
    {
        VAR_13->current.p_infe = FUNC_2( VAR_13->p_root, VAR_13->current.p_infe,
                                         VAR_0, "meta/iinf/infe",
                                         VAR_4, VAR_13->p_root );
    }

    if( !VAR_13->current.p_infe )
        return VAR_6;

    const uint32_t VAR_16 = VAR_13->current.BOXDATA(VAR_11)->i_item_id;
    const MP4_Box_t *VAR_17 = FUNC_3( VAR_13->p_root, "meta/iprp/ipco" );
    if( !VAR_17 )
        return VAR_6;

    es_format_t VAR_18;
    FUNC_10(&VAR_18, VAR_5, 0);

    block_t *VAR_19 = ((void*)0);
    if( VAR_13->current.BOXDATA(VAR_11)->item_type == FUNC_6('g','r','i','d') )
    {
        if( FUNC_1( VAR_12, VAR_16,
                                      &VAR_18, &VAR_19 ) != VAR_8 )
        {
            FUNC_8( &VAR_18 );
            return VAR_7;
        }
    }
    else
    {
        if( FUNC_5( VAR_12, VAR_13->current.p_infe,
                          &VAR_18, &VAR_13->current.p_shared_header ) != VAR_8 )
        {
            FUNC_8( &VAR_18 );
            return VAR_7;
        }

        VAR_19 = FUNC_4( VAR_12, VAR_16,
                                   VAR_13->current.p_shared_header );
        if( !VAR_19 )
        {
            FUNC_8( &VAR_18 );
            return VAR_7;
        }
    }

    FUNC_8( &VAR_13->current.fmt );
    FUNC_9( &VAR_13->current.fmt, &VAR_18 );
    FUNC_8( &VAR_18 );
    if( VAR_13->id )
        FUNC_13( VAR_12->out, VAR_13->id );
    VAR_13->id = FUNC_11( VAR_12->out, &VAR_13->current.fmt );

    if( !VAR_13->id )
    {
        VAR_13->current.p_infe = ((void*)0);
        return VAR_7;
    }

    if( VAR_13->i_pcr == VAR_10 )
    {
        VAR_13->i_pcr = VAR_9;
        FUNC_15( VAR_12->out, VAR_13->i_pcr );
    }

    VAR_19->i_dts = VAR_19->i_pts = VAR_13->i_pcr;
    VAR_19->i_length = VAR_13->i_image_duration;

    VAR_19->i_flags |= VAR_1;

    VAR_13->i_end_display_time = FUNC_18() + VAR_19->i_length;
    VAR_13->b_seekpoint_changed = 1;

    VAR_13->i_pcr = VAR_19->i_dts + VAR_19->i_length;
    FUNC_14( VAR_12->out, VAR_13->id, VAR_19 );
    FUNC_15( VAR_12->out, VAR_13->i_pcr );

    return VAR_7;
}

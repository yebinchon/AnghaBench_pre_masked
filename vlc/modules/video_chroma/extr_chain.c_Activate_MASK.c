
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int pf_video_filter; int fmt_out; scalar_t__ b_allow_fmt_out_change; TYPE_3__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_19__ {int p_chain; scalar_t__ p_video_filter; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_20__ {TYPE_1__* sys; int * video; } ;
typedef TYPE_4__ filter_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,TYPE_4__*) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (TYPE_1__*,char*,int) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_15( filter_t *VAR_9, int (*VAR_10)(filter_t *) )
{
    filter_sys_t *VAR_11;
    int VAR_12 = VAR_3;

    VAR_11 = VAR_9->p_sys = FUNC_0( 1, sizeof( *VAR_11 ) );
    if( !VAR_11 )
        return VAR_4;

    filter_owner_t VAR_13 = {
        .video = &VAR_8,
        .sys = VAR_9,
    };

    VAR_11->p_chain = FUNC_6( VAR_9, VAR_9->b_allow_fmt_out_change, &VAR_13 );
    if( !VAR_11->p_chain )
    {
        FUNC_7( VAR_11 );
        return VAR_3;
    }

    int VAR_14 = VAR_7;
    if( FUNC_13( FUNC_14(VAR_9), "chain-level" ) != 0 )
        VAR_14 |= VAR_6;

    FUNC_9( VAR_9, "chain-level", VAR_14 );

    FUNC_12( VAR_9, "chain-level" );

    int VAR_15 = FUNC_11( VAR_9, "chain-level" );
    if( VAR_15 < 0 || VAR_15 > VAR_0 )
        FUNC_8( VAR_9, "Too high level of recursion (%d)", VAR_15 );
    else
        VAR_12 = VAR_10( VAR_9 );

    FUNC_10( VAR_9, "chain-level" );

    if( VAR_12 )
    {

        if (VAR_11->p_video_filter)
            FUNC_3( VAR_9, VAR_11->p_video_filter,
                                      VAR_2 );
        FUNC_4( VAR_11->p_chain );
        FUNC_7( VAR_11 );
        return VAR_3;
    }
    if( VAR_9->b_allow_fmt_out_change )
    {
        FUNC_1( &VAR_9->fmt_out );
        FUNC_2( &VAR_9->fmt_out,
                        FUNC_5( VAR_11->p_chain ) );
    }

    VAR_9->pf_video_filter = VAR_1;
    return VAR_5;
}

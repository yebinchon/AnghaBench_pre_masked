
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_16__ {int * p_conv_static; int * p_conv_nonstatic; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;
struct TYPE_17__ {TYPE_1__* sys; int * video; } ;
typedef TYPE_2__ filter_owner_t ;
typedef int filter_chain_t ;
struct TYPE_19__ {scalar_t__ i_width; scalar_t__ i_height; scalar_t__ i_chroma; scalar_t__ orientation; } ;
struct TYPE_18__ {TYPE_4__ video; } ;
typedef TYPE_3__ es_format_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_3__ const*) ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_2 (int *,TYPE_3__ const*) ;
 TYPE_3__* FUNC_3 (int *) ;
 int * FUNC_4 (int *,int,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_3__ const*,TYPE_3__ const*) ;
 int FUNC_6 (int *,char*,int const,int const,int const) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_8( sout_stream_t *VAR_5,
                                            sout_stream_id_sys_t *VAR_6,
                                            const es_format_t **VAR_7,
                                            const es_format_t *VAR_8,
                                            bool VAR_9 )
{
    filter_owner_t VAR_10 = {
        .video = &VAR_4,
        .sys = VAR_6,
    };

    enum
    {
        STEP_NONSTATIC = 0,
        STEP_STATIC,
    };
    for( int VAR_11 = STEP_NONSTATIC; VAR_11 <= STEP_STATIC; VAR_11++ )
    {
        const bool VAR_12 = (*VAR_7)->video.i_width != VAR_8->video.i_width ||
                                (*VAR_7)->video.i_height != VAR_8->video.i_height;
        const bool VAR_13 = (*VAR_7)->video.i_chroma != VAR_8->video.i_chroma;
        const bool VAR_14 = ((*VAR_7)->video.orientation != VAR_0) && VAR_9;

        if( VAR_11 == STEP_STATIC && VAR_14 )
            return VAR_2;

        const es_format_t *VAR_15 = VAR_8;

        if( ! (VAR_12 || VAR_13 || VAR_14) )
            return VAR_3;

        es_format_t VAR_16;
        if( VAR_14 )
        {
            FUNC_1( &VAR_16, VAR_1, VAR_8->video.i_chroma );
            FUNC_7( &VAR_16.video, &VAR_8->video );
            VAR_15 = &VAR_16;
        }

        FUNC_6( VAR_5, "adding (scale %d,chroma %d, orient %d) converters",
                 VAR_12, VAR_13, VAR_14 );

        filter_chain_t **VAR_17 = (VAR_11 == STEP_NONSTATIC)
                ? &VAR_6->p_conv_nonstatic
                : &VAR_6->p_conv_static;

        *VAR_17 = FUNC_4( VAR_5, VAR_11 == STEP_NONSTATIC, &VAR_10 );
        if( !*VAR_17 )
            return VAR_2;
        FUNC_5( *VAR_17, *VAR_7, VAR_15 );

        if( FUNC_2( *VAR_17, VAR_15 ) != VAR_3 )
            return VAR_2;

        *VAR_7 = FUNC_3( *VAR_17 );
        FUNC_0( VAR_5, *VAR_7 );
    }

    return VAR_3;
}

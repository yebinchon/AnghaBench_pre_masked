
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_20__ {int i_reorder_depth; } ;
struct TYPE_21__ {TYPE_6__** pp_decoder; TYPE_3__ desc; } ;
struct decoder_owner {int lock; TYPE_4__ cc; int p_clock; int p_sout; int p_resource; } ;
struct TYPE_18__ {int i_channel; int i_reorder_depth; } ;
struct TYPE_19__ {TYPE_1__ cc; } ;
struct TYPE_22__ {TYPE_2__ subs; } ;
typedef TYPE_5__ es_format_t ;
struct TYPE_23__ {int p_module; } ;
typedef TYPE_6__ decoder_t ;


 int FUNC_0 (TYPE_6__*,TYPE_5__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 struct decoder_owner* FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (struct decoder_owner*,int ,int) ;
 TYPE_6__* FUNC_7 (int ,TYPE_5__*,int ,int ,int ,int,int *,int *) ;
 int FUNC_8 (TYPE_6__*,char*) ;
 int FUNC_9 (TYPE_6__*,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12( decoder_t *VAR_3, vlc_fourcc_t VAR_4,
                             int VAR_5, bool VAR_6 )
{
    struct decoder_owner *VAR_7 = FUNC_3( VAR_3 );



    if( !FUNC_6( VAR_7, VAR_4, VAR_5 ) )
        return VAR_1;

    if( VAR_6 )
    {
        decoder_t *VAR_8;
        es_format_t VAR_9;

        FUNC_4( &VAR_9, VAR_0, VAR_4 );
        VAR_9.subs.cc.i_channel = VAR_5;
        VAR_9.subs.cc.i_reorder_depth = VAR_7->cc.desc.i_reorder_depth;
        VAR_8 = FUNC_7( FUNC_1(VAR_3), &VAR_9, VAR_7->p_clock,
                                 VAR_7->p_resource, VAR_7->p_sout, 0,
                                 ((void*)0), ((void*)0) );
        if( !VAR_8 )
        {
            FUNC_8( VAR_3, "could not create decoder" );
            FUNC_9( VAR_3,
                FUNC_2("Streaming / Transcoding failed"), "%s",
                FUNC_2("VLC could not open the decoder module.") );
            return VAR_1;
        }
        else if( !VAR_8->p_module )
        {
            FUNC_0( VAR_3, &VAR_9, 1 );
            FUNC_5(VAR_8);
            return VAR_1;
        }
        struct decoder_owner *VAR_10 = FUNC_3( VAR_8 );
        VAR_10->p_clock = VAR_7->p_clock;

        FUNC_10( &VAR_7->lock );
        VAR_7->cc.pp_decoder[VAR_5] = VAR_8;
        FUNC_11( &VAR_7->lock );
    }
    else
    {
        decoder_t *VAR_11;

        FUNC_10( &VAR_7->lock );
        VAR_11 = VAR_7->cc.pp_decoder[VAR_5];
        VAR_7->cc.pp_decoder[VAR_5] = ((void*)0);
        FUNC_11( &VAR_7->lock );

        if( VAR_11 )
            FUNC_5(VAR_11);
    }
    return VAR_2;
}

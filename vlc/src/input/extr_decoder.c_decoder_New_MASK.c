
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_clock_t ;
struct input_decoder_callbacks {int dummy; } ;
struct TYPE_12__ {scalar_t__ i_cat; } ;
struct TYPE_14__ {TYPE_1__ fmt_in; int p_module; } ;
struct decoder_owner {int error; int thread; int * p_sout_input; int p_sout; TYPE_3__ dec; } ;
typedef int sout_instance_t ;
typedef int input_resource_t ;
struct TYPE_13__ {scalar_t__ i_cat; int i_codec; scalar_t__ b_packetized; } ;
typedef TYPE_2__ es_format_t ;
typedef TYPE_3__ decoder_t ;


 scalar_t__ VAR_0 ;
 struct decoder_owner* FUNC_0 (int *,TYPE_2__ const*,int *,int *,int *,int,struct input_decoder_callbacks const*,void*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__ const*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int * FUNC_7 (int ,TYPE_2__ const*) ;
 scalar_t__ FUNC_8 (int *,int ,struct decoder_owner*,int) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static decoder_t *FUNC_11( vlc_object_t *VAR_6, const es_format_t *VAR_7,
                               vlc_clock_t *VAR_8, input_resource_t *VAR_9,
                               sout_instance_t *VAR_10, bool VAR_11,
                               const struct input_decoder_callbacks *VAR_12,
                               void *VAR_13)
{
    const char *VAR_14 = VAR_10 ? FUNC_3("packetizer") : FUNC_3("decoder");
    int VAR_15;


    struct decoder_owner *VAR_16 = FUNC_0( VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
                           VAR_11, VAR_12, VAR_13 );
    if( VAR_16 == ((void*)0) )
    {
        FUNC_6( VAR_6, "could not create %s", VAR_14 );
        FUNC_9( VAR_6, FUNC_4("Streaming / Transcoding failed"),
            FUNC_4("VLC could not open the %s module."), FUNC_10( VAR_14 ) );
        return ((void*)0);
    }

    decoder_t *VAR_17 = &VAR_16->dec;
    if( !VAR_17->p_module )
    {
        FUNC_1( VAR_17, VAR_7, !VAR_10 );

        FUNC_2( VAR_17 );
        return ((void*)0);
    }

    FUNC_5( VAR_17->fmt_in.i_cat != VAR_2 );

    if( VAR_17->fmt_in.i_cat == VAR_0 )
        VAR_15 = VAR_4;
    else
        VAR_15 = VAR_5;
    if( FUNC_8( &VAR_16->thread, VAR_1, VAR_16, VAR_15 ) )
    {
        FUNC_6( VAR_17, "cannot spawn decoder thread" );
        FUNC_2( VAR_17 );
        return ((void*)0);
    }

    return VAR_17;
}

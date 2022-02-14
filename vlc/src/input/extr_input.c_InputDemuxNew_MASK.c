
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_18__ {int * pf_readdir; int * pf_block; int * pf_read; } ;
typedef TYPE_1__ stream_t ;
typedef int input_thread_t ;
struct TYPE_19__ {int b_preparsing; int p_es_out; } ;
typedef TYPE_2__ input_thread_private_t ;
struct TYPE_20__ {int i_seekpoint_end; int i_seekpoint_start; int i_title_end; int i_title_start; } ;
typedef TYPE_3__ input_source_t ;
typedef TYPE_1__ demux_t ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*,TYPE_1__**,char const*) ;
 int FUNC_1 (char const*,int *,int *,int *,int *) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int *,char const*,char const*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *,int *,int ,int ,char const*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *,char*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static demux_t *FUNC_12( input_thread_t *VAR_0,
                               input_source_t *VAR_1, const char *VAR_2,
                               const char *VAR_3, const char *VAR_4 )
{
    input_thread_private_t *VAR_5 = FUNC_5(VAR_0 );
    vlc_object_t *VAR_6 = FUNC_2(VAR_0);


    stream_t *VAR_7 = FUNC_6( VAR_6, VAR_0, VAR_5->p_es_out,
                                           VAR_5->b_preparsing, VAR_2 );
    if( VAR_7 == ((void*)0) )
        return ((void*)0);

    VAR_7 = FUNC_7( VAR_7 );

    if( VAR_7->pf_read == ((void*)0) && VAR_7->pf_block == ((void*)0)
     && VAR_7->pf_readdir == ((void*)0) )
    {
        FUNC_1( VAR_4,
                     &VAR_1->i_title_start, &VAR_1->i_title_end,
                    &VAR_1->i_seekpoint_start, &VAR_1->i_seekpoint_end );
        return VAR_7;
    }


    char *VAR_8 = FUNC_10( VAR_0, "stream-filter" );
    if( VAR_8 )
    {
        VAR_7 = FUNC_8( VAR_7, VAR_8 );
        FUNC_4( VAR_8 );
    }


    if( FUNC_0( VAR_0, VAR_1, &VAR_7, VAR_4 ) )
        goto error;


    if( FUNC_9( VAR_0, "input-record-native" ) )
        VAR_7 = FUNC_8( VAR_7, "record" );


    demux_t *VAR_9 = FUNC_3( VAR_6, VAR_0, VAR_3, VAR_2, VAR_7,
                                        VAR_5->p_es_out, VAR_5->b_preparsing );
    if( VAR_9 != ((void*)0) )
        return VAR_9;

error:
    FUNC_11( VAR_7 );
    return ((void*)0);
}

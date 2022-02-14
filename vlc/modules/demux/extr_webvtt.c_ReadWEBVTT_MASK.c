
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int webvtt_text_parser_t ;
typedef int webvtt_cue_t ;
struct callback_ctx {int b_ordered; int styles; int regions; TYPE_4__* p_demux; } ;
struct TYPE_11__ {int s; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_10__ {int i_data; int p_data; } ;
struct TYPE_9__ {int i_data; int p_data; } ;
struct TYPE_8__ {int i_count; int p_array; } ;
struct TYPE_12__ {TYPE_3__ styles_headers; TYPE_2__ regions_headers; TYPE_1__ cues; } ;
typedef TYPE_5__ demux_sys_t ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (struct callback_ctx*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_6->p_sys;

    struct callback_ctx VAR_8;
    VAR_8.p_demux = VAR_6;
    VAR_8.b_ordered = 1;

    webvtt_text_parser_t *VAR_9 =
            FUNC_7( &VAR_8, VAR_1,
                                          VAR_0,
                                          VAR_2 );
    if( VAR_9 == ((void*)0) )
        return VAR_3;

    (void) FUNC_3( &VAR_8.regions );
    (void) FUNC_3( &VAR_8.styles );

    char *VAR_10;
    while( (VAR_10 = FUNC_4( VAR_6->s )) )
        FUNC_6( VAR_9, VAR_10 );
    FUNC_6( VAR_9, ((void*)0) );

    if( !VAR_8.b_ordered )
        FUNC_2( VAR_7->cues.p_array, VAR_7->cues.i_count, sizeof(webvtt_cue_t), VAR_5 );

    FUNC_0( VAR_6 );

    FUNC_1( &VAR_8.regions, &VAR_7->regions_headers.p_data,
                                  &VAR_7->regions_headers.i_data );
    FUNC_1( &VAR_8.styles, &VAR_7->styles_headers.p_data,
                                 &VAR_7->styles_headers.i_data );

    FUNC_5( VAR_9 );

    return VAR_4;
}

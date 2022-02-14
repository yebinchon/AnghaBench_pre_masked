
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_3__ {scalar_t__ psz_filters; } ;
typedef TYPE_1__ sout_filters_config_t ;
typedef int audio_format_t ;
typedef int aout_filters_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int const*,int const*,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4( sout_stream_t *VAR_4,
                                         const sout_filters_config_t *VAR_5,
                                         const audio_format_t *VAR_6,
                                         const audio_format_t *VAR_7,
                                         aout_filters_t **VAR_8 )
{


    FUNC_1( VAR_4, "audio-time-stretch", VAR_2 );
    FUNC_1( VAR_4, "audio-filter", VAR_3 );
    if( VAR_5->psz_filters )
        FUNC_3( VAR_4, "audio-filter", VAR_5->psz_filters );
    *VAR_8 = FUNC_0( VAR_4, VAR_6, VAR_7, ((void*)0) );
    FUNC_2( VAR_4, "audio-filter" );
    FUNC_2( VAR_4, "audio-time-stretch" );
    return ( *VAR_8 != ((void*)0) ) ? VAR_1 : VAR_0;
}

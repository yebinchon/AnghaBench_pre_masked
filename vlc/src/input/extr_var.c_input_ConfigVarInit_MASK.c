
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_2__ {int b_preparsing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;

void FUNC_2 ( input_thread_t *VAR_5 )
{


    if( !FUNC_0(VAR_5)->b_preparsing )
    {
        FUNC_1( VAR_5, "video", VAR_0 | VAR_1 );
        FUNC_1( VAR_5, "audio", VAR_0 | VAR_1 );
        FUNC_1( VAR_5, "spu", VAR_0 | VAR_1 );

        FUNC_1( VAR_5, "video-track", VAR_3|VAR_1 );
        FUNC_1( VAR_5, "audio-track", VAR_3|VAR_1 );
        FUNC_1( VAR_5, "sub-track", VAR_3|VAR_1 );

        FUNC_1( VAR_5, "audio-language",
                    VAR_4|VAR_1 );
        FUNC_1( VAR_5, "sub-language",
                    VAR_4|VAR_1 );
        FUNC_1( VAR_5, "menu-language",
                    VAR_4|VAR_1 );

        FUNC_1( VAR_5, "video-track-id",
                    VAR_3|VAR_1 );
        FUNC_1( VAR_5, "audio-track-id",
                    VAR_3|VAR_1 );
        FUNC_1( VAR_5, "sub-track-id",
                    VAR_3|VAR_1 );

        FUNC_1( VAR_5, "sub-file", VAR_4 | VAR_1 );
        FUNC_1( VAR_5, "sub-autodetect-file", VAR_0 |
                    VAR_1 );
        FUNC_1( VAR_5, "sub-autodetect-path", VAR_4 |
                    VAR_1 );
        FUNC_1( VAR_5, "sub-autodetect-fuzzy", VAR_3 |
                    VAR_1 );

        FUNC_1( VAR_5, "sout", VAR_4 | VAR_1 );
        FUNC_1( VAR_5, "sout-all", VAR_0 | VAR_1 );
        FUNC_1( VAR_5, "sout-audio", VAR_0 | VAR_1 );
        FUNC_1( VAR_5, "sout-video", VAR_0 | VAR_1 );
        FUNC_1( VAR_5, "sout-spu", VAR_0 | VAR_1 );
        FUNC_1( VAR_5, "sout-keep", VAR_0 | VAR_1 );

        FUNC_1( VAR_5, "input-repeat",
                    VAR_3|VAR_1 );
        FUNC_1( VAR_5, "start-time", VAR_2|VAR_1 );
        FUNC_1( VAR_5, "stop-time", VAR_2|VAR_1 );
        FUNC_1( VAR_5, "run-time", VAR_2|VAR_1 );
        FUNC_1( VAR_5, "input-fast-seek", VAR_0|VAR_1 );

        FUNC_1( VAR_5, "input-slave",
                    VAR_4 | VAR_1 );

        FUNC_1( VAR_5, "audio-desync",
                    VAR_3 | VAR_1 );
        FUNC_1( VAR_5, "cr-average",
                    VAR_3 | VAR_1 );
        FUNC_1( VAR_5, "clock-synchro",
                    VAR_3 | VAR_1);

        FUNC_1( VAR_5, "bookmarks", VAR_4 | VAR_1 );
        FUNC_1( VAR_5, "programs", VAR_4 | VAR_1 );
        FUNC_1( VAR_5, "program", VAR_3 | VAR_1 );
        FUNC_1( VAR_5, "rate", VAR_2 | VAR_1 );
    }


    FUNC_1( VAR_5, "input-record-native", VAR_0 | VAR_1 );


    FUNC_1( VAR_5, "access", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "demux", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "demux-filter", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "stream-filter", VAR_4 | VAR_1 );


    FUNC_1( VAR_5, "meta-title", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "meta-author", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "meta-artist", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "meta-genre", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "meta-copyright", VAR_4 | VAR_1);
    FUNC_1( VAR_5, "meta-description", VAR_4|VAR_1);
    FUNC_1( VAR_5, "meta-date", VAR_4 | VAR_1 );
    FUNC_1( VAR_5, "meta-url", VAR_4 | VAR_1 );


    FUNC_1( VAR_5, "sub-original-fps", VAR_2 );
}

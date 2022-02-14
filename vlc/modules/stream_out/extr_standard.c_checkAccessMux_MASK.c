
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sout_stream_t ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5( sout_stream_t *VAR_0, char *VAR_1,
                            char *VAR_2 )
{
    if( FUNC_0( VAR_1, "mmsh", 4 ) && !FUNC_0( VAR_2, "asfh", 4 ) )
        FUNC_2( VAR_0, "mmsh output is only valid with asfh mux" );
    else if( !FUNC_0( VAR_1, "file", 4 ) &&
             ( FUNC_0( VAR_2, "mov", 3 ) || FUNC_0( VAR_2, "mp4", 3 ) ) )
        FUNC_2( VAR_0, "mov and mp4 mux are only valid with file output" );
    else if( FUNC_0( VAR_1, "udp", 3 ) )
    {
        if( FUNC_0( VAR_2, "ffmpeg", 6 ) || FUNC_0( VAR_2, "avformat", 8 ) )
        {
            char *VAR_3 = FUNC_4( VAR_0, "sout-avformat-mux" );
            if( !VAR_3 || FUNC_3( VAR_3, "mpegts", 6 ) )
                FUNC_2( VAR_0, "UDP output is only valid with TS mux" );
            FUNC_1( VAR_3 );
        }
        else if( !FUNC_0( VAR_2, "ts", 2 ) )
            FUNC_2( VAR_0, "UDP output is only valid with TS mux" );
    }
}

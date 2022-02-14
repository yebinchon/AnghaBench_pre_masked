
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_1( const char *VAR_0 )
{
    static struct { const char alias[6]; const char mux[32]; } VAR_1[] =
    {
        { "avi", "avi" },
        { "ogg", "ogg" },
        { "ogm", "ogg" },
        { "ogv", "ogg" },
        { "flac","raw" },
        { "mp3", "raw" },
        { "mp4", "mp4" },
        { "mov", "mov" },
        { "moov","mov" },
        { "asf", "asf" },
        { "wma", "asf" },
        { "wmv", "asf" },
        { "trp", "ts" },
        { "ts", "ts" },
        { "mpg", "ps" },
        { "mpeg","ps" },
        { "ps", "ps" },
        { "mpeg1","mpeg1" },
        { "wav", "wav" },
        { "flv", "avformat{mux=flv}" },
        { "mkv", "avformat{mux=matroska}"},
        { "webm", "avformat{mux=webm}"},
    };

    if( !VAR_0 )
        return ((void*)0);

    for( size_t VAR_2 = 0; VAR_2 < sizeof VAR_1 / sizeof *VAR_1; VAR_2++ )
        if( !FUNC_0( VAR_0, VAR_1[VAR_2].alias ) )
            return VAR_1[VAR_2].mux;

    return ((void*)0);
}

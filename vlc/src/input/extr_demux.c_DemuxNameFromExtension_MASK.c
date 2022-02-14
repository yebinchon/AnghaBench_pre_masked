
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* member_0; char* member_1; char const* name; } ;
typedef TYPE_1__ demux_mapping ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char const*,TYPE_1__*,size_t) ;

__attribute__((used)) static const char* FUNC_2( char const* VAR_0,
                                           bool VAR_1 )
{




    static demux_mapping VAR_2[] =
    {
        { "aiff", "aiff" },
        { "asf", "asf" },
        { "au", "au" },
        { "avi", "avi" },
        { "drc", "dirac" },
        { "dv", "dv" },
        { "flac", "flac" },
        { "h264", "h264" },
        { "kar", "smf" },
        { "m3u", "m3u" },
        { "m4a", "mp4" },
        { "m4v", "m4v" },
        { "mid", "smf" },
        { "mka", "mkv" },
        { "mks", "mkv" },
        { "mkv", "mkv" },
        { "moov", "mp4" },
        { "mov", "mp4" },
        { "mp4", "mp4" },
        { "nsv", "nsv" },
        { "oga", "ogg" },
        { "ogg", "ogg" },
        { "ogm", "ogg" },
        { "ogv", "ogg" },
        { "ogx", "ogg" },
        { "opus", "ogg" },
        { "pva", "pva" },
        { "rm", "avformat" },
        { "rmi", "smf" },
        { "spx", "ogg" },
        { "voc", "voc" },
        { "wma", "asf" },
        { "wmv", "asf" },
    };


    static demux_mapping VAR_3[] =
    {
        { "mp3", "mpga" },
        { "ogg", "ogg" },
        { "wma", "asf" },
    };

    struct {
        demux_mapping* data;
        size_t size;

    } VAR_4 = {
        .data = VAR_1 ? VAR_3 : VAR_2,
        .size = VAR_1 ? FUNC_0( VAR_3 ) : FUNC_0( VAR_2 )
    };

    demux_mapping* VAR_5 = FUNC_1( VAR_0, VAR_4.data, VAR_4.size );
    return VAR_5 ? VAR_5->name : ((void*)0);
}

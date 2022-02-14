
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* member_0; char* member_1; char const* name; } ;
typedef TYPE_1__ demux_mapping ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char const*,TYPE_1__*,int ) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0)
{
    static demux_mapping VAR_1[] =
    {
        { "audio/aac", "m4a" },
        { "audio/aacp", "m4a" },
        { "audio/mpeg", "mp3" },

        { "video/dv", "rawdv" },
        { "video/MP2P", "ps" },
        { "video/MP2T", "ts" },
        { "video/nsa", "nsv" },
        { "video/nsv", "nsv" },
    };
    demux_mapping *VAR_2 = FUNC_1( VAR_0, VAR_1, FUNC_0( VAR_1 ) );
    return (VAR_2 != ((void*)0)) ? VAR_2->name : "any";
}

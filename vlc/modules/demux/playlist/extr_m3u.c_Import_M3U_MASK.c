
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ force; } ;
struct TYPE_7__ {char* (* p_sys ) (char const*) ;int pf_control; int pf_readdir; int s; TYPE_1__ obj; } ;
typedef TYPE_2__ stream_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int const*,int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int const*,char*,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,char*) ;
 char* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,int const**,int) ;
 scalar_t__ FUNC_13 (int ,int) ;

int FUNC_14( vlc_object_t *VAR_4 )
{
    stream_t *VAR_5 = (stream_t *)VAR_4;
    const uint8_t *VAR_6;
    ssize_t VAR_7;
    int VAR_8 = 0;

    FUNC_0(VAR_5);
    VAR_7 = FUNC_12( VAR_5->s, &VAR_6, 1024 );
    if( VAR_7 < 8 )
        return VAR_1;


    char *(*VAR_9) (const char *) = FUNC_3;

    if (FUNC_8(VAR_5, ".m3u8")
     || FUNC_10((const char *)VAR_6, "RTSPtext", 8) == 0)
        VAR_9 = FUNC_1;
    else
    if (FUNC_6( VAR_6, "\xef\xbb\xbf", 3) == 0)
    {
        if( VAR_7 < 12 )
            return VAR_1;
        VAR_9 = FUNC_1;
        VAR_8 = 3;
        VAR_6 += VAR_8;
        VAR_7 -= VAR_8;
    }


    char *VAR_10 = FUNC_9(VAR_5->s);
    bool VAR_11;

    if (VAR_5->obj.force)
        VAR_11 = 1;
    else
    if (VAR_10 != ((void*)0)
     && !FUNC_11(VAR_10, "application/vnd.apple.mpegurl"))
        VAR_11 = 0;
    else
    if (FUNC_6(VAR_6, "#EXTM3U", 7 ) == 0
     || (VAR_10 != ((void*)0)
      && (FUNC_11(VAR_10, "application/mpegurl") == 0
       || FUNC_11(VAR_10, "application/x-mpegurl") == 0
       || FUNC_11(VAR_10, "audio/mpegurl") == 0
       || FUNC_11(VAR_10, "vnd.apple.mpegURL") == 0
       || FUNC_11(VAR_10, "audio/x-mpegurl") == 0))
     || FUNC_8(VAR_5, ".m3u8")
     || FUNC_8(VAR_5, ".m3u"))
        VAR_11 = !FUNC_4(VAR_6, VAR_7);
    else
    if (FUNC_8(VAR_5, ".vlc")
     || FUNC_10((const char *)VAR_6, "RTSPtext", 8) == 0
     || FUNC_2(VAR_6, VAR_7))
        VAR_11 = 1;
    else
        VAR_11 = 0;

    FUNC_5(VAR_10);

    if (!VAR_11)
        return VAR_1;

    if (VAR_8 != 0 && FUNC_13(VAR_5->s, VAR_8))
        return VAR_1;

    FUNC_7( VAR_5, "found valid M3U playlist" );
    VAR_5->p_sys = VAR_9;
    VAR_5->pf_readdir = VAR_0;
    VAR_5->pf_control = VAR_3;

    return VAR_2;
}

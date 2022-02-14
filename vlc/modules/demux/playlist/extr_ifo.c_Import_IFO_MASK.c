
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_5__ {int pf_control; int s; int pf_readdir; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int const*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int ,int const**,int) ;

int FUNC_7( vlc_object_t *VAR_5 )
{
    stream_t *VAR_6 = (stream_t *)VAR_5;

    FUNC_0(VAR_6);

    if( !FUNC_3( VAR_6, ".IFO" ) )
        return VAR_2;

    const char *VAR_7 = FUNC_1( VAR_6 );
    if( VAR_7 == ((void*)0) )
        return VAR_2;

    size_t VAR_8 = FUNC_4( VAR_7 );
    if( VAR_8 < 12 )
        return VAR_2;

    const char *VAR_9;
    const char *VAR_10 = &VAR_7[VAR_8 - 12];




    if( !FUNC_5( VAR_10, "VIDEO_TS", 8 ) ||
        !FUNC_5( VAR_10, "VTS_", 4 ) )
    {
        VAR_9 = "DVDVIDEO";
        VAR_6->pf_readdir = VAR_0;
    }

    else if( !FUNC_5( VAR_10, "VR_MANGR", 8 ) )
    {
        VAR_9 = "DVD_RTR_";
        VAR_6->pf_readdir = VAR_1;
    }
    else
        return VAR_2;

    const uint8_t *VAR_11;
    ssize_t VAR_12 = FUNC_6( VAR_6->s, &VAR_11, 8 );
    if( VAR_12 < 8 || FUNC_2( VAR_11, VAR_9, 8 ) )
        return VAR_2;

    VAR_6->pf_control = VAR_4;

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int pf_readdir; int pf_control; int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*) ;
 char* FUNC_6 (int ) ;

int FUNC_7( vlc_object_t *VAR_4 )
{
    stream_t *VAR_5 = (stream_t *)VAR_4;

    FUNC_0(VAR_5);

    char *VAR_6 = FUNC_6( VAR_5->s );

    if( FUNC_5( VAR_5, ".asx" )
     || FUNC_5( VAR_5, ".wax" )
     || FUNC_5( VAR_5, ".wvx" )
     || (VAR_6 != ((void*)0) && (FUNC_4(VAR_6, "video/x-ms-asf") == 0
                       || FUNC_4(VAR_6, "audio/x-ms-wax") == 0)
                      && FUNC_1( VAR_5 ) ) )
    {
        FUNC_3( VAR_5, "found valid ASX playlist" );
        FUNC_2(VAR_6);
    }
    else
    {
        FUNC_2(VAR_6);
        return VAR_1;
    }

    VAR_5->pf_control = VAR_3;
    VAR_5->pf_readdir = VAR_0;
    return VAR_2;
}

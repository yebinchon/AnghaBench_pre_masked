
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
 char* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int const*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int ,int const**,int) ;

int FUNC_7( vlc_object_t *VAR_4 )
{
    stream_t *VAR_5 = (stream_t *)VAR_4;

    FUNC_0(VAR_5);

    if( !FUNC_3( VAR_5, ".BDMV" ) )
        return VAR_1;

    const char *VAR_6 = FUNC_1( VAR_5 );
    if( VAR_6 == ((void*)0) )
        return VAR_1;

    size_t VAR_7 = FUNC_4( VAR_6 );
    if( VAR_7 < 15 )
        return VAR_1;

    const char *VAR_8;
    const char *VAR_9 = &VAR_6[VAR_7 - 10];



    if( !FUNC_5( VAR_9, "INDEX", 5 ) )
    {
        VAR_8 = "INDX0200";
        VAR_5->pf_readdir = VAR_0;
    }
    else
        return VAR_1;

    const uint8_t *VAR_10;
    ssize_t VAR_11 = FUNC_6( VAR_5->s, &VAR_10, 8 );
    if( VAR_11 < 8 || FUNC_2( VAR_10, VAR_8, 8 ) )
        return VAR_1;

    VAR_5->pf_control = VAR_3;

    return VAR_2;
}

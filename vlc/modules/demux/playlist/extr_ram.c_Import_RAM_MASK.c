
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_5__ {int pf_control; int pf_readdir; int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,int const**,int) ;

int FUNC_5( vlc_object_t *VAR_4 )
{
    stream_t *VAR_5 = (stream_t *)VAR_4;
    const uint8_t *VAR_6;

    FUNC_0(VAR_5);
    if( !FUNC_3( VAR_5, ".ram" )
     && !FUNC_3( VAR_5, ".rm" ) )
        return VAR_1;


    if( FUNC_4( VAR_5->s, &VAR_6, 4 ) < 4 )
        return VAR_1;
    if( !FUNC_1( VAR_6, ".ra", 3 ) || !FUNC_1( VAR_6, ".RMF", 4 ) )
    {
        return VAR_1;
    }

    FUNC_2( VAR_5, "found valid RAM playlist" );
    VAR_5->pf_readdir = VAR_0;
    VAR_5->pf_control = VAR_3;

    return VAR_2;
}

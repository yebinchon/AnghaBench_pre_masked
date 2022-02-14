
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_6__ {int force; } ;
struct TYPE_7__ {int pf_control; int pf_readdir; int s; TYPE_1__ obj; } ;
typedef TYPE_2__ stream_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (char const*,char*,int const) ;
 int FUNC_4 (int ,int const**,int) ;

int FUNC_5( vlc_object_t *VAR_4 )
{
    stream_t *VAR_5 = (stream_t *)VAR_4;
    FUNC_0(VAR_5);
    if( !FUNC_2( VAR_5, ".xml" )
     && !VAR_5->obj.force )
        return VAR_1;

    const uint8_t *VAR_6;
    const ssize_t VAR_7 = FUNC_4( VAR_5->s, &VAR_6, 128 );
    if ( VAR_7 < 32 ||
         !FUNC_3( (const char *) VAR_6, "<!DOCTYPE plist ", VAR_7 ) )
        return VAR_1;

    FUNC_1( VAR_5, "using iTunes Media Library reader" );

    VAR_5->pf_readdir = VAR_0;
    VAR_5->pf_control = VAR_3;

    return VAR_2;
}

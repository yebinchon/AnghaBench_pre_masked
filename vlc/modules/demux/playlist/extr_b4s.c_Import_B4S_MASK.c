
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int pf_control; int pf_readdir; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;

int FUNC_2( vlc_object_t *VAR_4 )
{
    stream_t *VAR_5 = (stream_t *)VAR_4;

    FUNC_0(VAR_5);
    if( !FUNC_1( VAR_5, ".b4s" ) )
        return VAR_1;

    VAR_5->pf_readdir = VAR_0;
    VAR_5->pf_control = VAR_3;

    return VAR_2;
}

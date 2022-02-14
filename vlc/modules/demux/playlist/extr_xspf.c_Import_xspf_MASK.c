
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xspf_sys_t ;
typedef int vlc_object_t ;
struct TYPE_5__ {int pf_control; int pf_readdir; int * p_sys; int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(vlc_object_t *VAR_5)
{
    stream_t *VAR_6 = (stream_t *)VAR_5;

    FUNC_0(VAR_6);

    if( !FUNC_3( VAR_6, ".xspf" )
     && !FUNC_4( VAR_6->s, "application/xspf+xml" ) )
        return VAR_1;

    xspf_sys_t *VAR_7 = FUNC_1(1, sizeof (*VAR_7));
    if (FUNC_5(VAR_7 == ((void*)0)))
        return VAR_2;

    FUNC_2(VAR_6, "using XSPF playlist reader");
    VAR_6->p_sys = VAR_7;
    VAR_6->pf_readdir = VAR_0;
    VAR_6->pf_control = VAR_4;

    return VAR_3;
}

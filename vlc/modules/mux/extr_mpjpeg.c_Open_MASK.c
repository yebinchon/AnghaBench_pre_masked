
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * p_sys; int pf_mux; int pf_delstream; int pf_addstream; int pf_control; } ;
typedef TYPE_1__ sout_mux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_5 )
{
    sout_mux_t *VAR_6 = (sout_mux_t*)VAR_5;

    FUNC_0( VAR_6, "Multipart jpeg muxer opened" );

    VAR_6->pf_control = VAR_1;
    VAR_6->pf_addstream = VAR_0;
    VAR_6->pf_delstream = VAR_2;
    VAR_6->pf_mux = VAR_3;
    VAR_6->p_sys = ((void*)0);

    return VAR_4;
}

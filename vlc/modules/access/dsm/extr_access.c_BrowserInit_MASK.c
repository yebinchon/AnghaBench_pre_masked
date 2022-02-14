
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pf_control; int pf_readdir; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int * psz_share; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0( stream_t *VAR_4 )
{
    access_sys_t *VAR_5 = VAR_4->p_sys;

    if( VAR_5->psz_share == ((void*)0) )
        VAR_4->pf_readdir = VAR_1;
    else
        VAR_4->pf_readdir = VAR_0;
    VAR_4->pf_control = VAR_3;

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int pf_control; int pf_seek; int pf_read; TYPE_3__* p_sys; TYPE_1__* s; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_7__ {int * f; } ;
typedef TYPE_3__ stream_sys_t ;
struct TYPE_5__ {int * pf_readdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1 ( vlc_object_t *VAR_6 )
{
    stream_t *VAR_7 = (stream_t*)VAR_6;
    stream_sys_t *VAR_8;

    if( VAR_7->s->pf_readdir != ((void*)0) )
        return VAR_3;


    VAR_7->p_sys = VAR_8 = FUNC_0( sizeof( *VAR_8 ) );
    if( !VAR_8 )
        return VAR_4;

    VAR_8->f = ((void*)0);


    VAR_7->pf_read = VAR_1;
    VAR_7->pf_seek = VAR_2;
    VAR_7->pf_control = VAR_0;

    return VAR_5;
}

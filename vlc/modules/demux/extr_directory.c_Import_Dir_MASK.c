
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int pf_control; int pf_demux; int * p_input_item; TYPE_1__* s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_3__ {int * pf_readdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0( vlc_object_t *VAR_5 )
{
    demux_t *VAR_6 = (demux_t *)VAR_5;

    if( VAR_6->s->pf_readdir == ((void*)0) )
        return VAR_2;
    if( VAR_6->p_input_item == ((void*)0) )
        return VAR_3;

    VAR_6->pf_demux = VAR_1;
    VAR_6->pf_control = VAR_0;

    return VAR_4;
}

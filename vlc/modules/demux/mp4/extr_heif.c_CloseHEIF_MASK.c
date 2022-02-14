
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int fmt; } ;
struct heif_private_t {int p_title; TYPE_1__ current; scalar_t__ id; int p_root; } ;
struct TYPE_4__ {int out; scalar_t__ p_sys; } ;
typedef TYPE_2__ demux_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct heif_private_t*) ;
 int FUNC_4 (int ) ;

void FUNC_5 ( vlc_object_t * VAR_0 )
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    struct heif_private_t *VAR_2 = (void *) VAR_1->p_sys;
    FUNC_0( VAR_2->p_root );
    if( VAR_2->id )
        FUNC_2( VAR_1->out, VAR_2->id );
    FUNC_1( &VAR_2->current.fmt );
    FUNC_4( VAR_2->p_title );
    FUNC_3( VAR_2 );
}

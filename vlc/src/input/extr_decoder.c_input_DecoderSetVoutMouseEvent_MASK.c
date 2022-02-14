
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_mouse_event ;
struct decoder_owner {int mouse_lock; void* mouse_opaque; int mouse_event; } ;
struct TYPE_5__ {scalar_t__ i_cat; } ;
struct TYPE_6__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct decoder_owner* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( decoder_t *VAR_1, vlc_mouse_event VAR_2,
                                    void *VAR_3 )
{
    struct decoder_owner *VAR_4 = FUNC_1( VAR_1 );
    FUNC_0( VAR_1->fmt_in.i_cat == VAR_0 );

    FUNC_2( &VAR_4->mouse_lock );

    VAR_4->mouse_event = VAR_2;
    VAR_4->mouse_opaque = VAR_3;

    FUNC_3( &VAR_4->mouse_lock );
}

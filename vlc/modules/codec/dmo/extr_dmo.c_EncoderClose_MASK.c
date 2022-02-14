
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ encoder_t ;
struct TYPE_9__ {int hmsdmo_dll; TYPE_2__* p_dmo; } ;
typedef TYPE_4__ encoder_sys_t ;
struct TYPE_7__ {TYPE_1__* vt; } ;
struct TYPE_6__ {int (* Release ) (int *) ;} ;
typedef int IUnknown ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

void FUNC_4( vlc_object_t *VAR_0 )
{
    encoder_t *VAR_1 = (encoder_t*)VAR_0;
    encoder_sys_t *VAR_2 = VAR_1->p_sys;

    if( !VAR_2 ) return;

    if( VAR_2->p_dmo ) VAR_2->p_dmo->vt->Release( (IUnknown *)VAR_2->p_dmo );
    FUNC_1( VAR_2->hmsdmo_dll );


    FUNC_0();

    FUNC_2( VAR_2 );
}

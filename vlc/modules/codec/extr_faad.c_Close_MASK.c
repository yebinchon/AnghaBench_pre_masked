
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int hfaad; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_1 )
{
    decoder_t *VAR_2 = (decoder_t *)VAR_1;
    decoder_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_1( VAR_3->hfaad );
    FUNC_0( VAR_3, VAR_0 );
    FUNC_2( VAR_3 );
}

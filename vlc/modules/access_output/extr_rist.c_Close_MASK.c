
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_5__ {int senderthread; int ristthread; } ;
typedef TYPE_2__ sout_access_out_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3( vlc_object_t * VAR_0 )
{
    sout_access_out_t *VAR_1 = (sout_access_out_t*)VAR_0;
    sout_access_out_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_1(VAR_2->ristthread);
    FUNC_1(VAR_2->senderthread);

    FUNC_2(VAR_2->ristthread, ((void*)0));
    FUNC_2(VAR_2->senderthread, ((void*)0));

    FUNC_0( VAR_1 );
}

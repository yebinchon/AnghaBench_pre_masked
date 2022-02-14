
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int psz_sout; int p_stream; } ;
typedef TYPE_1__ sout_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4( sout_instance_t * VAR_0 )
{

    FUNC_1( VAR_0->p_stream, ((void*)0) );


    FUNC_0( VAR_0->psz_sout );

    FUNC_2( &VAR_0->lock );


    FUNC_3(VAR_0);
}

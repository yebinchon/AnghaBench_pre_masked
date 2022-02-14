
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {TYPE_4__* b25stream; scalar_t__ p_instance; } ;
struct TYPE_12__ {int attachments; int pids; int csa_lock; TYPE_1__ arib; int programs; scalar_t__ csa; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_13__ {int * s; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,char*,int ,void*) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_13( vlc_object_t *VAR_2 )
{
    demux_t *VAR_3 = (demux_t*)VAR_2;
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_2( VAR_3, FUNC_1(VAR_4, 0) );

    FUNC_10( &VAR_4->csa_lock );
    if( VAR_4->csa )
    {
        FUNC_7( VAR_3, "ts-csa-ck", VAR_0, (void *)1 );
        FUNC_7( VAR_3, "ts-csa2-ck", VAR_0, ((void*)0) );
        FUNC_4( VAR_4->csa );
    }
    FUNC_11( &VAR_4->csa_lock );

    FUNC_0( VAR_4->programs );






    if ( VAR_4->arib.b25stream )
    {
        VAR_4->arib.b25stream->s = ((void*)0);
        FUNC_12( VAR_4->arib.b25stream );
    }

    FUNC_9( &VAR_4->csa_lock );


    FUNC_6( VAR_3, &VAR_4->pids );


    FUNC_8( &VAR_4->attachments, VAR_1, ((void*)0) );

    FUNC_5( VAR_4 );
}

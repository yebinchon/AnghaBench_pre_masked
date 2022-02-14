
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_9__ {scalar_t__ s_addr; } ;
struct TYPE_8__ {TYPE_2__ sin_addr; } ;
struct TYPE_11__ {int fd; int sAMT; int sQuery; int relay; int relayDisco; TYPE_1__ mcastSrcAddr; scalar_t__ tryAMT; int updateTimer; } ;
typedef TYPE_4__ access_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t*)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_5( VAR_2->updateTimer );


    if ( VAR_2->tryAMT )
    {

        if( VAR_2->mcastSrcAddr.sin_addr.s_addr )
            FUNC_1( VAR_1 );
        else
            FUNC_0( VAR_1 );


        FUNC_2( VAR_1, VAR_2->relayDisco, 1 );
    }
    FUNC_3( VAR_2->relay );

    FUNC_4( VAR_2->fd );
    if( VAR_2->sAMT != -1 )
        FUNC_4( VAR_2->sAMT );
    if( VAR_2->sQuery != -1 )
        FUNC_4( VAR_2->sQuery );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cdtpid; scalar_t__ tdtpid; scalar_t__ eitpid; int handle; } ;
typedef TYPE_1__ ts_si_t ;
typedef int demux_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5( demux_t *VAR_0, ts_si_t *VAR_1 )
{
    if( FUNC_2( VAR_1->handle ) )
        FUNC_1( VAR_1->handle );
    FUNC_3( VAR_1->handle );
    if( VAR_1->eitpid )
        FUNC_0( VAR_0, VAR_1->eitpid );
    if( VAR_1->tdtpid )
        FUNC_0( VAR_0, VAR_1->tdtpid );
    if( VAR_1->cdtpid )
        FUNC_0( VAR_0, VAR_1->cdtpid );
    FUNC_4( VAR_1 );
}

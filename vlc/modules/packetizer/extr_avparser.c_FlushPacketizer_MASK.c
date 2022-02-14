
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pf_packetize; int * p_sys; } ;
typedef TYPE_1__ decoder_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_2 )
{
    FUNC_1( FUNC_0( VAR_2 ) );
    VAR_2->p_sys = ((void*)0);
    int VAR_3 = FUNC_2( FUNC_0( VAR_2 ) );
    if ( VAR_3 != VAR_1 )
    {
        FUNC_3( VAR_2, "failed to flush with error %d", VAR_3 );
        VAR_2->pf_packetize = VAR_0;
    }
}

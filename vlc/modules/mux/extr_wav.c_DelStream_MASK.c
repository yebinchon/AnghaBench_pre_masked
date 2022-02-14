
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_access; } ;
typedef TYPE_1__ sout_mux_t ;
typedef int sout_input_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5( sout_mux_t *VAR_1, sout_input_t *VAR_2 )
{
    FUNC_1(VAR_2);
    FUNC_2( VAR_1, "removing input" );

    FUNC_2( VAR_1, "writing header data" );
    if( FUNC_3( VAR_1->p_access, 0 ) == VAR_0 )
    {
        FUNC_4( VAR_1->p_access, FUNC_0( VAR_1 ) );
    }
}

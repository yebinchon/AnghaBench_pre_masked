
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_2__ {int i_state; int p_item; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( input_thread_t *VAR_1, int VAR_2,
                               vlc_tick_t VAR_3 )
{
    if( FUNC_2(VAR_1)->i_state == VAR_2 )
        return;

    FUNC_2(VAR_1)->i_state = VAR_2;
    if( VAR_2 == VAR_0 )
        FUNC_1( FUNC_2(VAR_1)->p_item, 1 );
    FUNC_0( VAR_1, VAR_2, VAR_3 );
}

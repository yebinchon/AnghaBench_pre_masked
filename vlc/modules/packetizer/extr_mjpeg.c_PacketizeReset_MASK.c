
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_4__ {int i_next_block_flags; int date; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2( void *VAR_2, bool VAR_3 )
{
    FUNC_0(VAR_3);
    decoder_t *VAR_4 = VAR_2;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;

    FUNC_1( &VAR_5->date, VAR_1 );
    VAR_5->i_next_block_flags = VAR_0;
}

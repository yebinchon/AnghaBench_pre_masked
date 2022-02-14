
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int bytestream; int pts; scalar_t__ i_offset; int i_state; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(decoder_t *VAR_2)
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;

    VAR_3->i_state = VAR_0;
    VAR_3->i_offset = 0;
    FUNC_1( &VAR_3->pts, VAR_1 );
    FUNC_0(&VAR_3->bytestream);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_private; int (* pf_reset ) (int ,int) ;scalar_t__ i_offset; int bytestream; int i_state; } ;
typedef TYPE_1__ packetizer_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2( packetizer_t *VAR_1 )
{
    VAR_1->i_state = VAR_0;
    FUNC_0( &VAR_1->bytestream );
    VAR_1->i_offset = 0;
    VAR_1->pf_reset( VAR_1->p_private, 1 );
}

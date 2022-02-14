
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_7__ {TYPE_1__* p_root; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_5__ {int p_child; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1( decoder_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_1->p_sys;
    FUNC_0( &VAR_2->p_root->p_child, VAR_0 );
}

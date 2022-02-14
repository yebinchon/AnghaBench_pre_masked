
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_head; int ** pp_append; } ;
struct TYPE_6__ {int * p_head; int ** pp_append; } ;
struct TYPE_7__ {TYPE_1__ leading; TYPE_2__ frame; } ;
typedef TYPE_3__ decoder_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( decoder_sys_t *VAR_0 )
{
    FUNC_0( VAR_0->frame.p_head );
    FUNC_0( VAR_0->leading.p_head );
    VAR_0->frame.p_head = ((void*)0);
    VAR_0->frame.pp_append = &VAR_0->frame.p_head;
    VAR_0->leading.p_head = ((void*)0);
    VAR_0->leading.pp_append = &VAR_0->leading.p_head;
}

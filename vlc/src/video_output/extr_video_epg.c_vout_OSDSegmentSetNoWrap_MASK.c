
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* style; struct TYPE_5__* p_next; } ;
typedef TYPE_2__ text_segment_t ;
struct TYPE_4__ {int i_features; int e_wrapinfo; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(text_segment_t *VAR_2)
{
    for( ; VAR_2; VAR_2 = VAR_2->p_next )
    {
        VAR_2->style->e_wrapinfo = VAR_1;
        VAR_2->style->i_features |= VAR_0;
    }
}

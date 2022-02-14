
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* p_next; } ;
typedef TYPE_2__ vlc_css_rule_t ;
struct TYPE_6__ {TYPE_2__** pp_append; } ;
struct TYPE_8__ {TYPE_1__ rules; } ;
typedef TYPE_3__ vlc_css_parser_t ;



void FUNC_0( vlc_css_parser_t *VAR_0,
                                           vlc_css_rule_t *VAR_1 )
{
    (*VAR_0->rules.pp_append) = VAR_1;
    VAR_0->rules.pp_append = &VAR_1->p_next;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_top_field_first; int i_nb_fields; int b_progressive; int b_still; int b_force; int date; } ;
typedef TYPE_1__ picture_t ;



void FUNC_0( picture_t *VAR_0, const picture_t *VAR_1 )
{
    VAR_0->date = VAR_1->date;
    VAR_0->b_force = VAR_1->b_force;
    VAR_0->b_still = VAR_1->b_still;

    VAR_0->b_progressive = VAR_1->b_progressive;
    VAR_0->i_nb_fields = VAR_1->i_nb_fields;
    VAR_0->b_top_field_first = VAR_1->b_top_field_first;
}

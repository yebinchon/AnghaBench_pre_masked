
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_force; int b_still; int b_progressive; int i_nb_fields; int b_top_field_first; int date; } ;
typedef TYPE_1__ picture_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1( picture_t *VAR_1 )
{

    VAR_1->date = VAR_0;
    VAR_1->b_force = 0;
    VAR_1->b_still = 0;
    VAR_1->b_progressive = 0;
    VAR_1->i_nb_fields = 2;
    VAR_1->b_top_field_first = 0;
    FUNC_0( VAR_1 );
}

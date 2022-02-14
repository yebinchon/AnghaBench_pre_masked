
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int i_int; int f_float; } ;
typedef TYPE_4__ vlc_value_t ;
struct TYPE_10__ {int i_int; float f_float; } ;
struct TYPE_9__ {int i_int; int f_float; } ;
struct TYPE_8__ {int i_int; int f_float; } ;
struct TYPE_12__ {int i_type; TYPE_3__ step; TYPE_2__ max; TYPE_1__ min; } ;
typedef TYPE_5__ variable_t ;




 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(variable_t *VAR_1, vlc_value_t *VAR_2)
{

    switch (VAR_1->i_type & VAR_0)
    {
        case 128:
            if (VAR_2->i_int < VAR_1->min.i_int)
               VAR_2->i_int = VAR_1->min.i_int;
            else if (VAR_2->i_int > VAR_1->max.i_int)
                VAR_2->i_int = VAR_1->max.i_int;
            if (VAR_1->step.i_int != 0 && (VAR_2->i_int % VAR_1->step.i_int))
            {
                if (VAR_2->i_int > 0)
                    VAR_2->i_int = (VAR_2->i_int + (VAR_1->step.i_int / 2))
                                 / VAR_1->step.i_int * VAR_1->step.i_int;
                else
                    VAR_2->i_int = (VAR_2->i_int - (VAR_1->step.i_int / 2))
                                 / VAR_1->step.i_int * VAR_1->step.i_int;
            }
            break;

        case 129:
            if (FUNC_1(VAR_2->f_float, VAR_1->min.f_float))
                VAR_2->f_float = VAR_1->min.f_float;
            else if (FUNC_0(VAR_2->f_float, VAR_1->max.f_float))
                VAR_2->f_float = VAR_1->max.f_float;
            if (VAR_1->step.f_float != 0.f)
                VAR_2->f_float = VAR_1->step.f_float
                              * FUNC_2(VAR_2->f_float / VAR_1->step.f_float);
            break;
    }
}

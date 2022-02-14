
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_11__ {int i_control; TYPE_5__* control; } ;
typedef TYPE_4__ input_thread_private_t ;
struct TYPE_9__ {scalar_t__ f_val; } ;
struct TYPE_8__ {scalar_t__ i_val; } ;
struct TYPE_10__ {TYPE_2__ pos; TYPE_1__ time; } ;
struct TYPE_12__ {int i_type; TYPE_3__ param; } ;
typedef TYPE_5__ input_control_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 TYPE_4__* FUNC_0 (int *) ;

__attribute__((used)) static size_t FUNC_1( input_thread_t *VAR_9,
                                            input_control_t *VAR_10 )
{
    input_thread_private_t *VAR_11 = FUNC_0(VAR_9);

    if( VAR_11->i_control == 0 )
        return 0;

    input_control_t *VAR_12 = &VAR_11->control[VAR_11->i_control - 1];
    const int VAR_13 = VAR_12->i_type;
    const int VAR_14 = VAR_10->i_type;

    if( VAR_13 == VAR_14 )
    {
        if ( VAR_14 == VAR_6 ||
             VAR_14 == VAR_4 ||
             VAR_14 == VAR_2 ||
             VAR_14 == VAR_7 ||
             VAR_14 == VAR_3 ||
             VAR_14 == VAR_8 ||
             VAR_14 == VAR_5 )
        {
            return VAR_11->i_control - 1;
        }
        else if ( VAR_14 == VAR_1 )
        {
            VAR_10->param.time.i_val += VAR_12->param.time.i_val;
            return VAR_11->i_control - 1;
        }
        else if ( VAR_14 == VAR_0 )
        {
            VAR_10->param.pos.f_val += VAR_12->param.pos.f_val;
            return VAR_11->i_control - 1;
        }
    }

    return VAR_11->i_control;
}

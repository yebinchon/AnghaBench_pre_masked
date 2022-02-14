
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* manager; } ;
struct TYPE_9__ {scalar_t__ std_error; scalar_t__ std_output; scalar_t__ std_input; scalar_t__ stdin_data_size; } ;
struct TYPE_10__ {TYPE_2__ exec_context; } ;
struct TYPE_8__ {scalar_t__ default_std_error; scalar_t__ default_std_output; } ;
typedef TYPE_3__ Service ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(Service *VAR_3) {
        FUNC_1(VAR_3);




        if (VAR_3->exec_context.std_error == VAR_2 &&
            VAR_3->exec_context.std_output == VAR_2 &&
            VAR_3->exec_context.std_input == VAR_1)
                VAR_3->exec_context.std_error = FUNC_0(VAR_3)->manager->default_std_error;

        if (VAR_3->exec_context.std_output == VAR_2 &&
            VAR_3->exec_context.std_input == VAR_1)
                VAR_3->exec_context.std_output = FUNC_0(VAR_3)->manager->default_std_output;

        if (VAR_3->exec_context.std_input == VAR_1 &&
            VAR_3->exec_context.stdin_data_size > 0)
                VAR_3->exec_context.std_input = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ std_input; scalar_t__ stdin_data_size; } ;
typedef scalar_t__ ExecInput ;
typedef TYPE_1__ ExecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(
                const ExecContext *VAR_3,
                int VAR_4,
                bool VAR_5) {

        ExecInput VAR_6;

        FUNC_0(VAR_3);

        VAR_6 = VAR_3->std_input;

        if (FUNC_1(VAR_6) && !VAR_5)
                return VAR_1;

        if (VAR_6 == VAR_2 && VAR_4 < 0)
                return VAR_1;

        if (VAR_6 == VAR_0 && VAR_3->stdin_data_size == 0)
                return VAR_1;

        return VAR_6;
}

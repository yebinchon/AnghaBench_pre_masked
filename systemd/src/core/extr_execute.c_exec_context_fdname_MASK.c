
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * stdio_fdname; int std_error; int std_output; int std_input; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__ const*) ;

const char* FUNC_1(const ExecContext *VAR_2, int VAR_3) {
        FUNC_0(VAR_2);

        switch (VAR_3) {

        case 129:
                if (VAR_2->std_input != VAR_0)
                        return ((void*)0);

                return VAR_2->stdio_fdname[129] ?: "stdin";

        case 128:
                if (VAR_2->std_output != VAR_1)
                        return ((void*)0);

                return VAR_2->stdio_fdname[128] ?: "stdout";

        case 130:
                if (VAR_2->std_error != VAR_1)
                        return ((void*)0);

                return VAR_2->stdio_fdname[130] ?: "stderr";

        default:
                return ((void*)0);
        }
}

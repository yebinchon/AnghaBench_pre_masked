
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; char* path; char* source; } ;
typedef TYPE_1__ UnitFileChange ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static void FUNC_2(UnitFileChange *VAR_2, unsigned VAR_3) {
        unsigned VAR_4;

        FUNC_0(VAR_3 == 0 || VAR_2);

        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
                if (VAR_2[VAR_4].type == VAR_1)
                        FUNC_1("rm '%s'\n", VAR_2[VAR_4].path);
                else if (VAR_2[VAR_4].type == VAR_0)
                        FUNC_1("ln -s '%s' '%s'\n", VAR_2[VAR_4].source, VAR_2[VAR_4].path);
        }
}

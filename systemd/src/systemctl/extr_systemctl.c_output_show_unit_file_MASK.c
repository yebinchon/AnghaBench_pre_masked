
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int path; } ;
typedef TYPE_1__ UnitFileList ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char) ;
 int FUNC_3 (char**,char const*) ;
 int FUNC_4 (char**,int ,int ) ;
 int FUNC_5 (char**) ;
 char const* FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(const UnitFileList *VAR_2, char **VAR_3, char **VAR_4) {
        FUNC_0(VAR_2);

        if (!FUNC_4(VAR_4, FUNC_1(VAR_2->path), VAR_0))
                return 0;

        if (!FUNC_5(VAR_1)) {
                const char *VAR_5;

                VAR_5 = FUNC_2(VAR_2->path, '.');
                if (!VAR_5)
                        return 0;

                if (!FUNC_3(VAR_1, VAR_5+1))
                        return 0;
        }

        if (!FUNC_5(VAR_3) &&
            !FUNC_3(VAR_3, FUNC_6(VAR_2->state)))
                return 0;

        return 1;
}

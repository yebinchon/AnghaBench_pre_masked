
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
typedef TYPE_1__ UnitFileList ;


 char const* FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (int ,char) ;

__attribute__((used)) static int FUNC_3(const UnitFileList *VAR_0, const UnitFileList *VAR_1) {
        const char *VAR_2, *VAR_3;

        VAR_2 = FUNC_2(VAR_0->path, '.');
        VAR_3 = FUNC_2(VAR_1->path, '.');

        if (VAR_2 && VAR_3) {
                int VAR_4;

                VAR_4 = FUNC_1(VAR_2, VAR_3);
                if (VAR_4 != 0)
                        return VAR_4;
        }

        return FUNC_1(FUNC_0(VAR_0->path), FUNC_0(VAR_1->path));
}

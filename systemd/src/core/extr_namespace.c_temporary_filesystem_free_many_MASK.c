
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* options; struct TYPE_4__* path; } ;
typedef TYPE_1__ TemporaryFileSystem ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(TemporaryFileSystem *VAR_0, size_t VAR_1) {
        size_t VAR_2;

        FUNC_0(VAR_0 || VAR_1 == 0);

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
                FUNC_1(VAR_0[VAR_2].path);
                FUNC_1(VAR_0[VAR_2].options);
        }

        FUNC_1(VAR_0);
}

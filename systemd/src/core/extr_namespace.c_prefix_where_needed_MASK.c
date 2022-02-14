
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_prefix; int path_malloc; } ;
typedef TYPE_1__ MountEntry ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(MountEntry *VAR_1, size_t VAR_2, const char *VAR_3) {
        size_t VAR_4;



        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
                char *VAR_5;

                if (VAR_1[VAR_4].has_prefix)
                        continue;

                VAR_5 = FUNC_2(VAR_3, FUNC_1(VAR_1+VAR_4));
                if (!VAR_5)
                        return -VAR_0;

                FUNC_0(VAR_1[VAR_4].path_malloc, VAR_5);
                VAR_1[VAR_4].has_prefix = 1;
        }

        return 0;
}

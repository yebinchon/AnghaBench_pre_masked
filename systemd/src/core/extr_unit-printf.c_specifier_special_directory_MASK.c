
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_4__ {int * prefix; } ;


 int VAR_0 ;
 size_t FUNC_0 (void const*) ;
 int FUNC_1 (TYPE_2__ const*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(char VAR_1, const void *VAR_2, const void *VAR_3, char **VAR_4) {
        const Unit *VAR_5 = VAR_3;
        char *VAR_6 = ((void*)0);

        FUNC_1(VAR_5);

        VAR_6 = FUNC_2(VAR_5->manager->prefix[FUNC_0(VAR_2)]);
        if (!VAR_6)
                return -VAR_0;

        *VAR_4 = VAR_6;
        return 0;
}

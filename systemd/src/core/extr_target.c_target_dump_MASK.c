
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_7__ {int state; } ;
typedef TYPE_1__ Target ;
typedef TYPE_1__ FILE ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,char const*,char*) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Unit *VAR_0, FILE *VAR_1, const char *VAR_2) {
        Target *VAR_3 = FUNC_0(VAR_0);

        FUNC_1(VAR_3);
        FUNC_1(VAR_1);

        FUNC_2(VAR_1,
                "%sTarget State: %s\n",
                VAR_2, FUNC_3(VAR_3->state));
}

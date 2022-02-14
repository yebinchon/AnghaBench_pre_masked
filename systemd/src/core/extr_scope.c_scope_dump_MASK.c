
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int buf_runtime ;
typedef int Unit ;
struct TYPE_10__ {int kill_context; int runtime_max_usec; int result; int state; } ;
typedef TYPE_1__ Scope ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,char const*) ;
 char* FUNC_4 (char*,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,char const*,char*,char const*,char*,char const*,char*) ;
 int FUNC_6 (int *,TYPE_1__*,char const*) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(Unit *VAR_2, FILE *VAR_3, const char *VAR_4) {
        Scope *VAR_5 = FUNC_0(VAR_2);
        char VAR_6[VAR_0];

        FUNC_2(VAR_5);
        FUNC_2(VAR_3);

        FUNC_5(VAR_3,
                "%sScope State: %s\n"
                "%sResult: %s\n"
                "%sRuntimeMaxSec: %s\n",
                VAR_4, FUNC_8(VAR_5->state),
                VAR_4, FUNC_7(VAR_5->result),
                VAR_4, FUNC_4(VAR_6, sizeof(VAR_6), VAR_5->runtime_max_usec, VAR_1));

        FUNC_3(FUNC_1(VAR_5), VAR_3, VAR_4);
        FUNC_6(&VAR_5->kill_context, VAR_3, VAR_4);
}

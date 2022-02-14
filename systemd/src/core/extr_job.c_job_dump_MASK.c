
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int id; int irreversible; int state; int type; TYPE_1__* unit; } ;
struct TYPE_9__ {char* id; } ;
typedef TYPE_2__ Job ;
typedef TYPE_2__ FILE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,char const*,int,char const*,char*,char*,char const*,char*,char const*,char*,char const*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (int ) ;

void FUNC_7(Job *VAR_0, FILE *VAR_1, const char *VAR_2) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = FUNC_5(VAR_2);

        FUNC_1(VAR_1,
                "%s-> Job %u:\n"
                "%s\tAction: %s -> %s\n"
                "%s\tState: %s\n"
                "%s\tIrreversible: %s\n"
                "%s\tMay GC: %s\n",
                VAR_2, VAR_0->id,
                VAR_2, VAR_0->unit->id, FUNC_4(VAR_0->type),
                VAR_2, FUNC_3(VAR_0->state),
                VAR_2, FUNC_6(VAR_0->irreversible),
                VAR_2, FUNC_6(FUNC_2(VAR_0)));
}

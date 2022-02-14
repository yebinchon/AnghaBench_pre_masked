
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UnitDependency ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ,...) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(Unit *VAR_7, const char *VAR_8, UnitDependency VAR_9) {
        FUNC_1(VAR_7);


        if (!FUNC_0(VAR_9, VAR_3, VAR_2, VAR_1, VAR_0, VAR_4, VAR_6, VAR_5))
                return;

        if (FUNC_3(VAR_7->id, VAR_8))
                FUNC_2(VAR_7, "Dependency %s=%s dropped", FUNC_5(VAR_9), VAR_7->id);
        else
                FUNC_2(VAR_7, "Dependency %s=%s dropped, merged into %s", FUNC_5(VAR_9), FUNC_4(VAR_8), VAR_7->id);
}

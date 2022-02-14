
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int UnitDependencyMask ;
struct TYPE_8__ {scalar_t__ type; int slice; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(Unit *VAR_6) {
        UnitDependencyMask VAR_7;
        FUNC_3(VAR_6);

        if (!FUNC_1(VAR_6))
                return 0;




        VAR_7 = VAR_6->type == VAR_5 ? VAR_3 : VAR_2;

        if (FUNC_2(VAR_6->slice))
                return FUNC_4(VAR_6, VAR_1, VAR_4, FUNC_0(VAR_6->slice), 1, VAR_7);

        if (FUNC_6(VAR_6, VAR_0))
                return 0;

        return FUNC_5(VAR_6, VAR_1, VAR_4, VAR_0, 1, VAR_7);
}

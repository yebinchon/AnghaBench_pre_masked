
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitDependencyMask ;
typedef int UnitDependency ;
typedef int Unit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int,int ) ;

int FUNC_2(Unit *VAR_0, UnitDependency VAR_1, UnitDependency VAR_2, Unit *VAR_3, bool VAR_4, UnitDependencyMask VAR_5) {
        int VAR_6;

        FUNC_0(VAR_0);

        VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UnitDependencyMask ;
struct TYPE_9__ {int manager; } ;
struct TYPE_8__ {scalar_t__ from_fragment; } ;
typedef int MountParameters ;
typedef TYPE_1__ Mount ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(Mount *VAR_6) {
        UnitDependencyMask VAR_7;
        MountParameters *VAR_8;
        int VAR_9;

        FUNC_2(VAR_6);

        if (!FUNC_0(FUNC_1(VAR_6)->manager))
                return 0;

        VAR_8 = FUNC_3(VAR_6);
        if (!VAR_8)
                return 0;

        if (!FUNC_4(VAR_8))
                return 0;

        VAR_7 = VAR_6->from_fragment ? VAR_3 : VAR_4;

        VAR_9 = FUNC_5(FUNC_1(VAR_6), VAR_2, VAR_5, VAR_0, 1, VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_5(FUNC_1(VAR_6), VAR_2, VAR_5, VAR_1, 1, VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        return 0;
}

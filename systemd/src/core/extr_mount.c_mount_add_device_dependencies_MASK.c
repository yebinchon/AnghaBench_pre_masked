
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UnitDependencyMask ;
typedef int UnitDependency ;
struct TYPE_11__ {scalar_t__ from_proc_self_mountinfo; int where; } ;
struct TYPE_10__ {int what; } ;
typedef TYPE_1__ MountParameters ;
typedef TYPE_2__ Mount ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(Mount *VAR_4) {
        UnitDependencyMask VAR_5;
        MountParameters *VAR_6;
        UnitDependency VAR_7;
        int VAR_8;

        FUNC_1(VAR_4);

        VAR_6 = FUNC_2(VAR_4);
        if (!VAR_6)
                return 0;

        if (!VAR_6->what)
                return 0;

        if (FUNC_4(VAR_6))
                return 0;

        if (!FUNC_3(VAR_6->what))
                return 0;




        if (FUNC_6(VAR_6->what, "/dev/root"))
                return 0;

        if (FUNC_6(VAR_4->where, "/"))
                return 0;






        VAR_7 = FUNC_5(VAR_4) ? VAR_0 : VAR_3;


        VAR_5 = VAR_4->from_proc_self_mountinfo ? VAR_2 : VAR_1;

        VAR_8 = FUNC_7(FUNC_0(VAR_4), VAR_6->what, VAR_7, VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ job_id; int active_state; int following; int id; } ;
typedef TYPE_1__ UnitInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char**,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(const UnitInfo *VAR_4, char **VAR_5) {
        FUNC_0(VAR_4);

        if (!FUNC_4(VAR_5, VAR_4->id, VAR_0))
                return 0;

        if (VAR_3 && !FUNC_3(VAR_3, FUNC_6(VAR_4->id)))
                return 0;

        if (VAR_1)
                return 1;




        if (!FUNC_1(VAR_4->following))
                return 0;

        if (!FUNC_5(VAR_2))
                return 1;



        if (VAR_4->job_id > 0)
                return 1;

        if (FUNC_2(VAR_4->active_state, "inactive"))
                return 0;

        return 1;
}

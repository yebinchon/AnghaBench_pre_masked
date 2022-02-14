
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {int state; int deserialized_state; } ;
struct TYPE_3__ {scalar_t__ deserialized_state; scalar_t__ state; } ;
typedef int Manager ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static bool FUNC_6(Manager *VAR_5, bool VAR_6) {
        Unit *VAR_7;

        FUNC_4(VAR_5);





        if (FUNC_1(VAR_5))
                return 0;

        VAR_7 = FUNC_5(VAR_5, VAR_4);
        if (!VAR_7)
                return 0;
        if ((VAR_6 ? FUNC_3(VAR_7)->deserialized_state : FUNC_3(VAR_7)->state) != VAR_2)
                return 0;

        VAR_7 = FUNC_5(VAR_5, VAR_3);
        if (!VAR_7)
                return 0;
        if (!FUNC_0((VAR_6 ? FUNC_2(VAR_7)->deserialized_state : FUNC_2(VAR_7)->state), VAR_1, VAR_0))
                return 0;

        return 1;
}

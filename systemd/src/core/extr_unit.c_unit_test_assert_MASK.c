
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int assert_result; int asserts; int assert_timestamp; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_4(Unit *VAR_2) {
        FUNC_0(VAR_2);

        FUNC_2(&VAR_2->assert_timestamp);
        VAR_2->assert_result = FUNC_1(VAR_2->asserts, VAR_0, VAR_1, VAR_2);

        FUNC_3(VAR_2);

        return VAR_2->assert_result;
}

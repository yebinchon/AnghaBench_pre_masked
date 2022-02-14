
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
typedef TYPE_1__ Unit ;
struct TYPE_12__ {scalar_t__ result; } ;
typedef scalar_t__ ServiceResult ;
typedef TYPE_2__ Service ;
typedef TYPE_1__ Manager ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char const*,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, Manager *VAR_1, Unit *VAR_2, ServiceResult VAR_3) {
        Service *VAR_4 = ((void*)0);

        FUNC_2(VAR_1);
        FUNC_2(VAR_2);

        FUNC_5(VAR_1, VAR_2);

        VAR_4 = FUNC_0(VAR_2);

        if (VAR_4->result != VAR_3) {
                FUNC_3("%s: %s: service end result %s, expected %s",
                          VAR_0, VAR_2->id,
                          FUNC_4(VAR_4->result),
                          FUNC_4(VAR_3));
                FUNC_1();
        }
}

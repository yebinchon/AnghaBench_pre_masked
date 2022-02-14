
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int perpetual; } ;
typedef TYPE_1__ Unit ;
struct TYPE_10__ {int deserialized_state; } ;
typedef int Slice ;
typedef char const Manager ;


 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 TYPE_1__* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*,int,char const*,TYPE_1__**) ;

__attribute__((used)) static int FUNC_7(Manager *VAR_1, const char *VAR_2, Unit **VAR_3) {
        Unit *VAR_4;
        int VAR_5;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        VAR_4 = FUNC_3(VAR_1, VAR_2);
        if (!VAR_4) {
                VAR_5 = FUNC_6(VAR_1, sizeof(Slice), VAR_2, &VAR_4);
                if (VAR_5 < 0)
                        return FUNC_2(VAR_5, "Failed to allocate the special %s unit: %m", VAR_2);
        }

        VAR_4->perpetual = 1;
        FUNC_0(VAR_4)->deserialized_state = VAR_0;

        FUNC_5(VAR_4);
        FUNC_4(VAR_4);

        if (VAR_3)
                *VAR_3 = VAR_4;

        return 0;
}

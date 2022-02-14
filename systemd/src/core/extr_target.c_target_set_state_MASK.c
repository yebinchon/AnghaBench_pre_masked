
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ TargetState ;
struct TYPE_8__ {scalar_t__ state; } ;
typedef TYPE_1__ Target ;
struct TYPE_9__ {int id; } ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int * VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(Target *VAR_1, TargetState VAR_2) {
        TargetState VAR_3;
        FUNC_1(VAR_1);

        if (VAR_1->state != VAR_2)
                FUNC_2(FUNC_0(VAR_1), 0);

        VAR_3 = VAR_1->state;
        VAR_1->state = VAR_2;

        if (VAR_2 != VAR_3)
                FUNC_3("%s changed %s -> %s",
                          FUNC_0(VAR_1)->id,
                          FUNC_4(VAR_3),
                          FUNC_4(VAR_2));

        FUNC_5(FUNC_0(VAR_1), VAR_0[VAR_3], VAR_0[VAR_2], 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UserEntry ;
struct TYPE_4__ {int * position; int * entries; } ;
typedef TYPE_1__ GetentData ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(GetentData *VAR_0) {
        UserEntry *VAR_1;

        FUNC_0(VAR_0);

        while ((VAR_1 = VAR_0->entries))
                FUNC_1(VAR_1);

        VAR_0->position = ((void*)0);
}

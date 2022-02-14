
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * specs; } ;
typedef int PathSpec ;
typedef TYPE_1__ Path ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(Path *VAR_1) {
        PathSpec *VAR_2;

        FUNC_1(VAR_1);

        while ((VAR_2 = VAR_1->specs)) {
                FUNC_4(VAR_2);
                FUNC_0(VAR_0, VAR_1->specs, VAR_2);
                FUNC_3(VAR_2);
                FUNC_2(VAR_2);
        }
}

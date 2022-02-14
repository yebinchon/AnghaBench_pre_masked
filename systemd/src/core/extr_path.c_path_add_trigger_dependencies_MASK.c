
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {int * dependencies; } ;
typedef int Path ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,size_t,int *,int,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int **) ;

__attribute__((used)) static int FUNC_5(Path *VAR_3) {
        Unit *VAR_4;
        int VAR_5;

        FUNC_1(VAR_3);

        if (!FUNC_2(FUNC_0(VAR_3)->dependencies[VAR_2]))
                return 0;

        VAR_5 = FUNC_4(FUNC_0(VAR_3), ".service", &VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_3(FUNC_0(VAR_3), VAR_0, VAR_2, VAR_4, 1, VAR_1);
}

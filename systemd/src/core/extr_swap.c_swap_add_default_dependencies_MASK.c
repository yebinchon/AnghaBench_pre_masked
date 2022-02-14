
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int manager; int default_dependencies; } ;
typedef int Swap ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(Swap *VAR_5) {
        int VAR_6;

        FUNC_2(VAR_5);

        if (!FUNC_1(VAR_5)->default_dependencies)
                return 0;

        if (!FUNC_0(FUNC_1(VAR_5)->manager))
                return 0;

        if (FUNC_3() > 0)
                return 0;



        VAR_6 = FUNC_4(FUNC_1(VAR_5), VAR_2, VAR_0, 1, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_5(FUNC_1(VAR_5), VAR_2, VAR_3, VAR_1, 1, VAR_4);
}

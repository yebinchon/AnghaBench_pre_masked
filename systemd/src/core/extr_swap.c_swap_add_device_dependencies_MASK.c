
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int what; int from_fragment; } ;
typedef TYPE_1__ Swap ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(Swap *VAR_4) {
        FUNC_1(VAR_4);

        if (!VAR_4->what)
                return 0;

        if (!VAR_4->from_fragment)
                return 0;

        if (FUNC_2(VAR_4->what))
                return FUNC_4(FUNC_0(VAR_4), VAR_4->what, VAR_2, VAR_3);



        return FUNC_3(FUNC_0(VAR_4), VAR_1, VAR_0, 1, VAR_3);
}

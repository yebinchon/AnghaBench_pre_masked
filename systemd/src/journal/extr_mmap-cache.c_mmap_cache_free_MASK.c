
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ unused; int fds; scalar_t__* contexts; } ;
typedef TYPE_1__ MMapCache ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static MMapCache *FUNC_5(MMapCache *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
                if (VAR_1->contexts[VAR_2])
                        FUNC_1(VAR_1->contexts[VAR_2]);

        FUNC_2(VAR_1->fds);

        while (VAR_1->unused)
                FUNC_4(VAR_1->unused);

        return FUNC_3(VAR_1);
}

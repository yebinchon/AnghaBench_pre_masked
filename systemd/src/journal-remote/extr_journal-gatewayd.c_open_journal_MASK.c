
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ journal; } ;
typedef TYPE_1__ RequestMeta ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(RequestMeta *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->journal)
                return 0;

        if (VAR_2)
                return FUNC_2(&VAR_3->journal, VAR_2, 0);
        else
                return FUNC_1(&VAR_3->journal, VAR_0|VAR_1);
}

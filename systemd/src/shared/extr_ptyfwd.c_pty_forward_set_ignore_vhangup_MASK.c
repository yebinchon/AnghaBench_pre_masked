
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int master_readable; } ;
typedef TYPE_1__ PTYForward ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(PTYForward *VAR_1, bool VAR_2) {
        int VAR_3;

        FUNC_1(VAR_1);

        if (!!(VAR_1->flags & VAR_0) == VAR_2)
                return 0;

        FUNC_0(VAR_1->flags, VAR_0, VAR_2);

        if (!FUNC_2(VAR_1)) {




                VAR_1->master_readable = 1;
                VAR_3 = FUNC_3(VAR_1);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        return 0;
}

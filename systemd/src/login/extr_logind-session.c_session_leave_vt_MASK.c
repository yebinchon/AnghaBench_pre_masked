
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vtfd; int id; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int) ;

void FUNC_4(Session *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);
        if (VAR_0->vtfd < 0)
                return;

        FUNC_2(VAR_0);
        VAR_1 = FUNC_3(VAR_0->vtfd, 0);
        if (VAR_1 < 0)
                FUNC_1(VAR_1, "Cannot release VT of session %s: %m", VAR_0->id);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vtfd; } ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(Session *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_4(VAR_1->vtfd);
        if (VAR_2 == -VAR_0) {
                int VAR_3, VAR_4;







                VAR_4 = FUNC_0(VAR_1->vtfd);

                VAR_3 = FUNC_3(VAR_1);
                FUNC_2(VAR_4);

                if (VAR_3 >= 0)
                        VAR_2 = FUNC_4(VAR_3);
        }

        if (VAR_2 < 0)
                FUNC_1(VAR_2, "Failed to restore VT, ignoring: %m");

        VAR_1->vtfd = FUNC_2(VAR_1->vtfd);
}

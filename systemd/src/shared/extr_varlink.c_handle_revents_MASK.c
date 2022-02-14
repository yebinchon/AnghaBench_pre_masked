
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int connecting; int got_pollhup; } ;
typedef TYPE_1__ Varlink ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_3(Varlink *VAR_2, int VAR_3) {
        FUNC_1(VAR_2);

        if (VAR_2->connecting) {



                if ((VAR_3 & (VAR_1|VAR_0)) == 0)
                        return;

                FUNC_2(VAR_2, "Anynchronous connection completed.");
                VAR_2->connecting = 0;
        } else {




                if (!FUNC_0(VAR_3, VAR_0))
                        return;

                FUNC_2(VAR_2, "Got POLLHUP from socket.");
                VAR_2->got_pollhup = 1;
        }
}

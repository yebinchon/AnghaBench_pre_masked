
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int answer_errno; TYPE_1__* scope; } ;
struct TYPE_8__ {scalar_t__ protocol; } ;
typedef TYPE_2__ DnsTransaction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(DnsTransaction *VAR_3, int VAR_4) {
        FUNC_1(VAR_3);

        FUNC_2(VAR_3);

        if (FUNC_0(VAR_4)) {
                if (VAR_3->scope->protocol == VAR_0) {


                        FUNC_3(VAR_3, VAR_2);
                        return;
                }

                FUNC_4(VAR_3, 1);
                return;
        }
        if (VAR_4 != 0) {
                VAR_3->answer_errno = VAR_4;
                FUNC_3(VAR_3, VAR_1);
        }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dnssec_mode; } ;
struct TYPE_11__ {scalar_t__ answer_dnssec_result; scalar_t__ n_picked_servers; scalar_t__ answer_rcode; int answer_errno; int server; TYPE_9__* scope; } ;
typedef TYPE_1__ DnsTransaction ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,int ,int ,int ,scalar_t__) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(DnsTransaction *VAR_12) {
        int VAR_13;

        FUNC_1(VAR_12);


        VAR_13 = FUNC_6(VAR_12);
        if (VAR_13 < 0)
                goto fail;
        if (VAR_13 == 0)
                return;



        VAR_13 = FUNC_7(VAR_12);
        if (VAR_13 < 0)
                goto fail;
        if (VAR_13 > 0)
                return;



        VAR_13 = FUNC_9(VAR_12);
        if (VAR_13 == -VAR_10) {
                FUNC_5(VAR_12, VAR_7);
                return;
        }
        if (VAR_13 < 0)
                goto fail;

        if (VAR_12->answer_dnssec_result == VAR_0 &&
            VAR_12->scope->dnssec_mode == VAR_3) {




                if (VAR_12->n_picked_servers < FUNC_2(VAR_12->scope)) {

                        FUNC_8(VAR_12, 1);
                        return;
                }


                FUNC_5(VAR_12, VAR_5);
                return;
        }

        if (!FUNC_0(VAR_12->answer_dnssec_result,
                    VAR_11,
                    VAR_2,
                    VAR_1,
                    VAR_0)) {
                FUNC_5(VAR_12, VAR_5);
                return;
        }

        if (VAR_12->answer_dnssec_result == VAR_0)
                FUNC_3(VAR_12->server);

        FUNC_4(VAR_12);

        if (VAR_12->answer_rcode == VAR_4)
                FUNC_5(VAR_12, VAR_9);
        else
                FUNC_5(VAR_12, VAR_8);

        return;

fail:
        VAR_12->answer_errno = -VAR_13;
        FUNC_5(VAR_12, VAR_6);
}

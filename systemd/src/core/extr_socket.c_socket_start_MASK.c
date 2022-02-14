
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_18__ {int reset_accounting; } ;
typedef TYPE_1__ Unit ;
struct TYPE_20__ {int state; } ;
struct TYPE_19__ {int exec_command; int result; int state; int service; } ;
struct TYPE_17__ {scalar_t__ load_state; int id; } ;
typedef TYPE_2__ Socket ;
typedef TYPE_3__ Service ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int ,int ,...) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_11__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(Unit *VAR_22) {
        Socket *VAR_23 = FUNC_2(VAR_22);
        int VAR_24;

        FUNC_6(VAR_23);



        if (FUNC_0(VAR_23->state,
                   VAR_16,
                   VAR_17,
                   VAR_18,
                   VAR_15,
                   VAR_11,
                   VAR_10,
                   VAR_6))
                return -VAR_0;


        if (FUNC_0(VAR_23->state,
                   VAR_14,
                   VAR_12,
                   VAR_13))
                return 0;


        if (FUNC_5(VAR_23->service)) {
                Service *VAR_25;

                VAR_25 = FUNC_1(FUNC_4(VAR_23->service));

                if (FUNC_3(VAR_25)->load_state != VAR_20) {
                        FUNC_8(VAR_22, "Socket service %s not loaded, refusing.", FUNC_3(VAR_25)->id);
                        return -VAR_2;
                }



                if (!FUNC_0(VAR_25->state, VAR_4, VAR_5, VAR_3)) {
                        FUNC_8(VAR_22, "Socket service %s already active, refusing.", FUNC_3(VAR_25)->id);
                        return -VAR_1;
                }
        }

        FUNC_6(FUNC_0(VAR_23->state, VAR_7, VAR_8));

        VAR_24 = FUNC_12(VAR_22);
        if (VAR_24 < 0) {
                FUNC_9(VAR_23, VAR_9);
                return VAR_24;
        }

        VAR_24 = FUNC_11(VAR_22);
        if (VAR_24 < 0)
                return VAR_24;

        VAR_23->result = VAR_19;
        FUNC_7(VAR_23->exec_command, VAR_21);

        VAR_22->reset_accounting = 1;

        FUNC_10(VAR_23);
        return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_11__ {int interval; unsigned int burst; } ;
struct TYPE_12__ {int exec_context; int service; TYPE_1__ trigger_limit; scalar_t__ accept; } ;
typedef TYPE_2__ Socket ;


 int * FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,int ,int ,int,int ) ;
 int FUNC_10 (int *,char*,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(Socket *VAR_5) {
        Unit *VAR_6 = FUNC_0(VAR_5);
        int VAR_7;

        FUNC_2(VAR_5);
        if (VAR_5->trigger_limit.interval == VAR_3)
                VAR_5->trigger_limit.interval = 2 * VAR_4;

        if (VAR_5->trigger_limit.burst == (unsigned) -1) {
                if (VAR_5->accept)
                        VAR_5->trigger_limit.burst = 200;
                else
                        VAR_5->trigger_limit.burst = 20;
        }

        if (FUNC_3(VAR_5)) {

                if (!FUNC_1(VAR_5->service)) {
                        Unit *VAR_8;

                        VAR_7 = FUNC_10(VAR_6, ".service", &VAR_8);
                        if (VAR_7 < 0)
                                return VAR_7;

                        FUNC_12(&VAR_5->service, VAR_6, VAR_8);
                }

                VAR_7 = FUNC_9(VAR_6, VAR_0, VAR_2, FUNC_1(VAR_5->service), 1, VAR_1);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        VAR_7 = FUNC_6(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_5(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_11(VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        if (FUNC_7(VAR_5)) {
                VAR_7 = FUNC_8(VAR_6, &VAR_5->exec_context);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        VAR_7 = FUNC_13(VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_4(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        return 0;
}

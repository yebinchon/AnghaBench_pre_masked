
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ sa_family; } ;
struct TYPE_16__ {TYPE_1__ sa; } ;
struct TYPE_17__ {scalar_t__ nspid; int last_connect_error; TYPE_2__ sockaddr; scalar_t__ machine; scalar_t__ exec_path; } ;
typedef TYPE_3__ sd_bus ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(sd_bus *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        for (;;) {
                FUNC_4(VAR_2);
                FUNC_3(VAR_2);

                FUNC_6(VAR_2);





                if (VAR_2->exec_path)
                        VAR_3 = FUNC_9(VAR_2);
                else if ((VAR_2->nspid > 0 || VAR_2->machine) && VAR_2->sockaddr.sa.sa_family != VAR_0)
                        VAR_3 = FUNC_5(VAR_2);
                else if (VAR_2->sockaddr.sa.sa_family != VAR_0)
                        VAR_3 = FUNC_8(VAR_2);
                else
                        goto next;

                if (VAR_3 >= 0) {
                        int VAR_4;

                        VAR_4 = FUNC_2(VAR_2);
                        if (VAR_4 < 0)
                                return VAR_4;

                        VAR_4 = FUNC_1(VAR_2);
                        if (VAR_4 < 0)
                                return VAR_4;

                        return VAR_3;
                }

                VAR_2->last_connect_error = -VAR_3;

        next:
                VAR_3 = FUNC_7(VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;
                if (VAR_3 == 0)
                        return VAR_2->last_connect_error > 0 ? -VAR_2->last_connect_error : -VAR_1;
        }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stats_server {int metric; int name; } ;
struct stats_pool {int server; int metric; int name; } ;
struct stats {int sum; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct stats*) ;
 scalar_t__ FUNC_3 (struct stats*) ;
 scalar_t__ FUNC_4 (struct stats*,int *) ;
 scalar_t__ FUNC_5 (struct stats*,int *) ;
 scalar_t__ FUNC_6 (struct stats*) ;

__attribute__((used)) static rstatus_t
FUNC_7(struct stats *VAR_1)
{
    rstatus_t VAR_2;
    uint32_t VAR_3;

    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    for (VAR_3 = 0; VAR_3 < FUNC_1(&VAR_1->sum); VAR_3++) {
        struct stats_pool *VAR_4 = FUNC_0(&VAR_1->sum, VAR_3);
        uint32_t VAR_5;

        VAR_2 = FUNC_4(VAR_1, &VAR_4->name);
        if (VAR_2 != VAR_0) {
            return VAR_2;
        }


        VAR_2 = FUNC_5(VAR_1, &VAR_4->metric);
        if (VAR_2 != VAR_0) {
            return VAR_2;
        }

        for (VAR_5 = 0; VAR_5 < FUNC_1(&VAR_4->server); VAR_5++) {
            struct stats_server *VAR_6 = FUNC_0(&VAR_4->server, VAR_5);

            VAR_2 = FUNC_4(VAR_1, &VAR_6->name);
            if (VAR_2 != VAR_0) {
                return VAR_2;
            }


            VAR_2 = FUNC_5(VAR_1, &VAR_6->metric);
            if (VAR_2 != VAR_0) {
                return VAR_2;
            }

            VAR_2 = FUNC_6(VAR_1);
            if (VAR_2 != VAR_0) {
                return VAR_2;
            }
        }

        VAR_2 = FUNC_6(VAR_1);
        if (VAR_2 != VAR_0) {
            return VAR_2;
        }
    }

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    return VAR_0;
}

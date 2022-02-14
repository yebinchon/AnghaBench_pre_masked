
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ n_transactions_total; int dns_transactions; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Manager *VAR_7 = VAR_5;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        return FUNC_2(VAR_4, "(tt)",
                                     (uint64_t) FUNC_1(VAR_7->dns_transactions),
                                     (uint64_t) VAR_7->n_transactions_total);
}

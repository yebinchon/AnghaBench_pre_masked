
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__* n_dnssec_verdict; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef TYPE_1__ Manager ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(
                sd_bus *VAR_4,
                const char *VAR_5,
                const char *VAR_6,
                const char *VAR_7,
                sd_bus_message *VAR_8,
                void *VAR_9,
                sd_bus_error *VAR_10) {

        Manager *VAR_11 = VAR_9;

        FUNC_0(VAR_8);
        FUNC_0(VAR_11);

        return FUNC_1(VAR_8, "(tttt)",
                                     (uint64_t) VAR_11->n_dnssec_verdict[VAR_3],
                                     (uint64_t) VAR_11->n_dnssec_verdict[VAR_2],
                                     (uint64_t) VAR_11->n_dnssec_verdict[VAR_0],
                                     (uint64_t) VAR_11->n_dnssec_verdict[VAR_1]);
}

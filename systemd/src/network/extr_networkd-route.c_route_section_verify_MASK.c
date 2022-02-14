
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int line; int filename; } ;
struct TYPE_8__ {scalar_t__ n_static_addresses; int filename; } ;
struct TYPE_7__ {scalar_t__ family; int gateway_onlink; int gw; int scope; int type; int scope_set; int table; int table_set; TYPE_3__* section; } ;
typedef TYPE_1__ Route ;
typedef TYPE_2__ Network ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

int FUNC_7(Route *VAR_10, Network *VAR_11) {
        if (FUNC_6(VAR_10->section))
                return -VAR_2;

        if (VAR_10->family == VAR_1) {
                FUNC_2(VAR_10->section);

                return FUNC_5(FUNC_1(VAR_2),
                                         "%s: Route section without Gateway=, Destination=, Source=, "
                                         "or PreferredSource= field configured. "
                                         "Ignoring [Route] section from line %u.",
                                         VAR_10->section->filename, VAR_10->section->line);
        }

        if (VAR_10->family != VAR_0) {
                if (!VAR_10->table_set && FUNC_0(VAR_10->type, VAR_5, VAR_4, VAR_3, VAR_6))
                        VAR_10->table = VAR_9;

                if (!VAR_10->scope_set) {
                        if (FUNC_0(VAR_10->type, VAR_5, VAR_6))
                                VAR_10->scope = VAR_7;
                        else if (FUNC_0(VAR_10->type, VAR_4, VAR_3))
                                VAR_10->scope = VAR_8;
                }
        }

        if (VAR_11->n_static_addresses == 0 &&
            FUNC_3(VAR_10->family, &VAR_10->gw) == 0 &&
            VAR_10->gateway_onlink < 0) {
                FUNC_4("%s: Gateway= without static address configured. "
                            "Enabling GatewayOnLink= option.",
                            VAR_11->filename);
                VAR_10->gateway_onlink = 1;
        }

        return 0;
}

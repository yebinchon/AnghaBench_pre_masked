
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name_template; int type; int name; int filename; int txt_data_items; int srv_rr; int ptr_rr; TYPE_1__* manager; } ;
struct TYPE_7__ {int dnssd_services; } ;
typedef TYPE_2__ DnssdService ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;

DnssdService *FUNC_5(DnssdService *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->manager)
                FUNC_3(VAR_0->manager->dnssd_services, VAR_0->name);

        FUNC_0(VAR_0->ptr_rr);
        FUNC_0(VAR_0->srv_rr);

        FUNC_1(VAR_0->txt_data_items);

        FUNC_2(VAR_0->filename);
        FUNC_2(VAR_0->name);
        FUNC_2(VAR_0->type);
        FUNC_2(VAR_0->name_template);

        return FUNC_4(VAR_0);
}

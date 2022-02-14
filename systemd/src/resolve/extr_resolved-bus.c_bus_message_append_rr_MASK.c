
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int wire_format_size; int wire_format; TYPE_1__* key; } ;
typedef TYPE_2__ sd_bus_message ;
struct TYPE_12__ {int type; int class; } ;
typedef TYPE_2__ DnsResourceRecord ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int,int ,int ) ;
 int FUNC_3 (TYPE_2__*,char,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char,char*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, DnsResourceRecord *VAR_1, int VAR_2) {
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_5(VAR_0, 'r', "iqqay");
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_2(VAR_0, "iqq",
                                  VAR_2,
                                  VAR_1->key->class,
                                  VAR_1->key->type);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_1(VAR_1, 0);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_3(VAR_0, 'y', VAR_1->wire_format, VAR_1->wire_format_size);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_4(VAR_0);
}

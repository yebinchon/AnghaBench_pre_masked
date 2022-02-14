
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_15__ {int in6_addr; } ;
struct TYPE_13__ {int in_addr; } ;
struct TYPE_16__ {TYPE_3__ aaaa; TYPE_2__* key; TYPE_1__ a; } ;
typedef TYPE_4__ sd_bus_message ;
struct TYPE_14__ {scalar_t__ type; } ;
typedef TYPE_4__ DnsResourceRecord ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,char*,int) ;
 int FUNC_2 (TYPE_4__*,char,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char,char*) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_5, DnsResourceRecord *VAR_6, int VAR_7) {
        int VAR_8;

        FUNC_0(VAR_5);
        FUNC_0(VAR_6);

        VAR_8 = FUNC_4(VAR_5, 'r', "iiay");
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_1(VAR_5, "i", VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        if (VAR_6->key->type == VAR_2) {
                VAR_8 = FUNC_1(VAR_5, "i", VAR_0);
                if (VAR_8 < 0)
                        return VAR_8;

                VAR_8 = FUNC_2(VAR_5, 'y', &VAR_6->a.in_addr, sizeof(struct in_addr));

        } else if (VAR_6->key->type == VAR_3) {
                VAR_8 = FUNC_1(VAR_5, "i", VAR_1);
                if (VAR_8 < 0)
                        return VAR_8;

                VAR_8 = FUNC_2(VAR_5, 'y', &VAR_6->aaaa.in6_addr, sizeof(struct in6_addr));
        } else
                return -VAR_4;

        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_3(VAR_5);
        if (VAR_8 < 0)
                return VAR_8;

        return 0;
}

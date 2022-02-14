
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
struct TYPE_4__ {int family; int address; } ;
typedef TYPE_1__ DnsServer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*,int ,...) ;
 int FUNC_4 (int *,char,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char,char*) ;

int FUNC_7(sd_bus_message *VAR_1, DnsServer *VAR_2, bool VAR_3) {
        int VAR_4;

        FUNC_1(VAR_1);

        if (!VAR_2) {
                if (VAR_3)
                        return FUNC_3(VAR_1, "(iiay)", 0, VAR_0, 0);
                else
                        return FUNC_3(VAR_1, "(iay)", VAR_0, 0);
        }

        VAR_4 = FUNC_6(VAR_1, 'r', VAR_3 ? "iiay" : "iay");
        if (VAR_4 < 0)
                return VAR_4;

        if (VAR_3) {
                VAR_4 = FUNC_3(VAR_1, "i", FUNC_2(VAR_2));
                if (VAR_4 < 0)
                        return VAR_4;
        }

        VAR_4 = FUNC_3(VAR_1, "i", VAR_2->family);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_4(VAR_1, 'y', &VAR_2->address, FUNC_0(VAR_2->family));
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_5(VAR_1);
}

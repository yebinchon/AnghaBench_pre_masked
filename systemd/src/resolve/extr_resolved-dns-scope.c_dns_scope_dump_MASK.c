
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ family; int cache; int zone; TYPE_1__* link; int protocol; } ;
struct TYPE_5__ {char* ifname; } ;
typedef int FILE ;
typedef TYPE_2__ DnsScope ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int *) ;
 int * VAR_1 ;

void FUNC_8(DnsScope *VAR_2, FILE *VAR_3) {
        FUNC_1(VAR_2);

        if (!VAR_3)
                VAR_3 = VAR_1;

        FUNC_7("[Scope protocol=", VAR_3);
        FUNC_7(FUNC_4(VAR_2->protocol), VAR_3);

        if (VAR_2->link) {
                FUNC_7(" interface=", VAR_3);
                FUNC_7(VAR_2->link->ifname, VAR_3);
        }

        if (VAR_2->family != VAR_0) {
                FUNC_7(" family=", VAR_3);
                FUNC_7(FUNC_0(VAR_2->family), VAR_3);
        }

        FUNC_7("]\n", VAR_3);

        if (!FUNC_6(&VAR_2->zone)) {
                FUNC_7("ZONE:\n", VAR_3);
                FUNC_5(&VAR_2->zone, VAR_3);
        }

        if (!FUNC_3(&VAR_2->cache)) {
                FUNC_7("CACHE:\n", VAR_3);
                FUNC_2(&VAR_2->cache, VAR_3);
        }
}

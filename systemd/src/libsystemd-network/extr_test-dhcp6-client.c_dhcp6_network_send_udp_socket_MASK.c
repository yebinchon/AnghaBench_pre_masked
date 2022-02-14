
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_7__ {int transaction_id; } ;
typedef TYPE_1__ DHCP6Message ;


 struct in6_addr VAR_0 ;
 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 int FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (TYPE_1__*,size_t) ;
 int* VAR_2 ;

int FUNC_7(int VAR_3, struct in6_addr *VAR_4,
                                  const void *VAR_5, size_t VAR_6) {
        struct in6_addr VAR_7 =
                VAR_0;
        DHCP6Message *VAR_8;

        FUNC_1(VAR_3 == VAR_2[0]);
        FUNC_1(VAR_4);
        FUNC_1(VAR_5);
        FUNC_1(VAR_6 > sizeof(DHCP6Message) + 4);
        FUNC_1(FUNC_0(VAR_4, &VAR_7));

        VAR_8 = (DHCP6Message *)VAR_5;

        FUNC_1(VAR_8->transaction_id & 0x00ffffff);

        if (VAR_1 == 0) {
                FUNC_4(VAR_8, VAR_6);
                FUNC_3(VAR_8);
                VAR_1++;
        } else if (VAR_1 == 1) {
                FUNC_6(VAR_8, VAR_6);
                FUNC_2(VAR_8);
                VAR_1++;
        } else if (VAR_1 == 2) {
                FUNC_5(VAR_8, VAR_6);
                FUNC_3(VAR_8);
                VAR_1++;
        }

        return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dhcp6_prefixes; } ;
typedef struct in6_addr Manager ;
typedef int Link ;


 int FUNC_0 (struct in6_addr*,int *) ;
 int * FUNC_1 (int ,struct in6_addr*) ;

__attribute__((used)) static Link *FUNC_2(Manager *VAR_0, struct in6_addr *VAR_1) {
        FUNC_0(VAR_0, ((void*)0));
        FUNC_0(VAR_1, ((void*)0));

        return FUNC_1(VAR_0->dhcp6_prefixes, VAR_1);
}

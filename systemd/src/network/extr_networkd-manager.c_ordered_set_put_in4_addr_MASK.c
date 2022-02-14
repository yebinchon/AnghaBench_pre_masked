
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
struct in_addr {int dummy; } ;
typedef struct in_addr const OrderedSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_addr const*) ;
 int FUNC_1 (int ,union in_addr_union const*,char**) ;
 int FUNC_2 (struct in_addr const*,char*) ;

__attribute__((used)) static int FUNC_3(OrderedSet *VAR_2, const struct in_addr *VAR_3) {
        char *VAR_4;
        int VAR_5;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_5 = FUNC_1(VAR_0, (const union in_addr_union*) VAR_3, &VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_2(VAR_2, VAR_4);
        if (VAR_5 == -VAR_1)
                return 0;

        return VAR_5;
}

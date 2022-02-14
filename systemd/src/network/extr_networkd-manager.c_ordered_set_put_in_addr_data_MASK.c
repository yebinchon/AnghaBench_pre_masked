
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr_data {int address; int family; } ;
typedef struct in_addr_data const OrderedSet ;


 int VAR_0 ;
 int FUNC_0 (struct in_addr_data const*) ;
 int FUNC_1 (int ,int *,char**) ;
 int FUNC_2 (struct in_addr_data const*,char*) ;

__attribute__((used)) static int FUNC_3(OrderedSet *VAR_1, const struct in_addr_data *VAR_2) {
        char *VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_4 = FUNC_1(VAR_2->family, &VAR_2->address, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(VAR_1, VAR_3);
        if (VAR_4 == -VAR_0)
                return 0;

        return VAR_4;
}

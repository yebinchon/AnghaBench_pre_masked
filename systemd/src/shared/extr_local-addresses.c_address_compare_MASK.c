
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_address {scalar_t__ family; int address; int ifindex; int metric; int scope; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(const struct local_address *VAR_2, const struct local_address *VAR_3) {
        int VAR_4;



        if (VAR_2->family == VAR_0 && VAR_3->family == VAR_1)
                return -1;
        if (VAR_2->family == VAR_1 && VAR_3->family == VAR_0)
                return 1;

        VAR_4 = FUNC_0(VAR_2->scope, VAR_3->scope);
        if (VAR_4 != 0)
                return VAR_4;

        VAR_4 = FUNC_0(VAR_2->metric, VAR_3->metric);
        if (VAR_4 != 0)
                return VAR_4;

        VAR_4 = FUNC_0(VAR_2->ifindex, VAR_3->ifindex);
        if (VAR_4 != 0)
                return VAR_4;

        return FUNC_2(&VAR_2->address, &VAR_3->address, FUNC_1(VAR_2->family));
}

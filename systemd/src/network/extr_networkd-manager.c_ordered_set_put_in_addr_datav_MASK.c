
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr_data {int dummy; } ;
typedef int OrderedSet ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct in_addr_data const*) ;

__attribute__((used)) static int FUNC_2(OrderedSet *VAR_0, const struct in_addr_data *VAR_1, unsigned VAR_2) {
        int VAR_3, VAR_4 = 0;
        unsigned VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1 || VAR_2 == 0);

        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
                VAR_3 = FUNC_1(VAR_0, VAR_1+VAR_5);
                if (VAR_3 < 0)
                        return VAR_3;

                VAR_4 += VAR_3;
        }

        return VAR_4;
}

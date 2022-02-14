
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int OrderedSet ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct in_addr const*) ;

__attribute__((used)) static int FUNC_2(OrderedSet *VAR_0,
                                     const struct in_addr *VAR_1,
                                     size_t VAR_2,
                                     bool (*VAR_3)(const struct in_addr *VAR_4)) {
        int VAR_5, VAR_6 = 0;
        size_t VAR_7;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2 == 0 || VAR_1);

        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                if (VAR_3 && !VAR_3(&VAR_1[VAR_7]))
                        continue;
                VAR_5 = FUNC_1(VAR_0, VAR_1+VAR_7);
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_6 += VAR_5;
        }

        return VAR_6;
}

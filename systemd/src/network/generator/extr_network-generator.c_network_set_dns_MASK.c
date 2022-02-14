
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_4__ {int dns; } ;
typedef TYPE_1__ Network ;
typedef int Context ;


 int FUNC_0 (char const*,int*,union in_addr_union*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,TYPE_1__**) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4(Context *VAR_0, const char *VAR_1, const char *VAR_2) {
        union in_addr_union VAR_3;
        Network *VAR_4;
        int VAR_5, VAR_6;

        VAR_6 = FUNC_0(VAR_2, &VAR_5, &VAR_3);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_4 = FUNC_1(VAR_0, VAR_1);
        if (!VAR_4) {
                VAR_6 = FUNC_2(VAR_0, VAR_1, &VAR_4);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        return FUNC_3(&VAR_4->dns, VAR_2);
}

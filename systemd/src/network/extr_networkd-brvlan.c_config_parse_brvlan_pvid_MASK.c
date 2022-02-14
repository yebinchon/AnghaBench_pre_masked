
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int use_br_vlan; int pvid; } ;
typedef TYPE_1__ Network ;


 int FUNC_0 (char const*,int *) ;

int FUNC_1(const char *VAR_0, const char *VAR_1,
                             unsigned VAR_2, const char *VAR_3,
                             unsigned VAR_4, const char *VAR_5,
                             int VAR_6, const char *VAR_7, void *VAR_8,
                             void *VAR_9) {
        Network *VAR_10 = VAR_9;
        uint16_t VAR_11;
        int VAR_12;

        VAR_12 = FUNC_0(VAR_7, &VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_10->pvid = VAR_11;
        VAR_10->use_br_vlan = 1;

        return 0;
}

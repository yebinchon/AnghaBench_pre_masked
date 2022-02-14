
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int dummy; } ;
typedef int NetDev ;


 int FUNC_0 (int *,struct ifreq*) ;
 int FUNC_1 (int *,struct ifreq*) ;

__attribute__((used)) static int FUNC_2(NetDev *VAR_0) {
        struct ifreq VAR_1 = {};
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0, &VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        return FUNC_1(VAR_0, &VAR_1);
}

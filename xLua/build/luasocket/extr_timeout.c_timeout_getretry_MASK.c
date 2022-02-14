
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* p_timeout ;
struct TYPE_3__ {double block; double total; double start; } ;


 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 () ;

double FUNC_3(p_timeout VAR_0) {
    if (VAR_0->block < 0.0 && VAR_0->total < 0.0) {
        return -1;
    } else if (VAR_0->block < 0.0) {
        double VAR_1 = VAR_0->total - FUNC_2() + VAR_0->start;
        return FUNC_0(VAR_1, 0.0);
    } else if (VAR_0->total < 0.0) {
        double VAR_2 = VAR_0->block - FUNC_2() + VAR_0->start;
        return FUNC_0(VAR_2, 0.0);
    } else {
        double VAR_3 = VAR_0->total - FUNC_2() + VAR_0->start;
        return FUNC_1(VAR_0->block, FUNC_0(VAR_3, 0.0));
    }
}

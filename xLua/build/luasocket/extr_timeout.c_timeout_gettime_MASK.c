
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {double tv_sec; double tv_usec; } ;


 int FUNC_0 (struct timeval*,struct timezone*) ;

double FUNC_1(void) {
    struct timeval VAR_0;
    FUNC_0(&VAR_0, (struct timezone *) ((void*)0));

    return VAR_0.tv_sec + VAR_0.tv_usec/1.0e6;
}

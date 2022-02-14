
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; double tv_nsec; } ;



__attribute__((used)) static double FUNC_0(const struct timespec *VAR_0) {
        return VAR_0->tv_sec + (1.0e-9 * VAR_0->tv_nsec);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (double*,int *,int) ;

__attribute__((used)) static inline double
FUNC_2(uint64 VAR_0)
{
 double VAR_1;
 FUNC_0(sizeof(uint64) == sizeof(double), "double is not IEEE double wide float");

 FUNC_1(&VAR_1, &VAR_0, sizeof(double));
 return VAR_1;
}

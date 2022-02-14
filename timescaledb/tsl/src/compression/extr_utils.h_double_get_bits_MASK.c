
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,double*,int) ;

__attribute__((used)) static inline uint64
FUNC_2(double VAR_0)
{
 uint64 VAR_1;
 FUNC_0(sizeof(uint64) == sizeof(double), "double is not IEEE double wide float");

 FUNC_1(&VAR_1, &VAR_0, sizeof(uint64));
 return VAR_1;
}

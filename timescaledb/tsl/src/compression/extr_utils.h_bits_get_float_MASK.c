
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (float*,int *,int) ;

__attribute__((used)) static inline float
FUNC_2(uint32 VAR_0)
{
 float VAR_1;
 FUNC_0(sizeof(float) == sizeof(uint32), "float is not IEEE double wide float");

 FUNC_1(&VAR_1, &VAR_0, sizeof(uint32));
 return VAR_1;
}

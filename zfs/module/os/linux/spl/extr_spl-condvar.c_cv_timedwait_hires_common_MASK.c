
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kmutex_t ;
typedef int kcondvar_t ;
typedef int hrtime_t ;
typedef int clock_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static clock_t
FUNC_2(kcondvar_t *VAR_1, kmutex_t *VAR_2, hrtime_t VAR_3,
    hrtime_t VAR_4, int VAR_5, int VAR_6)
{
 if (!(VAR_5 & VAR_0))
  VAR_3 += FUNC_1();

 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6));
}

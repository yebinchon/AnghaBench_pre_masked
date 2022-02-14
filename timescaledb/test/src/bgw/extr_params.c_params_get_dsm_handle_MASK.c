
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dsm_handle ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static dsm_handle
FUNC_1()
{
 static dsm_handle VAR_0 = 0;

 if (VAR_0 == 0)
  VAR_0 = FUNC_0();

 return VAR_0;
}

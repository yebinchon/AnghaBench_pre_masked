
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zoneid_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,size_t) ;

ssize_t
FUNC_2(zoneid_t VAR_3, char *VAR_4, size_t VAR_5)
{
 if (VAR_3 != VAR_1)
  return (VAR_0);

 ssize_t VAR_6 = FUNC_0(VAR_2) + 1;

 if (VAR_4 == ((void*)0) || VAR_5 == 0)
  return (VAR_6);

 FUNC_1(VAR_4, VAR_2, VAR_5);
 VAR_4[VAR_5 - 1] = '\0';

 return (VAR_6);
}

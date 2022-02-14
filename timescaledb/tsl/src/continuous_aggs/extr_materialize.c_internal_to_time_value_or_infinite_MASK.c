
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;
typedef int Oid ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static Datum
FUNC_3(int64 VAR_2, Oid VAR_3, bool *VAR_4)
{



 if (VAR_2 == VAR_1)
 {
  if (VAR_4 != ((void*)0))
   *VAR_4 = 1;
  return FUNC_1(VAR_3);
 }
 else if (VAR_2 == VAR_0)
 {
  if (VAR_4 != ((void*)0))
   *VAR_4 = 1;
  return FUNC_0(VAR_3);
 }
 else
 {
  if (VAR_4 != ((void*)0))
   *VAR_4 = 0;
  return FUNC_2(VAR_2, VAR_3);
 }
}

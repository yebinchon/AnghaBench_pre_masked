
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ dmu_object_type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline uint8_t
FUNC_1(dmu_object_type_t VAR_3, uint64_t VAR_4)
{
 if (VAR_3 == VAR_0) {
  return (1);
 } else {
  return (1 +
      ((VAR_1 -
      FUNC_0(VAR_1, VAR_4)) >> VAR_2));
 }
}

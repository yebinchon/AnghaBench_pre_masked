
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,size_t,scalar_t__*,void**) ;
 int FUNC_2 (int ,scalar_t__,size_t,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(uint64_t VAR_1, size_t VAR_2, uint64_t VAR_3, void **VAR_4)
{
 void *VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 FUNC_0(1);
 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_7 == 0) {
  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_6, &VAR_5);
  if (VAR_7 == 0) {
   *VAR_4 = (void *) (((uintptr_t) VAR_5) + VAR_6);
  }
 }
 FUNC_0(0);
 return (VAR_7);
}

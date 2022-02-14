
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct seg_desc {int access; int limit; int base; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int,struct seg_desc*) ;

int
FUNC_2(int VAR_1, int VAR_2, uint64_t *VAR_3, uint32_t *VAR_4,
 uint32_t *VAR_5)
{
 struct seg_desc VAR_6;
 int VAR_7;

 FUNC_0(VAR_1, 1);
 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_6);
 if (VAR_7 == 0) {
  *VAR_3 = VAR_6.base;
  *VAR_4 = VAR_6.limit;
  *VAR_5 = VAR_6.access;
 }
 FUNC_0(VAR_1, 0);

 return (VAR_7);
}

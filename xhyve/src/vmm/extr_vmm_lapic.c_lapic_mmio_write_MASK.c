
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vlapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vlapic*,int,int,int,void*) ;
 struct vlapic* FUNC_1 (void*,int) ;

int
FUNC_2(void *VAR_2, int VAR_3, uint64_t VAR_4, uint64_t VAR_5, int VAR_6,
   void *VAR_7)
{
 int VAR_8;
 uint64_t VAR_9;
 struct vlapic *VAR_10;

 VAR_9 = VAR_4 - VAR_0;





 if (VAR_6 != 4 || VAR_9 & 0xf)
  return (VAR_1);

 VAR_10 = FUNC_1(VAR_2, VAR_3);
 VAR_8 = FUNC_0(VAR_10, 1, VAR_9, VAR_5, VAR_7);
 return (VAR_8);
}

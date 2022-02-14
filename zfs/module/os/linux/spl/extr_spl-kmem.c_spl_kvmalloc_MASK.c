
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (size_t,int,int ) ;
 void* FUNC_1 (size_t,int,int ) ;
 void* FUNC_2 (size_t,int) ;

void *
FUNC_3(size_t VAR_10, gfp_t VAR_11)
{
 gfp_t VAR_12 = VAR_11;

 if (VAR_10 > VAR_4) {







  VAR_12 |= VAR_7;
  if (!(VAR_12 & VAR_9) ||
      (VAR_10 <= VAR_4 << VAR_2)) {
   VAR_12 |= VAR_6;
  }
 }
 void *VAR_13 = FUNC_1(VAR_10, VAR_12, VAR_1);
 if (VAR_13 || VAR_10 <= VAR_4 ||
     (VAR_11 & VAR_8) != VAR_8) {
  return (VAR_13);
 }

 return (FUNC_0(VAR_10, VAR_11 | VAR_5, VAR_3));
}

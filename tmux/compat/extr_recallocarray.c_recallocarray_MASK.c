
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (size_t,size_t) ;
 int VAR_4 ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (void*,void*,size_t) ;
 int FUNC_6 (char*,int ,size_t) ;

void *
FUNC_7(void *VAR_5, size_t VAR_6, size_t VAR_7, size_t VAR_8)
{
 size_t VAR_9, VAR_10;
 void *VAR_11;

 if (VAR_5 == ((void*)0))
  return FUNC_0(VAR_7, VAR_8);

 if ((VAR_7 >= VAR_2 || VAR_8 >= VAR_2) &&
     VAR_7 > 0 && VAR_3 / VAR_7 < VAR_8) {
  VAR_4 = VAR_1;
  return ((void*)0);
 }
 VAR_10 = VAR_7 * VAR_8;

 if ((VAR_6 >= VAR_2 || VAR_8 >= VAR_2) &&
     VAR_6 > 0 && VAR_3 / VAR_6 < VAR_8) {
  VAR_4 = VAR_0;
  return ((void*)0);
 }
 VAR_9 = VAR_6 * VAR_8;





 if (VAR_10 <= VAR_9) {
  size_t VAR_12 = VAR_9 - VAR_10;

  if (VAR_12 < VAR_9 / 2 && VAR_12 < (size_t)FUNC_3()) {
   FUNC_6((char *)VAR_5 + VAR_10, 0, VAR_12);
   return VAR_5;
  }
 }

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 if (VAR_10 > VAR_9) {
  FUNC_5(VAR_11, VAR_5, VAR_9);
  FUNC_6((char *)VAR_11 + VAR_9, 0, VAR_10 - VAR_9);
 } else
  FUNC_5(VAR_11, VAR_5, VAR_10);

 FUNC_1(VAR_5, VAR_9);
 FUNC_2(VAR_5);

 return VAR_11;
}

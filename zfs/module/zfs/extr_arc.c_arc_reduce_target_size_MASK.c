
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(int64_t VAR_9)
{
 uint64_t VAR_10 = FUNC_1(&VAR_8);
 uint64_t VAR_11 = VAR_4;

 if (VAR_11 > VAR_9 && VAR_11 - VAR_9 > VAR_5) {
  VAR_4 = VAR_11 - VAR_9;
  FUNC_2(&VAR_6, -(VAR_6 >> VAR_7));
  if (VAR_6 > VAR_4)
   VAR_6 = (VAR_4 >> 1);
  FUNC_0(VAR_4 >= VAR_5);
  FUNC_0((int64_t)VAR_6 >= 0);
 } else {
  VAR_4 = VAR_5;
 }

 if (VAR_10 > VAR_4) {

  FUNC_3(&VAR_1);
  VAR_2 = VAR_0;
  FUNC_4(&VAR_1);
  FUNC_5(VAR_3);
 }
}

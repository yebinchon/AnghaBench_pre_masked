
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_dump_fd; int v_fd; } ;
typedef TYPE_1__ vnode_t ;
typedef int ssize_t ;
typedef int rlim64_t ;
typedef scalar_t__ offset_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,void*,int,scalar_t__) ;
 int FUNC_3 (int,char*,int,scalar_t__) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_5, vnode_t *VAR_6, void *VAR_7, ssize_t VAR_8, offset_t VAR_9,
    int VAR_10, int VAR_11, rlim64_t VAR_12, void *VAR_13, ssize_t *VAR_14)
{
 ssize_t VAR_15, VAR_16 = 0, VAR_17;

 if (VAR_5 == VAR_3) {
  VAR_15 = FUNC_2(VAR_6->v_fd, VAR_7, VAR_8, VAR_9);
  if (VAR_6->v_dump_fd != -1 && VAR_15 != -1) {
   int VAR_18;
   VAR_18 = FUNC_3(VAR_6->v_dump_fd, VAR_7, VAR_15, VAR_9);
   FUNC_0(VAR_18 != -1);
  }
 } else {




  int VAR_19 = VAR_8 >> VAR_2;
  VAR_17 = (VAR_19 > 0 ? FUNC_4() % VAR_19 : 0) <<
      VAR_2;
  VAR_15 = FUNC_3(VAR_6->v_fd, VAR_7, VAR_17, VAR_9);
  if (VAR_15 != -1) {
   VAR_16 = VAR_15;
   VAR_15 = FUNC_3(VAR_6->v_fd, (char *)VAR_7 + VAR_17,
       VAR_8 - VAR_17, VAR_9 + VAR_17);
  }
 }


 if (VAR_15 == -1 && VAR_4 == VAR_0) {





  FUNC_1();
 }

 if (VAR_15 == -1)
  return (VAR_4);

 VAR_16 += VAR_15;

 if (VAR_14)
  *VAR_14 = VAR_8 - VAR_16;
 else if (VAR_16 != VAR_8)
  return (VAR_1);
 return (0);
}

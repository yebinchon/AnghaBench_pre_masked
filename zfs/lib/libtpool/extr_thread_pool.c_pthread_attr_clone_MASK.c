
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int dummy; } ;
typedef int pthread_attr_t ;
typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,size_t,int *) ;
 int FUNC_2 (int const*,int*) ;
 int FUNC_3 (int const*,size_t*) ;
 int FUNC_4 (int const*,int*) ;
 int FUNC_5 (int const*,struct sched_param*) ;
 int FUNC_6 (int const*,int*) ;
 int FUNC_7 (int const*,int*) ;
 int FUNC_8 (int const*,void**,size_t*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,size_t,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,size_t) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,struct sched_param*) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,void*,size_t) ;

__attribute__((used)) static int
FUNC_18(pthread_attr_t *VAR_0, const pthread_attr_t *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_9(VAR_0);
 if (VAR_2 || (VAR_1 == ((void*)0)))
  return (VAR_2);
 int VAR_3;
 VAR_2 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_2 == 0)
  VAR_2 = FUNC_11(VAR_0, VAR_3);
 if (VAR_2)
  goto error;

 size_t VAR_4;
 VAR_2 = FUNC_3(VAR_1, &VAR_4);
 if (VAR_2 == 0)
  VAR_2 = FUNC_12(VAR_0, VAR_4);
 if (VAR_2)
  goto error;

 int VAR_5;
 VAR_2 = FUNC_4(VAR_1, &VAR_5);
 if (VAR_2 == 0)
  VAR_2 = FUNC_13(VAR_0, VAR_5);
 if (VAR_2)
  goto error;

 struct sched_param VAR_6;
 VAR_2 = FUNC_5(VAR_1, &VAR_6);
 if (VAR_2 == 0)
  VAR_2 = FUNC_14(VAR_0, &VAR_6);
 if (VAR_2)
  goto error;

 int VAR_7;
 VAR_2 = FUNC_6(VAR_1, &VAR_7);
 if (VAR_2 == 0)
  VAR_2 = FUNC_15(VAR_0, VAR_7);
 if (VAR_2)
  goto error;

 int VAR_8;
 VAR_2 = FUNC_7(VAR_1, &VAR_8);
 if (VAR_2 == 0)
  VAR_2 = FUNC_16(VAR_0, VAR_8);
 if (VAR_2)
  goto error;

 void *VAR_9;
 size_t VAR_10;
 VAR_2 = FUNC_8(VAR_1, &VAR_9, &VAR_10);
 if (VAR_2 == 0)
  VAR_2 = FUNC_17(VAR_0, VAR_9, VAR_10);
 if (VAR_2)
  goto error;

 return (0);
error:
 FUNC_0(VAR_0);
 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (char*,int,int *,int *,int *) ;
 void* FUNC_1 (char*,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;

int
FUNC_5(void)
{
 int VAR_12 = 0;

 VAR_10 = FUNC_2(VAR_11);
 if (VAR_10 == ((void*)0))
  return (-VAR_0);

 VAR_2 = FUNC_1("spl", ((void*)0));
 if (VAR_2 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_0("taskq-all", 0444, VAR_2,
     &VAR_8, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_0("taskq", 0444, VAR_2,
     &VAR_9, ((void*)0));
 if (VAR_6 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_3 = FUNC_1("kmem", VAR_2);
 if (VAR_3 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_0("slab", 0444, VAR_3,
     &VAR_1, ((void*)0));
 if (VAR_4 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_1("kstat", VAR_2);
 if (VAR_5 == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto out;
 }
out:
 if (VAR_12) {
  FUNC_3("kstat", VAR_2);
  FUNC_3("slab", VAR_3);
  FUNC_3("kmem", VAR_2);
  FUNC_3("taskq-all", VAR_2);
  FUNC_3("taskq", VAR_2);
  FUNC_3("spl", ((void*)0));
  FUNC_4(VAR_10);
 }

 return (VAR_12);
}

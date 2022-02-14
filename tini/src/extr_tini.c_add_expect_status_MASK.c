
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,long) ;
 int FUNC_1 (int ,long) ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long FUNC_2 (char*,char**,int) ;

int FUNC_3(char* VAR_3) {
 long VAR_4 = 0;
 char* VAR_5 = ((void*)0);
 VAR_4 = FUNC_2(VAR_3, &VAR_5, 10);

 if ((VAR_5 == ((void*)0)) || (*VAR_5 != 0)) {
  return 1;
 }

 if ((VAR_4 < VAR_1) || (VAR_4 > VAR_0)) {
  return 1;
 }

 FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_4);
 return 0;
}

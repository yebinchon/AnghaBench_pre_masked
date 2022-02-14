
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mevent {int dummy; } ;
struct esync {int e_cond; int e_mt; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct mevent* FUNC_1 (int,int ,int ,struct esync*) ;
 int FUNC_2 (struct mevent*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static void *
FUNC_13(void *VAR_2)
{
 struct esync VAR_3;
 struct mevent *VAR_4;
 char VAR_5[128];
 int VAR_6 = (int)(uintptr_t) VAR_2;
 int VAR_7;

 FUNC_8(&VAR_3.e_mt, ((void*)0));
 FUNC_5(&VAR_3.e_cond, ((void*)0));

 FUNC_9(&VAR_3.e_mt);

 VAR_4 = FUNC_1(VAR_6, VAR_0, VAR_1, &VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_3("Could not allocate echoer event\n");
  FUNC_0(1);
 }

 while (!FUNC_6(&VAR_3.e_cond, &VAR_3.e_mt)) {
  VAR_7 = FUNC_11(VAR_6, VAR_5, sizeof(VAR_5));
  if (VAR_7 > 0) {
   FUNC_12(VAR_6, VAR_5, VAR_7);
   FUNC_12(0, VAR_5, VAR_7);
  } else {
   break;
  }
 }

 FUNC_2(VAR_4);

 FUNC_10(&VAR_3.e_mt);
 FUNC_7(&VAR_3.e_mt);
 FUNC_4(&VAR_3.e_cond);

 return (((void*)0));
}

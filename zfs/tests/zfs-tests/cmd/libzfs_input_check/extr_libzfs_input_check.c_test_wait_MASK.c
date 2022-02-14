
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{
 nvlist_t *VAR_3 = FUNC_3();
 nvlist_t *VAR_4 = FUNC_3();

 FUNC_1(VAR_3, "wait_activity", 2);
 FUNC_2(VAR_4, "wait_tag", 0xdeadbeefdeadbeef);

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);

 FUNC_4(VAR_3);
 FUNC_4(VAR_4);
}

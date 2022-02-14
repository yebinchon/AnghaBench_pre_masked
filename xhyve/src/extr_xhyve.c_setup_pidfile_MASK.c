
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int (*) ()) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,int) ;
 int * VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,void*,int ) ;

__attribute__((used)) static int
FUNC_9()
{
 int VAR_5, VAR_6, VAR_7;
 char VAR_8[21];

 if (VAR_3 == ((void*)0))
  return 0;

 VAR_7 = FUNC_3();

 VAR_6 = FUNC_6(VAR_8, "%d", VAR_7);
 if (VAR_6 < 0)
  goto fail;

 VAR_5 = FUNC_4(VAR_3, VAR_0|VAR_1|VAR_2, 0644);
 if (VAR_5 < 0)
  goto fail;

 VAR_6 = FUNC_0(FUNC_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5);
  FUNC_5();
  goto fail;
 }

 if (0 > (FUNC_8(VAR_5, (void*)VAR_8, FUNC_7(VAR_8)))) {
  FUNC_1(VAR_5);
  goto fail;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  goto fail;

 return 0;

fail:
 FUNC_2(VAR_4, "Failed to set up pidfile\n");
 return -1;
}

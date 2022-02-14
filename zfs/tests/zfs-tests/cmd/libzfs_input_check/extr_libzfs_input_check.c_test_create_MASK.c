
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int dataset ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_3)
{
 char VAR_4[VAR_1 + 32];

 (void) FUNC_6(VAR_4, sizeof (VAR_4), "%s/create-fs", VAR_3);

 nvlist_t *VAR_5 = FUNC_4();
 nvlist_t *VAR_6 = FUNC_4();
 nvlist_t *VAR_7 = FUNC_4();

 FUNC_1(VAR_5, "type", VAR_0);
 FUNC_3(VAR_7, "recordsize", 8192);
 FUNC_2(VAR_6, "props", VAR_7);

 FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6, 0);

 FUNC_5(VAR_5);
 FUNC_5(VAR_6);
}

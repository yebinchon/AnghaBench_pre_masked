
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int bookmark ;


 int FUNC_0 (int ,char const*,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*,scalar_t__) ;
 int FUNC_8 (char*,char const*,int) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_2, const char *VAR_3)
{
 nvlist_t *VAR_4 = FUNC_4();
 nvlist_t *VAR_5 = FUNC_4();
 char VAR_6[VAR_0 + 32];

 FUNC_3(VAR_4, "bookname", "testbookmark");
 FUNC_1(VAR_5, VAR_3);
 FUNC_2(VAR_4, "snapnv", VAR_5);

 FUNC_0(VAR_1, VAR_2, VAR_4, ((void*)0), 0);

 FUNC_5(VAR_5);
 FUNC_5(VAR_4);

 FUNC_8(VAR_6, VAR_2, sizeof (VAR_6));
 *FUNC_6(VAR_6, '@') = '\0';
 FUNC_7(VAR_6, "#testbookmark", sizeof (VAR_6) -
     FUNC_9(VAR_6));
 FUNC_10(VAR_6);
}

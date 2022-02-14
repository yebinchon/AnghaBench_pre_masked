
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refTables {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,char const*,char*,int,int) ;
 int FUNC_2 (void*,char const*,char*,int,int) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,void*) ;
 int * VAR_2 ;
 int FUNC_5 (void*,int ,int) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, char *VAR_4, int VAR_5, int VAR_6)
{
 void *VAR_7;
 int VAR_8;

 FUNC_0(VAR_2 != ((void*)0));
 VAR_7 = FUNC_3(VAR_2, VAR_0);





 if (VAR_7 == ((void*)0))
  return (0);

 FUNC_5(VAR_7, 0, sizeof (struct refTables));

 if (VAR_5 < VAR_1)
  VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_4(VAR_2, VAR_7);
 return (VAR_8);
}

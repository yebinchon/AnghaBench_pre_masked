
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*,int *,int) ;
 int FUNC_2 (TYPE_1__*,char*,int,int,...) ;
 TYPE_1__* FUNC_3 () ;
 long FUNC_4 (char*,int *,int) ;

__attribute__((used)) static char *
FUNC_5()
{
 StringInfo VAR_0 = FUNC_3();
 int VAR_1, VAR_2, VAR_3;







 char *VAR_4 = FUNC_1("server_version_num", ((void*)0), 0);
 long VAR_5 = FUNC_4(VAR_4, ((void*)0), 10);

 VAR_1 = VAR_5 / 10000;
 VAR_2 = (VAR_5 / 100) % 100;
 VAR_3 = VAR_5 % 100;

 if (VAR_5 < 100000)
 {
  FUNC_0(VAR_1 == 9 && VAR_2 == 6);
  FUNC_2(VAR_0, "%d.%d.%d", VAR_1, VAR_2, VAR_3);
 }
 else
 {
  FUNC_0(VAR_1 >= 10 && VAR_2 == 0);
  FUNC_2(VAR_0, "%d.%d", VAR_1, VAR_3);
 }

 return VAR_0->data;
}

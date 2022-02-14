
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 int FUNC_5 (int *,char const*,char const*,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;

Connection *
FUNC_9(const char *VAR_5, const char *VAR_6)
{
 Connection *VAR_7 = ((void*)0);
 int VAR_8;

 if (FUNC_4("http", VAR_6) == 0)
  VAR_7 = FUNC_6(VAR_0);
 else if (FUNC_4("https", VAR_6) == 0)
  VAR_7 = FUNC_6(VAR_1);
 else
  FUNC_0(VAR_4,
    (FUNC_1(VAR_2),
     FUNC_3("scheme \"%s\" not supported for telemetry", VAR_6)));

 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_5(VAR_7, VAR_5, VAR_6, 0);

 if (VAR_8 < 0)
 {
  const char *VAR_9 = FUNC_8(VAR_7);

  FUNC_7(VAR_7);
  VAR_7 = ((void*)0);

  FUNC_0(VAR_4,
    (FUNC_1(VAR_3),
     FUNC_3("telemetry could not connect to \"%s\"", VAR_5),
     FUNC_2("%s", VAR_9)));
 }

 return VAR_7;
}

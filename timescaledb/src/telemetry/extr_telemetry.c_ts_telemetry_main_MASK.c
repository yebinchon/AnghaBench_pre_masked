
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HttpResponseState ;
typedef int HttpRequest ;
typedef scalar_t__ HttpError ;
typedef int Connection ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (scalar_t__) ;
 int * FUNC_16 (char const*,char const*) ;
 int FUNC_17 () ;

bool
FUNC_18(const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 HttpError VAR_5;
 Connection *VAR_6;
 HttpRequest *VAR_7;
 HttpResponseState *VAR_8;
 bool VAR_9 = 0;

 if (!FUNC_17())
  return 1;

 if (!FUNC_2())
 {
  VAR_9 = 1;
  FUNC_3();
 }

 VAR_6 = FUNC_16(VAR_2, VAR_4);

 if (VAR_6 == ((void*)0))
  goto cleanup;

 VAR_7 = FUNC_6(VAR_2, VAR_3);

 VAR_8 = FUNC_10();

 VAR_5 = FUNC_14(VAR_6, VAR_7, VAR_8);

 FUNC_8(VAR_7);
 FUNC_7(VAR_6);

 if (VAR_5 != VAR_0)
 {
  FUNC_4(VAR_1, "telemetry error: %s", FUNC_15(VAR_5));
  goto cleanup;
 }

 if (!FUNC_13(VAR_8))
 {
  FUNC_4(VAR_1,
    "telemetry got unexpected HTTP response status: %d",
    FUNC_12(VAR_8));
  goto cleanup;
 }





 FUNC_5(FUNC_9(VAR_8));

 FUNC_11(VAR_8);

 if (VAR_9)
  FUNC_1();
 return 1;

cleanup:
 if (VAR_9)
  FUNC_0();
 return 0;
}

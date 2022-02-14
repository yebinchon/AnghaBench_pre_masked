
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HttpResponseState ;
typedef int HttpRequest ;
typedef scalar_t__ HttpError ;
typedef int Datum ;
typedef scalar_t__ ConnectionType ;
typedef int Connection ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char const*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *,char*,int *,int) ;
 int * FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 char const* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int *,int *) ;
 char const* FUNC_18 (scalar_t__) ;

__attribute__((used)) static Datum
FUNC_19(ConnectionType VAR_5, int VAR_6, char *VAR_7, int VAR_8)
{
 Connection *VAR_9;
 HttpRequest *VAR_10;
 HttpResponseState *VAR_11 = ((void*)0);
 HttpError VAR_12;
 Datum VAR_13;

 VAR_9 = FUNC_7(VAR_5);

 if (VAR_9 == ((void*)0))
  return FUNC_1("could not initialize a connection");

 if (FUNC_6(VAR_9, VAR_7, ((void*)0), VAR_8) < 0)
 {
  const char *VAR_14 = FUNC_9(VAR_9);

  FUNC_8(VAR_9);
  FUNC_4(VAR_1, "connection error: %s", VAR_14);
 }






 VAR_10 = FUNC_3(VAR_6);

 VAR_11 = FUNC_13();

 VAR_12 = FUNC_17(VAR_9, VAR_10, VAR_11);

 FUNC_11(VAR_10);
 FUNC_8(VAR_9);

 if (VAR_12 != VAR_2)
  FUNC_4(VAR_1, "%s", FUNC_18(VAR_12));

 if (!FUNC_16(VAR_11))
  FUNC_4(VAR_1,
    "endpoint sent back unexpected HTTP status: %d",
    FUNC_15(VAR_11));

 VAR_13 = FUNC_2(VAR_3, FUNC_0(FUNC_12(VAR_11)));

 FUNC_14(VAR_11);

 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int *) ;
 int VAR_2 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(int VAR_3, char **VAR_4)
{
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 char **VAR_7 = ((void*)0);
 int VAR_8 = 0;
 VAR_4++;
 VAR_3--;
 if (VAR_3 < 3) {
  (void) FUNC_3(VAR_2, "%s", FUNC_4("too few arguments\n"));
  FUNC_7(VAR_0);
 }

 VAR_5 = VAR_4[0];
 VAR_6 = VAR_4[1];
 VAR_7 = VAR_4 + 2;
 VAR_8 = VAR_3 - 2;

 nvlist_t *VAR_9 = FUNC_1();

 for (int VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  FUNC_0(VAR_9, VAR_7[VAR_10]);
 }

 int VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_9);
 FUNC_2(VAR_9);

 switch (VAR_11) {
 case 0:
  break;
 case 129:
  (void) FUNC_3(VAR_2,
      FUNC_4("provided snapshot %s does not exist\n"), VAR_5);
  break;
 case 132:
  (void) FUNC_3(VAR_2, FUNC_4("specified redaction bookmark "
      "(%s) provided already exists\n"), VAR_6);
  break;
 case 130:
  (void) FUNC_3(VAR_2, "%s", FUNC_4("provided bookmark name cannot "
      "be used, final name would be too long\n"));
  break;
 case 134:
  (void) FUNC_3(VAR_2, "%s", FUNC_4("too many redaction snapshots "
      "specified\n"));
  break;
 case 131:
  (void) FUNC_3(VAR_2, "%s", FUNC_4("redaction snapshot must be "
      "descendent of snapshot being redacted\n"));
  break;
 case 133:
  (void) FUNC_3(VAR_2, "%s", FUNC_4("attempted to redact redacted "
      "dataset or with respect to redacted dataset\n"));
  break;
 case 128:
  (void) FUNC_3(VAR_2, "%s", FUNC_4("redaction bookmarks feature "
      "not enabled\n"));
  break;
 default:
  (void) FUNC_3(VAR_2, FUNC_4("internal error: %s\n"),
      FUNC_6(VAR_1));
 }

 return (VAR_11);
}

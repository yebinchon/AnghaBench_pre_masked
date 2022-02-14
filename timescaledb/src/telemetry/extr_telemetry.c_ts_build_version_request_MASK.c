
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int HttpRequest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int,char*,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,char const*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ) ;

HttpRequest *
FUNC_7(const char *VAR_6, const char *VAR_7)
{
 char VAR_8[5];
 HttpRequest *VAR_9;
 StringInfo VAR_10 = FUNC_0();

 FUNC_1(VAR_8, 5, "%d", VAR_10->len);


 VAR_9 = FUNC_2(VAR_3);

 FUNC_5(VAR_9, VAR_7);
 FUNC_6(VAR_9, VAR_4);
 FUNC_4(VAR_9, VAR_1, VAR_5);
 FUNC_4(VAR_9, VAR_0, VAR_8);
 FUNC_4(VAR_9, VAR_2, VAR_6);
 FUNC_3(VAR_9, VAR_10->data, VAR_10->len);

 return VAR_9;
}

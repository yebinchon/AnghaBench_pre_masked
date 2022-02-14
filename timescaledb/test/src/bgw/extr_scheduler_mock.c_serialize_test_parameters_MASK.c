
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_15__ {int root; } ;
struct TYPE_12__ {void* numeric; } ;
struct TYPE_14__ {TYPE_1__ val; void* type; } ;
struct TYPE_13__ {scalar_t__ len; char* data; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbParseState ;
typedef TYPE_4__ Jsonb ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 TYPE_4__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 TYPE_2__* FUNC_8 () ;
 TYPE_3__* FUNC_9 (int **,int ,TYPE_3__*) ;

__attribute__((used)) static char *
FUNC_10(int32 VAR_6)
{
 JsonbValue *VAR_7;
 JsonbValue VAR_8;
 JsonbParseState *VAR_9 = ((void*)0);
 Jsonb *VAR_10;
 StringInfo VAR_11 = FUNC_8();
 JsonbValue VAR_12;

 VAR_12.type = VAR_5;
 VAR_12.val.numeric =
  FUNC_1(FUNC_2(VAR_4, FUNC_4((int32) FUNC_3())));

 VAR_8.type = VAR_5;
 VAR_8.val.numeric = FUNC_1(FUNC_2(VAR_4, FUNC_4(VAR_6)));

 VAR_7 = FUNC_9(&VAR_9, VAR_1, ((void*)0));

 VAR_7 = FUNC_9(&VAR_9, VAR_2, &VAR_8);
 VAR_7 = FUNC_9(&VAR_9, VAR_2, &VAR_12);

 VAR_7 = FUNC_9(&VAR_9, VAR_3, ((void*)0));

 VAR_10 = FUNC_6(VAR_7);
 (void) FUNC_5(VAR_11, &VAR_10->root, FUNC_7(VAR_10));
 FUNC_0(VAR_11->len < VAR_0);

 return VAR_11->data;
}

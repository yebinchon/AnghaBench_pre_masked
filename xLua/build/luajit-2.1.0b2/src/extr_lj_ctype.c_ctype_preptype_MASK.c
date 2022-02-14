
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int needsp; int cts; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int len; } ;
typedef int MSize ;
typedef TYPE_1__ GCstr ;
typedef TYPE_2__ CType ;
typedef TYPE_3__ CTRepr ;
typedef int CTInfo ;


 int FUNC_0 (TYPE_3__*,char) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,char const*,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 char const* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(CTRepr *VAR_0, CType *VAR_1, CTInfo VAR_2, const char *VAR_3)
{
  if (FUNC_6(VAR_1->name)) {
    GCstr *VAR_4 = FUNC_5(FUNC_6(VAR_1->name));
    FUNC_3(VAR_0, FUNC_7(VAR_4), VAR_4->len);
  } else {
    if (VAR_0->needsp) FUNC_0(VAR_0, ' ');
    FUNC_1(VAR_0, FUNC_4(VAR_0->cts, VAR_1));
    VAR_0->needsp = 1;
  }
  FUNC_3(VAR_0, VAR_3, (MSize)FUNC_8(VAR_3));
  FUNC_2(VAR_0, VAR_2);
}

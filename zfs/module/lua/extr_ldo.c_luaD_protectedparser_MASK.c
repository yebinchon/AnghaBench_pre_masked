
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ size; int * arr; } ;
struct TYPE_13__ {scalar_t__ size; int * arr; } ;
struct TYPE_12__ {scalar_t__ size; int * arr; } ;
struct TYPE_15__ {TYPE_3__ label; TYPE_2__ gt; TYPE_1__ actvar; } ;
struct SParser {char const* name; char const* mode; TYPE_4__ dyd; int buff; int * z; } ;
struct TYPE_16__ {int nny; int errfunc; int top; } ;
typedef TYPE_5__ lua_State ;
typedef int ZIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ,struct SParser*,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int *,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*,int ) ;

int FUNC_5 (lua_State *VAR_1, ZIO *VAR_2, const char *VAR_3,
                                        const char *VAR_4) {
  struct SParser VAR_5;
  int VAR_6;
  VAR_1->nny++;
  VAR_5.z = VAR_2; VAR_5.name = VAR_3; VAR_5.mode = VAR_4;
  VAR_5.dyd.actvar.arr = ((void*)0); VAR_5.dyd.actvar.size = 0;
  VAR_5.dyd.gt.arr = ((void*)0); VAR_5.dyd.gt.size = 0;
  VAR_5.dyd.label.arr = ((void*)0); VAR_5.dyd.label.size = 0;
  FUNC_3(VAR_1, &VAR_5.buff);
  VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_5, FUNC_4(VAR_1, VAR_1->top), VAR_1->errfunc);
  FUNC_2(VAR_1, &VAR_5.buff);
  FUNC_1(VAR_1, VAR_5.dyd.actvar.arr, VAR_5.dyd.actvar.size);
  FUNC_1(VAR_1, VAR_5.dyd.gt.arr, VAR_5.dyd.gt.size);
  FUNC_1(VAR_1, VAR_5.dyd.label.arr, VAR_5.dyd.label.size);
  VAR_1->nny--;
  return VAR_6;
}

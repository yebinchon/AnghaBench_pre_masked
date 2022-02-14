
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_8__ {size_t info; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct TYPE_11__ {scalar_t__ k; TYPE_2__ u; } ;
struct TYPE_10__ {size_t nuv; size_t* uvmap; void** uvtmp; } ;
typedef size_t MSize ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,size_t,int ,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static MSize FUNC_2(FuncState *VAR_4, MSize VAR_5, ExpDesc *VAR_6)
{
  MSize VAR_7, VAR_8 = VAR_4->nuv;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    if (VAR_4->uvmap[VAR_7] == VAR_5)
      return VAR_7;

  FUNC_0(VAR_4, VAR_4->nuv, VAR_0, "upvalues");
  FUNC_1(VAR_6->k == VAR_2 || VAR_6->k == VAR_3);
  VAR_4->uvmap[VAR_8] = (uint16_t)VAR_5;
  VAR_4->uvtmp[VAR_8] = (uint16_t)(VAR_6->k == VAR_2 ? VAR_5 : VAR_1+VAR_6->u.s.info);
  VAR_4->nuv = VAR_8+1;
  return VAR_8;
}

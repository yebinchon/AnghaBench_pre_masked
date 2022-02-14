
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int typlen; int typbyval; int type_id; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_7__ {int ctype; int typlen; int typbyval; int typid; } ;
typedef int Oid ;
typedef int GapFillLocfColumnState ;
typedef int GapFillInterpolateColumnState ;
typedef int GapFillGroupColumnState ;
typedef int GapFillColumnType ;
typedef TYPE_2__ GapFillColumnState ;






 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (size_t) ;

__attribute__((used)) static GapFillColumnState *
FUNC_2(GapFillColumnType VAR_0, Oid VAR_1)
{
 TypeCacheEntry *VAR_2 = FUNC_0(VAR_1, 0);
 GapFillColumnState *VAR_3;
 size_t VAR_4;

 switch (VAR_0)
 {
  case 130:
  case 131:
   VAR_4 = sizeof(GapFillGroupColumnState);
   break;
  case 128:
   VAR_4 = sizeof(GapFillLocfColumnState);
   break;
  case 129:
   VAR_4 = sizeof(GapFillInterpolateColumnState);
   break;
  default:
   VAR_4 = sizeof(GapFillColumnState);
   break;
 }

 VAR_3 = FUNC_1(VAR_4);
 VAR_3->ctype = VAR_0;
 VAR_3->typid = VAR_2->type_id;
 VAR_3->typbyval = VAR_2->typbyval;
 VAR_3->typlen = VAR_2->typlen;

 return VAR_3;
}

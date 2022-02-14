
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_null; int typlen; int typ_by_val; scalar_t__ val; } ;
typedef TYPE_1__ SegmentInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(SegmentInfo *VAR_0, Datum VAR_1, bool VAR_2)
{
 VAR_0->is_null = VAR_2;
 if (VAR_2)
  VAR_0->val = 0;
 else
  VAR_0->val = FUNC_0(VAR_1, VAR_0->typ_by_val, VAR_0->typlen);
}

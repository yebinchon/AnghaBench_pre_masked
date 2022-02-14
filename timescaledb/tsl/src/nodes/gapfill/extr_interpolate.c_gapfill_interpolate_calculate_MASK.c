
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_12__ {scalar_t__ time; int value; scalar_t__ isnull; } ;
struct TYPE_9__ {int typid; } ;
struct TYPE_11__ {TYPE_1__ base; TYPE_8__ next; TYPE_8__ prev; scalar_t__ lookup_after; scalar_t__ lookup_before; } ;
struct TYPE_10__ {scalar_t__ gapfill_start; scalar_t__ state; } ;
typedef TYPE_2__ GapFillState ;
typedef TYPE_3__ GapFillInterpolateColumnState ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;



 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,TYPE_8__*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 () ;

void
FUNC_13(GapFillInterpolateColumnState *VAR_10, GapFillState *VAR_11,
         int64 VAR_12, Datum *VAR_13, bool *VAR_14)
{
 int64 VAR_15, VAR_16, VAR_17;
 Datum VAR_18, VAR_19;


 if (VAR_10->prev.isnull && VAR_10->lookup_before && VAR_12 == VAR_11->gapfill_start)
  FUNC_10(VAR_11, VAR_10, &VAR_10->prev, VAR_10->lookup_before);

 if (VAR_10->next.isnull && VAR_10->lookup_after &&
  (VAR_2 == VAR_11->state || VAR_3 == VAR_11->state))
  FUNC_10(VAR_11, VAR_10, &VAR_10->next, VAR_10->lookup_after);

 *VAR_14 = VAR_10->prev.isnull || VAR_10->next.isnull;
 if (*VAR_14)
  return;

 VAR_18 = VAR_10->prev.value;
 VAR_19 = VAR_10->next.value;

 VAR_15 = VAR_12;
 VAR_16 = VAR_10->prev.time;
 VAR_17 = VAR_10->next.time;

 switch (VAR_10->base.typid)
 {





  case 130:
   *VAR_13 =
    FUNC_2(VAR_7,
         FUNC_11(VAR_15,
              VAR_16,
              VAR_17,
              FUNC_2(VAR_4, VAR_18),
              FUNC_2(VAR_4, VAR_19)));
   break;
  case 129:
   *VAR_13 =
    FUNC_2(VAR_8,
         FUNC_11(VAR_15,
              VAR_16,
              VAR_17,
              FUNC_2(VAR_5, VAR_18),
              FUNC_2(VAR_5, VAR_19)));
   break;
  case 128:
   *VAR_13 =
    FUNC_2(VAR_9,
         FUNC_11(VAR_15,
              VAR_16,
              VAR_17,
              FUNC_2(VAR_6, VAR_18),
              FUNC_2(VAR_6, VAR_19)));
   break;
  case 132:
   *VAR_13 = FUNC_3(FUNC_5(VAR_15, VAR_16, VAR_17, FUNC_0(VAR_18), FUNC_0(VAR_19)));
   break;
  case 131:
   *VAR_13 = FUNC_4(FUNC_5(VAR_15, VAR_16, VAR_17, FUNC_1(VAR_18), FUNC_1(VAR_19)));
   break;
  default:





   FUNC_6(VAR_1,
     (FUNC_7(VAR_0),
      FUNC_8("unsupported datatype for interpolate: %s",
       FUNC_9(VAR_10->base.typid))));
   FUNC_12();
   break;
 }
}

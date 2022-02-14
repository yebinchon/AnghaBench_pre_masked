
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;
struct TYPE_19__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_21__ {int c; TYPE_1__* L; int sb; } ;
struct TYPE_20__ {int u64; } ;
typedef TYPE_2__ TValue ;
typedef scalar_t__ StrScanFmt ;
typedef TYPE_3__ LexState ;
typedef int LexChar ;
typedef int GCcdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char) ;
 int FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_10 (int const*,TYPE_2__*,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*) ;
 double FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_18(LexState *VAR_18, TValue *VAR_19)
{
  StrScanFmt VAR_20;
  LexChar VAR_21, VAR_22 = 'e';
  FUNC_11(FUNC_6(VAR_18->c));
  if ((VAR_21 = VAR_18->c) == '0' && (FUNC_4(VAR_18) | 0x20) == 'x')
    VAR_22 = 'p';
  while (FUNC_7(VAR_18->c) || VAR_18->c == '.' ||
  ((VAR_18->c == '-' || VAR_18->c == '+') && (VAR_21 | 0x20) == VAR_22)) {
    VAR_21 = VAR_18->c;
    FUNC_4(VAR_18);
  }
  FUNC_3(VAR_18, '\0');
  VAR_20 = FUNC_10((const uint8_t *)FUNC_16(&VAR_18->sb), VAR_19,
   (VAR_3 ? VAR_14 : VAR_15) |
   (VAR_5 ? (VAR_13|VAR_12) : 0));
  if (VAR_3 && VAR_20 == VAR_10) {
    FUNC_17(VAR_19, VAR_6);
  } else if (VAR_20 == VAR_11) {
  } else {
    FUNC_11(VAR_20 == VAR_7);
    FUNC_8(VAR_18, VAR_17, VAR_4);
  }
}

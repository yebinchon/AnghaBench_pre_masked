
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
typedef double lua_Number ;
typedef int int32_t ;
struct TYPE_10__ {double n; int i; int u64; } ;
typedef TYPE_1__ TValue ;
typedef scalar_t__ StrScanFmt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (char const,unsigned char) ;
 int FUNC_3 (char const,int) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (double) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (char const*,TYPE_1__*,scalar_t__,int,int,int,int) ;
 scalar_t__ FUNC_11 (char const*,TYPE_1__*,scalar_t__,int,int,int,int) ;
 scalar_t__ FUNC_12 (char const*,TYPE_1__*,scalar_t__,int,int,int,int) ;
 scalar_t__ FUNC_13 (char const*,TYPE_1__*,scalar_t__,int,int) ;

StrScanFmt FUNC_14(const uint8_t *VAR_13, TValue *VAR_14, uint32_t VAR_15)
{
  int32_t VAR_16 = 0;


  if (FUNC_1(!FUNC_4(*VAR_13))) {
    while (FUNC_5(*VAR_13)) VAR_13++;
    if (*VAR_13 == '+' || *VAR_13 == '-') VAR_16 = (*VAR_13++ == '-');
    if (FUNC_1(*VAR_13 >= 'A')) {
      TValue VAR_17;
      FUNC_8(&VAR_17);
      if (FUNC_2(VAR_13[0],'i') && FUNC_2(VAR_13[1],'n') && FUNC_2(VAR_13[2],'f')) {
 if (VAR_16) FUNC_7(&VAR_17); else FUNC_9(&VAR_17);
 VAR_13 += 3;
 if (FUNC_2(VAR_13[0],'i') && FUNC_2(VAR_13[1],'n') && FUNC_2(VAR_13[2],'i') &&
     FUNC_2(VAR_13[3],'t') && FUNC_2(VAR_13[4],'y')) VAR_13 += 5;
      } else if (FUNC_2(VAR_13[0],'n') && FUNC_2(VAR_13[1],'a') && FUNC_2(VAR_13[2],'n')) {
 VAR_13 += 3;
      }
      while (FUNC_5(*VAR_13)) VAR_13++;
      if (*VAR_13) return VAR_2;
      VAR_14->u64 = VAR_17.u64;
      return VAR_6;
    }
  }


  {
    StrScanFmt VAR_18 = VAR_5;
    int VAR_19 = VAR_0;
    int VAR_20 = (VAR_15 & VAR_7) && *VAR_13 == '0' ? 0 : 10;
    const uint8_t *VAR_21, *VAR_22 = ((void*)0);
    uint32_t VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
    int32_t VAR_26 = 0;


    if (FUNC_1(*VAR_13 <= '0')) {
      if (*VAR_13 == '0') {
 if (FUNC_2(VAR_13[1], 'x'))
   VAR_20 = 16, VAR_19 = VAR_1, VAR_13 += 2;
 else if (FUNC_2(VAR_13[1], 'b'))
   VAR_20 = 2, VAR_19 = VAR_0, VAR_13 += 2;
      }
      for ( ; ; VAR_13++) {
 if (*VAR_13 == '0') {
   VAR_24 = 1;
 } else if (*VAR_13 == '.') {
   if (VAR_22) return VAR_2;
   VAR_22 = VAR_13;
 } else {
   break;
 }
      }
    }


    for (VAR_21 = VAR_13; ; VAR_13++) {
      if (FUNC_0(FUNC_3(*VAR_13, VAR_19))) {
 VAR_25 = VAR_25 * 10 + (*VAR_13 & 15);
 VAR_23++;
      } else if (*VAR_13 == '.') {
 if (VAR_22) return VAR_2;
 VAR_22 = VAR_13;
      } else {
 break;
      }
    }
    if (!(VAR_24 | VAR_23)) return VAR_2;


    if (VAR_22) {
      VAR_18 = VAR_6;
      if (VAR_23) {
 VAR_26 = (int32_t)(VAR_22-(VAR_13-1)); VAR_22 = VAR_13-1;
 while (VAR_26 < 0 && *VAR_22-- == '0') VAR_26++, VAR_23--;
 if (VAR_20 == 16) VAR_26 *= 4;
      }
    }


    if (VAR_20 >= 10 && FUNC_2(*VAR_13, (uint32_t)(VAR_20 == 16 ? 'p' : 'e'))) {
      uint32_t VAR_27;
      int VAR_28 = 0;
      VAR_18 = VAR_6; VAR_13++;
      if (*VAR_13 == '+' || *VAR_13 == '-') VAR_28 = (*VAR_13++ == '-');
      if (!FUNC_4(*VAR_13)) return VAR_2;
      VAR_27 = (*VAR_13++ & 15);
      while (FUNC_4(*VAR_13)) {
 if (VAR_27 < 65536) VAR_27 = VAR_27 * 10 + (*VAR_13 & 15);
 VAR_13++;
      }
      VAR_26 += VAR_28 ? -(int32_t)VAR_27 : (int32_t)VAR_27;
    }


    if (*VAR_13) {


      if (FUNC_2(*VAR_13, 'i')) {
 if (!(VAR_15 & VAR_8)) return VAR_2;
 VAR_13++; VAR_18 = VAR_4;
      } else if (VAR_18 == VAR_5) {
 if (FUNC_2(*VAR_13, 'u')) VAR_13++, VAR_18 = VAR_12;
 if (FUNC_2(*VAR_13, 'l')) {
   VAR_13++;
   if (FUNC_2(*VAR_13, 'l')) VAR_13++, VAR_18 += VAR_3 - VAR_5;
   else if (!(VAR_15 & VAR_7)) return VAR_2;
   else if (sizeof(long) == 8) VAR_18 += VAR_3 - VAR_5;
 }
 if (FUNC_2(*VAR_13, 'u') && (VAR_18 == VAR_5 || VAR_18 == VAR_3))
   VAR_13++, VAR_18 += VAR_12 - VAR_5;
 if ((VAR_18 == VAR_12 && !(VAR_15 & VAR_7)) ||
     (VAR_18 >= VAR_3 && !(VAR_15 & VAR_9)))
   return VAR_2;
      }
      while (FUNC_5(*VAR_13)) VAR_13++;
      if (*VAR_13) return VAR_2;
    }


    if (VAR_18 == VAR_5 && VAR_20 == 10 &&
 (VAR_23 < 10 || (VAR_23 == 10 && *VAR_21 <= '2' && VAR_25 < 0x80000000u+VAR_16))) {
      int32_t VAR_29 = VAR_16 ? -(int32_t)VAR_25 : (int32_t)VAR_25;
      if ((VAR_15 & VAR_11)) {
 VAR_14->n = (double)VAR_29;
 return VAR_6;
      } else {
 VAR_14->i = VAR_29;
 return VAR_5;
      }
    }


    if (VAR_20 == 0 && !(VAR_18 == VAR_6 || VAR_18 == VAR_4))
      return FUNC_13(VAR_21, VAR_14, VAR_18, VAR_16, VAR_23);
    if (VAR_20 == 16)
      VAR_18 = FUNC_12(VAR_21, VAR_14, VAR_18, VAR_15, VAR_26, VAR_16, VAR_23);
    else if (VAR_20 == 2)
      VAR_18 = FUNC_10(VAR_21, VAR_14, VAR_18, VAR_15, VAR_26, VAR_16, VAR_23);
    else
      VAR_18 = FUNC_11(VAR_21, VAR_14, VAR_18, VAR_15, VAR_26, VAR_16, VAR_23);


    if (VAR_18 == VAR_6 && (VAR_15 & VAR_10)) {
      double VAR_30 = VAR_14->n;
      int32_t VAR_31 = FUNC_6(VAR_30);
      if (VAR_30 == (lua_Number)VAR_31) { VAR_14->i = VAR_31; return VAR_5; }
    }
    return VAR_18;
  }
}

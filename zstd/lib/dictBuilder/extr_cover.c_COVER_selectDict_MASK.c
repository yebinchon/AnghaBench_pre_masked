
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ shrinkDict; int zParams; scalar_t__ shrinkDictMaxRegression; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;
struct TYPE_8__ {size_t member_1; size_t member_2; int * member_0; } ;
typedef TYPE_2__ COVER_dictSelection_t ;
typedef int BYTE ;


 size_t FUNC_0 (TYPE_1__,size_t const*,int const*,size_t*,size_t,size_t,int *,size_t) ;
 TYPE_2__ FUNC_1 (size_t) ;
 size_t VAR_0 ;
 size_t FUNC_2 (int *,size_t,int *,size_t,int const*,size_t const*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (int *,int *,size_t) ;

COVER_dictSelection_t FUNC_8(BYTE* VAR_1,
        size_t VAR_2, const BYTE* VAR_3, const size_t* VAR_4, unsigned VAR_5,
        size_t VAR_6, size_t VAR_7, ZDICT_cover_params_t VAR_8, size_t* VAR_9, size_t VAR_10) {

  size_t VAR_11 = 0;
  size_t VAR_12 = 0;
  BYTE* VAR_13 = VAR_1 + VAR_2;

  BYTE * VAR_14 = (BYTE *)FUNC_6(VAR_2);
  BYTE * VAR_15 = (BYTE *)FUNC_6(VAR_2);
  double VAR_16 = ((double)VAR_8.shrinkDictMaxRegression / 100.0) + 1.00;

  if (!VAR_14 || !VAR_15) {
    FUNC_5(VAR_14);
    FUNC_5(VAR_15);
    return FUNC_1(VAR_2);
  }


  FUNC_7(VAR_14, VAR_1, VAR_2);
  VAR_2 = FUNC_2(
    VAR_14, VAR_2, VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5, VAR_8.zParams);

  if (FUNC_3(VAR_2)) {
    FUNC_5(VAR_14);
    FUNC_5(VAR_15);
    return FUNC_1(VAR_2);
  }

  VAR_10 = FUNC_0(VAR_8, VAR_4,
                                                       VAR_3, VAR_9,
                                                       VAR_6, VAR_7,
                                                       VAR_14, VAR_2);

  if (FUNC_4(VAR_10)) {
    FUNC_5(VAR_14);
    FUNC_5(VAR_15);
    return FUNC_1(VAR_10);
  }

  if (VAR_8.shrinkDict == 0) {
    COVER_dictSelection_t VAR_17 = { VAR_14, VAR_2, VAR_10 };
    FUNC_5(VAR_15);
    return VAR_17;
  }

  VAR_11 = VAR_2;
  VAR_12 = VAR_10;
  VAR_2 = VAR_0;


  while (VAR_2 < VAR_11) {
    FUNC_7(VAR_15, VAR_14, VAR_11);
    VAR_2 = FUNC_2(
      VAR_15, VAR_2, VAR_13 - VAR_2, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_8.zParams);

    if (FUNC_3(VAR_2)) {
      FUNC_5(VAR_14);
      FUNC_5(VAR_15);
      return FUNC_1(VAR_2);

    }

    VAR_10 = FUNC_0(VAR_8, VAR_4,
                                                         VAR_3, VAR_9,
                                                         VAR_6, VAR_7,
                                                         VAR_15, VAR_2);

    if (FUNC_4(VAR_10)) {
      FUNC_5(VAR_14);
      FUNC_5(VAR_15);
      return FUNC_1(VAR_10);
    }

    if (VAR_10 <= VAR_12 * VAR_16) {
      COVER_dictSelection_t VAR_18 = { VAR_15, VAR_2, VAR_10 };
      FUNC_5(VAR_14);
      return VAR_18;
    }
    VAR_2 *= 2;
  }
  VAR_2 = VAR_11;
  VAR_10 = VAR_12;
  {
    COVER_dictSelection_t VAR_19 = { VAR_14, VAR_2, VAR_10 };
    FUNC_5(VAR_15);
    return VAR_19;
  }
}

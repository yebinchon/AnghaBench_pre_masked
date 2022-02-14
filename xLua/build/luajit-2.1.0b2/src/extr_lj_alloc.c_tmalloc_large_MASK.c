
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* tchunkptr ;
typedef TYPE_2__* mstate ;
typedef int mchunkptr ;
typedef scalar_t__ binmap_t ;
typedef int bindex_t ;
struct TYPE_19__ {scalar_t__ treemap; size_t dvsize; } ;
struct TYPE_18__ {struct TYPE_18__** child; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,size_t) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,size_t) ;
 int FUNC_11 (int ,size_t) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,size_t) ;
 TYPE_1__** FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void *FUNC_15(mstate VAR_3, size_t VAR_4)
{
  tchunkptr VAR_5 = 0;
  size_t VAR_6 = ~VAR_4+1;
  tchunkptr VAR_7;
  bindex_t VAR_8;
  FUNC_3(VAR_4, VAR_8);

  if ((VAR_7 = *FUNC_13(VAR_3, VAR_8)) != 0) {

    size_t VAR_9 = VAR_4 << FUNC_8(VAR_8);
    tchunkptr VAR_10 = 0;
    for (;;) {
      tchunkptr VAR_11;
      size_t VAR_12 = FUNC_2(VAR_7) - VAR_4;
      if (VAR_12 < VAR_6) {
 VAR_5 = VAR_7;
 if ((VAR_6 = VAR_12) == 0)
   break;
      }
      VAR_11 = VAR_7->child[1];
      VAR_7 = VAR_7->child[(VAR_9 >> (VAR_1-VAR_2)) & 1];
      if (VAR_11 != 0 && VAR_11 != VAR_7)
 VAR_10 = VAR_11;
      if (VAR_7 == 0) {
 VAR_7 = VAR_10;
 break;
      }
      VAR_9 <<= 1;
    }
  }

  if (VAR_7 == 0 && VAR_5 == 0) {
    binmap_t VAR_13 = FUNC_6(FUNC_4(VAR_8)) & VAR_3->treemap;
    if (VAR_13 != 0)
      VAR_7 = *FUNC_13(VAR_3, FUNC_9(VAR_13));
  }

  while (VAR_7 != 0) {
    size_t VAR_14 = FUNC_2(VAR_7) - VAR_4;
    if (VAR_14 < VAR_6) {
      VAR_6 = VAR_14;
      VAR_5 = VAR_7;
    }
    VAR_7 = FUNC_7(VAR_7);
  }


  if (VAR_5 != 0 && VAR_6 < (size_t)(VAR_3->dvsize - VAR_4)) {
    mchunkptr VAR_15 = FUNC_1(VAR_5, VAR_4);
    FUNC_14(VAR_3, VAR_5);
    if (VAR_6 < VAR_0) {
      FUNC_10(VAR_3, VAR_5, (VAR_6 + VAR_4));
    } else {
      FUNC_12(VAR_3, VAR_5, VAR_4);
      FUNC_11(VAR_15, VAR_6);
      FUNC_5(VAR_3, VAR_15, VAR_6);
    }
    return FUNC_0(VAR_5);
  }
  return ((void*)0);
}

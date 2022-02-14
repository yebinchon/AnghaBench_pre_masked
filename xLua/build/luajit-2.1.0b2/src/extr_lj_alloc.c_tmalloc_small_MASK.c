
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int tchunkptr ;
typedef TYPE_1__* mstate ;
typedef int mchunkptr ;
typedef int bindex_t ;
struct TYPE_8__ {int treemap; } ;


 size_t VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,size_t) ;
 int FUNC_6 (TYPE_1__*,int ,size_t) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (TYPE_1__*,int ,size_t) ;
 int * FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static void *FUNC_11(mstate VAR_1, size_t VAR_2)
{
  tchunkptr VAR_3, VAR_4;
  mchunkptr VAR_5;
  size_t VAR_6;
  bindex_t VAR_7 = FUNC_4(VAR_1->treemap);

  VAR_4 = VAR_3 = *FUNC_9(VAR_1, VAR_7);
  VAR_6 = FUNC_2(VAR_3) - VAR_2;

  while ((VAR_3 = FUNC_3(VAR_3)) != 0) {
    size_t VAR_8 = FUNC_2(VAR_3) - VAR_2;
    if (VAR_8 < VAR_6) {
      VAR_6 = VAR_8;
      VAR_4 = VAR_3;
    }
  }

  VAR_5 = FUNC_1(VAR_4, VAR_2);
  FUNC_10(VAR_1, VAR_4);
  if (VAR_6 < VAR_0) {
    FUNC_6(VAR_1, VAR_4, (VAR_6 + VAR_2));
  } else {
    FUNC_8(VAR_1, VAR_4, VAR_2);
    FUNC_7(VAR_5, VAR_6);
    FUNC_5(VAR_1, VAR_5, VAR_6);
  }
  return FUNC_0(VAR_4);
}

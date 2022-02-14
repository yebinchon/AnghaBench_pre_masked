
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* mchunkptr ;
struct TYPE_20__ {size_t head; } ;
struct TYPE_19__ {size_t topsize; size_t dvsize; TYPE_2__* dv; TYPE_2__* top; } ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (char*) ;
 void* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,size_t) ;
 size_t FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_6 (TYPE_2__*,size_t,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,size_t) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,size_t) ;

__attribute__((used)) static void *FUNC_10(mstate VAR_1, char *VAR_2, char *VAR_3, size_t VAR_4)
{
  mchunkptr VAR_5 = FUNC_0(VAR_2);
  mchunkptr VAR_6 = FUNC_0(VAR_3);
  size_t VAR_7 = (size_t)((char *)VAR_6 - (char *)VAR_5);
  mchunkptr VAR_8 = FUNC_2(VAR_5, VAR_4);
  size_t VAR_9 = VAR_7 - VAR_4;
  FUNC_8(VAR_1, VAR_5, VAR_4);


  if (VAR_6 == VAR_1->top) {
    size_t VAR_10 = VAR_1->topsize += VAR_9;
    VAR_1->top = VAR_8;
    VAR_8->head = VAR_10 | VAR_0;
  } else if (VAR_6 == VAR_1->dv) {
    size_t VAR_11 = VAR_1->dvsize += VAR_9;
    VAR_1->dv = VAR_8;
    FUNC_7(VAR_8, VAR_11);
  } else {
    if (!FUNC_4(VAR_6)) {
      size_t VAR_12 = FUNC_3(VAR_6);
      FUNC_9(VAR_1, VAR_6, VAR_12);
      VAR_6 = FUNC_2(VAR_6, VAR_12);
      VAR_9 += VAR_12;
    }
    FUNC_6(VAR_8, VAR_9, VAR_6);
    FUNC_5(VAR_1, VAR_8, VAR_9);
  }

  return FUNC_1(VAR_5);
}

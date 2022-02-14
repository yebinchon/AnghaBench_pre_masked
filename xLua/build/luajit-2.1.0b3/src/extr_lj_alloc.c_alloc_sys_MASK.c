
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* msegmentptr ;
typedef TYPE_3__* mchunkptr ;
struct TYPE_18__ {size_t head; } ;
struct TYPE_17__ {char* base; int size; struct TYPE_17__* next; } ;
struct TYPE_16__ {size_t topsize; TYPE_3__* top; TYPE_2__ seg; } ;


 scalar_t__ FUNC_0 (size_t) ;
 char* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 void* FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*,size_t) ;
 void* FUNC_6 (size_t) ;
 size_t FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,size_t) ;
 void* FUNC_9 (TYPE_1__*,char*,char*,size_t) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_3__*,size_t) ;

__attribute__((used)) static void *FUNC_12(mstate VAR_5, size_t VAR_6)
{
  char *VAR_7 = VAR_0;
  size_t VAR_8 = 0;


  if (FUNC_2(VAR_6 >= VAR_1)) {
    void *VAR_9 = FUNC_6(VAR_6);
    if (VAR_9 != 0)
      return VAR_9;
  }

  {
    size_t VAR_10 = VAR_6 + VAR_4 + VAR_3;
    size_t VAR_11 = FUNC_7(VAR_10);
    if (FUNC_1(VAR_11 > VAR_6)) {
      char *VAR_12 = (char *)(FUNC_0(VAR_11));
      if (VAR_12 != VAR_0) {
 VAR_7 = VAR_12;
 VAR_8 = VAR_11;
      }
    }
  }

  if (VAR_7 != VAR_0) {
    msegmentptr VAR_13 = &VAR_5->seg;

    while (VAR_13 != 0 && VAR_7 != VAR_13->base + VAR_13->size)
      VAR_13 = VAR_13->next;
    if (VAR_13 != 0 && FUNC_10(VAR_13, VAR_5->top)) {
      VAR_13->size += VAR_8;
      FUNC_8(VAR_5, VAR_5->top, VAR_5->topsize + VAR_8);
    } else {
      VAR_13 = &VAR_5->seg;
      while (VAR_13 != 0 && VAR_13->base != VAR_7 + VAR_8)
 VAR_13 = VAR_13->next;
      if (VAR_13 != 0) {
 char *VAR_14 = VAR_13->base;
 VAR_13->base = VAR_7;
 VAR_13->size += VAR_8;
 return FUNC_9(VAR_5, VAR_7, VAR_14, VAR_6);
      } else {
 FUNC_3(VAR_5, VAR_7, VAR_8);
      }
    }

    if (VAR_6 < VAR_5->topsize) {
      size_t VAR_15 = VAR_5->topsize -= VAR_6;
      mchunkptr VAR_16 = VAR_5->top;
      mchunkptr VAR_17 = VAR_5->top = FUNC_5(VAR_16, VAR_6);
      VAR_17->head = VAR_15 | VAR_2;
      FUNC_11(VAR_5, VAR_16, VAR_6);
      return FUNC_4(VAR_16);
    }
  }

  return ((void*)0);
}

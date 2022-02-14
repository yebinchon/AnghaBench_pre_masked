
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* msegmentptr ;
struct TYPE_12__ {size_t size; scalar_t__ base; } ;
struct TYPE_11__ {size_t topsize; scalar_t__ trim_check; scalar_t__ top; } ;


 scalar_t__ FUNC_0 (scalar_t__,size_t,size_t,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,size_t) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_7(mstate VAR_7, size_t VAR_8)
{
  size_t VAR_9 = 0;
  if (VAR_8 < VAR_2 && FUNC_4(VAR_7)) {
    VAR_8 += VAR_6;

    if (VAR_7->topsize > VAR_8) {

      size_t VAR_10 = VAR_1;
      size_t VAR_11 = ((VAR_7->topsize - VAR_8 + (VAR_10 - VAR_5)) / VAR_10 -
        VAR_5) * VAR_10;
      msegmentptr VAR_12 = FUNC_6(VAR_7, (char *)VAR_7->top);

      if (VAR_12->size >= VAR_11 &&
   !FUNC_2(VAR_7, VAR_12)) {
 size_t VAR_13 = VAR_12->size - VAR_11;

 if ((FUNC_0(VAR_12->base, VAR_12->size, VAR_13, VAR_0) != VAR_4) ||
     (FUNC_1(VAR_12->base + VAR_13, VAR_11) == 0)) {
   VAR_9 = VAR_11;
 }
      }

      if (VAR_9 != 0) {
 VAR_12->size -= VAR_9;
 FUNC_3(VAR_7, VAR_7->top, VAR_7->topsize - VAR_9);
      }
    }


    VAR_9 += FUNC_5(VAR_7);


    if (VAR_9 == 0 && VAR_7->topsize > VAR_7->trim_check)
      VAR_7->trim_check = VAR_3;
  }

  return (VAR_9 != 0)? 1 : 0;
}

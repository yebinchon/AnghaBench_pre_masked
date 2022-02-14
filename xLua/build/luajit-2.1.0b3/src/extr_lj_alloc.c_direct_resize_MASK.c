
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* mchunkptr ;
struct TYPE_8__ {int head; } ;
struct TYPE_7__ {size_t prev_foot; size_t head; } ;


 scalar_t__ FUNC_0 (char*,size_t,size_t,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 TYPE_5__* FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (size_t) ;
 size_t FUNC_4 (scalar_t__) ;

__attribute__((used)) static mchunkptr FUNC_5(mchunkptr VAR_10, size_t VAR_11)
{
  size_t VAR_12 = FUNC_2(VAR_10);
  if (FUNC_3(VAR_11))
    return ((void*)0);

  if (VAR_12 >= VAR_11 + VAR_9 &&
      (VAR_12 - VAR_11) <= (VAR_4 >> 1)) {
    return VAR_10;
  } else {
    size_t VAR_13 = VAR_10->prev_foot & ~VAR_7;
    size_t VAR_14 = VAR_12 + VAR_13 + VAR_5;
    size_t VAR_15 = FUNC_4(VAR_11 + VAR_8 + VAR_1);
    char *VAR_16 = (char *)FUNC_0((char *)VAR_10 - VAR_13,
       VAR_14, VAR_15, VAR_0);
    if (VAR_16 != VAR_3) {
      mchunkptr VAR_17 = (mchunkptr)(VAR_16 + VAR_13);
      size_t VAR_18 = VAR_15 - VAR_13 - VAR_5;
      VAR_17->head = VAR_18|VAR_2;
      FUNC_1(VAR_17, VAR_18)->head = VAR_6;
      FUNC_1(VAR_17, VAR_18+VAR_9)->head = 0;
      return VAR_17;
    }
  }
  return ((void*)0);
}

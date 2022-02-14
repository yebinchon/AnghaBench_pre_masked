
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
typedef size_t hashval_t ;
struct TYPE_6__ {scalar_t__* entries; } ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 size_t FUNC_1 (size_t,TYPE_1__*) ;
 size_t FUNC_2 (size_t,TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static PTR *
FUNC_4 (htab_t VAR_2, hashval_t VAR_3)
{
  hashval_t VAR_4 = FUNC_1 (VAR_3, VAR_2);
  size_t VAR_5 = FUNC_3 (VAR_2);
  PTR *VAR_6 = VAR_2->entries + VAR_4;
  hashval_t VAR_7;

  if (*VAR_6 == VAR_1)
    return VAR_6;
  else if (*VAR_6 == VAR_0)
    FUNC_0 ();

  VAR_7 = FUNC_2 (VAR_3, VAR_2);
  for (;;)
    {
      VAR_4 += VAR_7;
      if (VAR_4 >= VAR_5)
 VAR_4 -= VAR_5;

      VAR_6 = VAR_2->entries + VAR_4;
      if (*VAR_6 == VAR_1)
 return VAR_6;
      else if (*VAR_6 == VAR_0)
 FUNC_0 ();
    }
}

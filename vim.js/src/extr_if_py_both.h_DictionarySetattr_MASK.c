
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dict; } ;
struct TYPE_4__ {scalar_t__ dv_lock; } ;
typedef int PyObject ;
typedef TYPE_2__ DictionaryObject ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(DictionaryObject *VAR_4, char *VAR_5, PyObject *VAR_6)
{
    if (VAR_6 == ((void*)0))
    {
 FUNC_2(VAR_0,
  FUNC_0("cannot delete vim.Dictionary attributes"));
 return -1;
    }

    if (FUNC_4(VAR_5, "locked") == 0)
    {
 if (VAR_4->dict->dv_lock == VAR_2)
 {
     FUNC_2(VAR_1,
      FUNC_0("cannot modify fixed dictionary"));
     return -1;
 }
 else
 {
     int VAR_7 = FUNC_3(VAR_6);
     if (VAR_7 == -1)
  return -1;
     else if (VAR_7)
  VAR_4->dict->dv_lock = VAR_3;
     else
  VAR_4->dict->dv_lock = 0;
 }
 return 0;
    }
    else
    {
 FUNC_1(VAR_0, FUNC_0("cannot set attribute %s"), VAR_5);
 return -1;
    }
}

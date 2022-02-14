
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_16__ {int v_dict; } ;
struct TYPE_17__ {TYPE_1__ vval; } ;
typedef TYPE_2__ typval_T ;
struct TYPE_15__ {int v_type; scalar_t__ v_lock; } ;
struct TYPE_18__ {int di_key; TYPE_13__ di_tv; } ;
typedef TYPE_3__ dictitem_T ;
struct TYPE_19__ {scalar_t__ dv_lock; } ;
typedef TYPE_4__ dict_T ;
typedef int char_u ;
struct TYPE_20__ {TYPE_4__* dict; } ;
typedef int PyObject ;
typedef TYPE_5__ DictionaryObject ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_13__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int **) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_1 ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int * FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * VAR_2 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int VAR_3 ;
 int * FUNC_17 (int *,int **) ;
 int VAR_4 ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_22 (TYPE_4__*,int ,int *) ;
 TYPE_3__* FUNC_23 (int *) ;
 int FUNC_24 (TYPE_3__*) ;

__attribute__((used)) static PyObject *
FUNC_25(DictionaryObject *VAR_5, PyObject *VAR_6, PyObject *VAR_7)
{
    dict_T *VAR_8 = VAR_5->dict;

    if (VAR_8->dv_lock)
    {
 VAR_3;
 return ((void*)0);
    }

    if (VAR_7)
    {
 typval_T VAR_9;

 if (FUNC_0(VAR_7, &VAR_9) == -1)
     return ((void*)0);

 FUNC_19();
 FUNC_22(VAR_5->dict, VAR_9.vval.v_dict, (char_u *) "force");
 FUNC_20(&VAR_9);
 if (FUNC_18())
     return ((void*)0);
    }
    else
    {
 PyObject *VAR_10;

 if (!FUNC_3(VAR_6, "O", &VAR_10))
     return ((void*)0);

 if (FUNC_9(VAR_10, "keys"))
     return FUNC_25(VAR_5, ((void*)0), VAR_10);
 else
 {
     PyObject *VAR_11;
     PyObject *VAR_12;

     if (!(VAR_11 = FUNC_8(VAR_10)))
  return ((void*)0);

     while ((VAR_12 = FUNC_7(VAR_11)))
     {
  PyObject *VAR_13;
  PyObject *VAR_14;
  PyObject *VAR_15;
  PyObject *VAR_16;
  char_u *VAR_17;
  dictitem_T *VAR_18;

  if (!(VAR_13 = FUNC_10(VAR_12, "")))
  {
      FUNC_13(VAR_11);
      FUNC_13(VAR_12);
      return ((void*)0);
  }

  FUNC_13(VAR_12);

  if (FUNC_12(VAR_13) != 2)
  {
      FUNC_13(VAR_11);
      FUNC_13(VAR_13);
      FUNC_4(VAR_1,
       FUNC_2("expected sequence element of size 2, "
       "but got sequence of size %d"),
       (int) FUNC_12(VAR_13));
      return ((void*)0);
  }

  VAR_14 = FUNC_11(VAR_13, 0);

  if (!(VAR_17 = FUNC_17(VAR_14, &VAR_16)))
  {
      FUNC_13(VAR_11);
      FUNC_13(VAR_13);
      return ((void*)0);
  }

  VAR_18 = FUNC_23(VAR_17);

  FUNC_15(VAR_16);

  if (VAR_18 == ((void*)0))
  {
      FUNC_13(VAR_13);
      FUNC_13(VAR_11);
      FUNC_5();
      return ((void*)0);
  }
  VAR_18->di_tv.v_lock = 0;
  VAR_18->di_tv.v_type = VAR_4;

  VAR_15 = FUNC_11(VAR_13, 1);

  if (FUNC_1(VAR_15, &VAR_18->di_tv) == -1)
  {
      FUNC_13(VAR_11);
      FUNC_13(VAR_13);
      FUNC_24(VAR_18);
      return ((void*)0);
  }

  FUNC_13(VAR_13);

  if (FUNC_21(VAR_8, VAR_18) == VAR_0)
  {
      FUNC_16(VAR_18->di_key);
      FUNC_13(VAR_11);
      FUNC_24(VAR_18);
      return ((void*)0);
  }
     }

     FUNC_13(VAR_11);


     if (FUNC_6())
  return ((void*)0);
 }
    }
    FUNC_14(VAR_2);
    return VAR_2;
}

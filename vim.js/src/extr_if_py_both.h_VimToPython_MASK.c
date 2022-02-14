
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {long v_float; TYPE_1__* v_dict; TYPE_5__* v_list; scalar_t__ v_number; int * v_string; } ;
struct TYPE_15__ {scalar_t__ v_type; TYPE_2__ vval; } ;
typedef TYPE_3__ typval_T ;
typedef scalar_t__ long_u ;
struct TYPE_16__ {TYPE_3__ li_tv; struct TYPE_16__* li_next; } ;
typedef TYPE_4__ listitem_T ;
struct TYPE_17__ {TYPE_4__* lv_first; } ;
typedef TYPE_5__ list_T ;
struct TYPE_18__ {scalar_t__ ht_used; TYPE_7__* ht_array; } ;
typedef TYPE_6__ hashtab_T ;
struct TYPE_19__ {scalar_t__ hi_key; } ;
typedef TYPE_7__ hashitem_T ;
struct TYPE_20__ {TYPE_3__ di_tv; } ;
typedef TYPE_8__ dictitem_T ;
struct TYPE_13__ {TYPE_6__ dv_hashtab; } ;
typedef int PyObject ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_8__* FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (char*,char*,long) ;

__attribute__((used)) static PyObject *
FUNC_11(typval_T *VAR_7, int VAR_8, PyObject *VAR_9)
{
    PyObject *VAR_10;
    PyObject *VAR_11;
    char VAR_12[sizeof(void *) * 2 + 3];


    if (VAR_8 > 100)
    {
 FUNC_8(VAR_1);
 VAR_10 = VAR_1;
 return VAR_10;
    }



    if ((VAR_7->v_type == VAR_4 && VAR_7->vval.v_list != ((void*)0))
     || (VAR_7->v_type == VAR_2 && VAR_7->vval.v_dict != ((void*)0)))
    {
 FUNC_10(VAR_12, "%p",
  VAR_7->v_type == VAR_4 ? (void *)VAR_7->vval.v_list
        : (void *)VAR_7->vval.v_dict);

 if ((VAR_10 = FUNC_1(VAR_9, VAR_12)))
 {
     FUNC_8(VAR_10);
     return VAR_10;
 }
    }

    if (VAR_7->v_type == VAR_6)
 VAR_10 = FUNC_6(VAR_7->vval.v_string == ((void*)0)
     ? "" : (char *)VAR_7->vval.v_string);
    else if (VAR_7->v_type == VAR_5)
    {
 char VAR_13[VAR_0];


 FUNC_10(VAR_13, "%ld", (long)VAR_7->vval.v_number);
 VAR_10 = FUNC_6((char *)VAR_13);
    }
    else if (VAR_7->v_type == VAR_4)
    {
 list_T *VAR_14 = VAR_7->vval.v_list;
 listitem_T *VAR_15;

 if (VAR_14 == ((void*)0))
     return ((void*)0);

 if (!(VAR_10 = FUNC_5(0)))
     return ((void*)0);

 if (FUNC_3(VAR_9, VAR_12, VAR_10))
 {
     FUNC_7(VAR_10);
     return ((void*)0);
 }

 for (VAR_15 = VAR_14->lv_first; VAR_15 != ((void*)0); VAR_15 = VAR_15->li_next)
 {
     if (!(VAR_11 = FUNC_11(&VAR_15->li_tv, VAR_8 + 1, VAR_9)))
     {
  FUNC_7(VAR_10);
  return ((void*)0);
     }
     if (FUNC_4(VAR_10, VAR_11))
     {
  FUNC_7(VAR_11);
  FUNC_7(VAR_10);
  return ((void*)0);
     }
     FUNC_7(VAR_11);
 }
    }
    else if (VAR_7->v_type == VAR_2)
    {

 hashtab_T *VAR_16 = &VAR_7->vval.v_dict->dv_hashtab;
 long_u VAR_17 = VAR_16->ht_used;
 hashitem_T *VAR_18;
 dictitem_T *VAR_19;
 if (VAR_7->vval.v_dict == ((void*)0))
     return ((void*)0);

 if (!(VAR_10 = FUNC_2()))
     return ((void*)0);

 if (FUNC_3(VAR_9, VAR_12, VAR_10))
 {
     FUNC_7(VAR_10);
     return ((void*)0);
 }

 for (VAR_18 = VAR_16->ht_array; VAR_17 > 0; ++VAR_18)
 {
     if (!FUNC_0(VAR_18))
     {
  --VAR_17;

  VAR_19 = FUNC_9(VAR_18);
  if (!(VAR_11 = FUNC_11(&VAR_19->di_tv, VAR_8 + 1, VAR_9)))
  {
      FUNC_7(VAR_10);
      return ((void*)0);
  }
  if (FUNC_3(VAR_10, (char *)VAR_18->hi_key, VAR_11))
  {
      FUNC_7(VAR_10);
      FUNC_7(VAR_11);
      return ((void*)0);
  }
     }
 }
    }
    else
    {
 FUNC_8(VAR_1);
 VAR_10 = VAR_1;
    }

    return VAR_10;
}

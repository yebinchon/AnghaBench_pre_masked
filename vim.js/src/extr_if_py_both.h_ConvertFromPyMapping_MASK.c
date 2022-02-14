
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* v_dict; } ;
struct TYPE_18__ {TYPE_2__ vval; int v_type; } ;
typedef TYPE_3__ typval_T ;
struct TYPE_20__ {TYPE_1__* dict; } ;
struct TYPE_19__ {int ob_type; } ;
struct TYPE_16__ {int dv_refcount; } ;
typedef TYPE_4__ PyObject ;
typedef TYPE_5__ DictionaryObject ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(PyObject *VAR_5, typval_T *VAR_6)
{
    PyObject *VAR_7;
    int VAR_8;

    if (!(VAR_7 = FUNC_2()))
 return -1;

    if (FUNC_5(VAR_5->ob_type, &VAR_0))
    {
 VAR_6->v_type = VAR_2;
 VAR_6->vval.v_dict = (((DictionaryObject *)(VAR_5))->dict);
 ++VAR_6->vval.v_dict->dv_refcount;
 VAR_8 = 0;
    }
    else if (FUNC_1(VAR_5))
 VAR_8 = FUNC_8(VAR_5, VAR_6, VAR_3, VAR_7);
    else if (FUNC_4(VAR_5))
 VAR_8 = FUNC_8(VAR_5, VAR_6, VAR_4, VAR_7);
    else
    {
 FUNC_3(VAR_1,
  FUNC_0("unable to convert %s to vim dictionary"),
  FUNC_7(VAR_5));
 VAR_8 = -1;
    }
    FUNC_6(VAR_7);
    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ dds_guid; } ;
struct TYPE_19__ {scalar_t__ zfs_type; int zfs_hdl; TYPE_1__ zfs_dmustats; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_20__ {struct TYPE_20__* next; TYPE_2__* zhp; } ;
typedef TYPE_3__ iter_stack_frame_t ;
struct TYPE_21__ {int (* func ) (TYPE_2__*,int ) ;int data; TYPE_3__* stack; scalar_t__ allowrecursion; int first; } ;
typedef TYPE_4__ iter_dependents_arg_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int (*) (TYPE_2__*,void*),TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,int (*) (TYPE_2__*,void*),TYPE_4__*) ;
 int FUNC_8 (TYPE_2__*,int ,int (*) (TYPE_2__*,void*),TYPE_4__*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(zfs_handle_t *VAR_5, void *VAR_6)
{
 iter_dependents_arg_t *VAR_7 = VAR_6;
 int VAR_8 = 0;
 boolean_t VAR_9 = VAR_7->first;
 VAR_7->first = VAR_0;

 if (VAR_5->zfs_type == VAR_4) {
  VAR_8 = FUNC_6(VAR_5, FUNC_9, VAR_7);
 } else if (VAR_5->zfs_type != VAR_3) {
  iter_stack_frame_t VAR_10;
  iter_stack_frame_t *VAR_11;





  for (VAR_11 = VAR_7->stack; VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
   if (VAR_11->zhp->zfs_dmustats.dds_guid ==
       VAR_5->zfs_dmustats.dds_guid) {
    if (VAR_7->allowrecursion) {
     FUNC_2(VAR_5);
     return (0);
    } else {
     FUNC_4(VAR_5->zfs_hdl,
         FUNC_0(VAR_2,
         "recursive dependency at '%s'"),
         FUNC_5(VAR_5));
     VAR_8 = FUNC_3(VAR_5->zfs_hdl,
         VAR_1,
         FUNC_0(VAR_2,
         "cannot determine dependent "
         "datasets"));
     FUNC_2(VAR_5);
     return (VAR_8);
    }
   }
  }

  VAR_10.zhp = VAR_5;
  VAR_10.next = VAR_7->stack;
  VAR_7->stack = &VAR_10;
  VAR_8 = FUNC_7(VAR_5, FUNC_9, VAR_7);
  if (VAR_8 == 0)
   VAR_8 = FUNC_8(VAR_5, VAR_0,
       FUNC_9, VAR_7, 0, 0);
  VAR_7->stack = VAR_10.next;
 }

 if (!VAR_9 && VAR_8 == 0)
  VAR_8 = VAR_7->func(VAR_5, VAR_7->data);
 else
  FUNC_2(VAR_5);

 return (VAR_8);
}

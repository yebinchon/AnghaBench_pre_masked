
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct blockif_elem {int dummy; } ;
struct blockif_ctxt {int bc_mtx; int bc_cond; scalar_t__ bc_closing; scalar_t__ bc_isgeom; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (struct blockif_ctxt*,struct blockif_elem*) ;
 scalar_t__ FUNC_1 (struct blockif_ctxt*,int ,struct blockif_elem**) ;
 int FUNC_2 (struct blockif_ctxt*,struct blockif_elem*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

__attribute__((used)) static void *
FUNC_10(void *VAR_1)
{
 struct blockif_ctxt *VAR_2;
 struct blockif_elem *VAR_3;
 pthread_t VAR_4;
 uint8_t *VAR_5;

 VAR_2 = VAR_1;
 if (VAR_2->bc_isgeom)
  VAR_5 = FUNC_4(VAR_0);
 else
  VAR_5 = ((void*)0);
 VAR_4 = FUNC_9();

 FUNC_7(&VAR_2->bc_mtx);
 for (;;) {
  while (FUNC_1(VAR_2, VAR_4, &VAR_3)) {
   FUNC_8(&VAR_2->bc_mtx);
   FUNC_2(VAR_2, VAR_3, VAR_5);
   FUNC_7(&VAR_2->bc_mtx);
   FUNC_0(VAR_2, VAR_3);
  }

  if (VAR_2->bc_closing)
   break;
  FUNC_5(&VAR_2->bc_cond, &VAR_2->bc_mtx);
 }
 FUNC_8(&VAR_2->bc_mtx);

 if (VAR_5)
  FUNC_3(VAR_5);
 FUNC_6(((void*)0));
 return (((void*)0));
}

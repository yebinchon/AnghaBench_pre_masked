
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mh_nchains; struct TYPE_7__* mh_name; int mh_contents; struct TYPE_7__* mh_next; } ;
typedef TYPE_1__ mod_hash_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

void
FUNC_7(mod_hash_t *VAR_2)
{
 mod_hash_t *VAR_3, *VAR_4;

 FUNC_3(&VAR_1);



 if (VAR_2 == VAR_0) {
  VAR_0 = VAR_0->mh_next;
 } else {




  VAR_4 = ((void*)0);
  for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->mh_next) {
   if (VAR_3 == VAR_2) {
    VAR_4->mh_next = VAR_3->mh_next;
    break;
   }
   VAR_4 = VAR_3;
  }
 }
 FUNC_4(&VAR_1);




 FUNC_2(VAR_2);

 FUNC_5(&VAR_2->mh_contents);
 FUNC_1(VAR_2->mh_name, FUNC_6(VAR_2->mh_name) + 1);
 FUNC_1(VAR_2, FUNC_0(VAR_2->mh_nchains));
}

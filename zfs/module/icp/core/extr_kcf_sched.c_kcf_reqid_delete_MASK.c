
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rt_lock; TYPE_2__** rt_idhash; } ;
typedef TYPE_1__ kcf_reqid_table_t ;
struct TYPE_8__ {int an_done; struct TYPE_8__* an_idnext; struct TYPE_8__* an_idprev; } ;
typedef TYPE_2__ kcf_areq_node_t ;
typedef size_t crypto_req_id_t ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (size_t) ;
 size_t VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(kcf_areq_node_t *VAR_2)
{
 int VAR_3;
 kcf_areq_node_t *VAR_4, *VAR_5;
 crypto_req_id_t VAR_6 = FUNC_0(VAR_2);
 kcf_reqid_table_t *VAR_7;

 VAR_7 = VAR_1[VAR_6 & VAR_0];
 VAR_3 = FUNC_1(VAR_6);

 FUNC_4(&VAR_7->rt_lock);

 VAR_4 = VAR_2->an_idnext;
 VAR_5 = VAR_2->an_idprev;
 if (VAR_4 != ((void*)0))
  VAR_4->an_idprev = VAR_5;
 if (VAR_5 != ((void*)0))
  VAR_5->an_idnext = VAR_4;
 else
  VAR_7->rt_idhash[VAR_3] = VAR_4;

 FUNC_2(VAR_2, 0);
 FUNC_3(&VAR_2->an_done);

 FUNC_5(&VAR_7->rt_lock);
}

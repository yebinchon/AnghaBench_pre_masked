
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int rt_lock; TYPE_3__** rt_idhash; } ;
typedef TYPE_1__ kcf_reqid_table_t ;
struct TYPE_13__ {int pd_prov_type; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
typedef int kcf_context_t ;
struct TYPE_14__ {int an_done; int an_lock; int * an_context; int an_state; TYPE_2__* an_provider; struct TYPE_14__* an_idnext; } ;
typedef TYPE_3__ kcf_areq_node_t ;
typedef size_t crypto_req_id_t ;
struct TYPE_15__ {int gs_lock; } ;


 int FUNC_0 (int ) ;


 size_t FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;
 TYPE_8__* VAR_2 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_1__** VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(crypto_req_id_t VAR_4)
{
 int VAR_5;
 kcf_areq_node_t *VAR_6;
 kcf_provider_desc_t *VAR_7;
 kcf_context_t *VAR_8;
 kcf_reqid_table_t *VAR_9;

 VAR_9 = VAR_3[VAR_4 & VAR_0];
 VAR_5 = FUNC_4(VAR_4);

 FUNC_9(&VAR_9->rt_lock);
 for (VAR_6 = VAR_9->rt_idhash[VAR_5]; VAR_6; VAR_6 = VAR_6->an_idnext) {
 if (FUNC_1(VAR_6) == VAR_4) {




  VAR_7 = VAR_6->an_provider;
  FUNC_0(VAR_7 != ((void*)0));

  switch (VAR_7->pd_prov_type) {
  case 128:
   FUNC_9(&VAR_2->gs_lock);
   FUNC_9(&VAR_6->an_lock);


   if (VAR_6->an_state <= VAR_1) {

    FUNC_6(VAR_6);
    if ((VAR_8 = VAR_6->an_context) != ((void*)0))
     FUNC_7(VAR_8, VAR_6);

    FUNC_10(&VAR_6->an_lock);
    FUNC_10(&VAR_2->gs_lock);
    FUNC_10(&VAR_9->rt_lock);


    FUNC_8(VAR_6);
    FUNC_3(VAR_6);
    return;
   }

   FUNC_10(&VAR_6->an_lock);
   FUNC_10(&VAR_2->gs_lock);
   break;

  case 129:





   break;
  default:
   break;
  }





  FUNC_2(VAR_6);
  while (FUNC_1(VAR_6) == VAR_4)
   FUNC_5(&VAR_6->an_done, &VAR_9->rt_lock);
  FUNC_3(VAR_6);
  break;
 }
 }

 FUNC_10(&VAR_9->rt_lock);
}

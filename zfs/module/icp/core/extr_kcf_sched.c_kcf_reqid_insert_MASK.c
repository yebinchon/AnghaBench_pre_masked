
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rt_curid; int rt_lock; TYPE_2__** rt_idhash; } ;
typedef TYPE_1__ kcf_reqid_table_t ;
struct TYPE_7__ {struct TYPE_7__* an_idprev; struct TYPE_7__* an_idnext; } ;
typedef TYPE_2__ kcf_areq_node_t ;
typedef int crypto_req_id_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_1__** VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static crypto_req_id_t
FUNC_6(kcf_areq_node_t *VAR_5)
{
 int VAR_6;
 crypto_req_id_t VAR_7;
 kcf_areq_node_t *VAR_8;
 kcf_reqid_table_t *VAR_9;

 FUNC_2();
 VAR_9 = VAR_4[VAR_0 & VAR_3];
 FUNC_3();

 FUNC_4(&VAR_9->rt_lock);

 VAR_9->rt_curid = VAR_7 =
     (VAR_9->rt_curid - VAR_2) | VAR_1;
 FUNC_1(VAR_5, VAR_7);
 VAR_6 = FUNC_0(VAR_7);
 VAR_8 = VAR_5->an_idnext = VAR_9->rt_idhash[VAR_6];
 VAR_5->an_idprev = ((void*)0);
 if (VAR_8 != ((void*)0))
  VAR_8->an_idprev = VAR_5;

 VAR_9->rt_idhash[VAR_6] = VAR_5;
 FUNC_5(&VAR_9->rt_lock);

 return (VAR_7);
}

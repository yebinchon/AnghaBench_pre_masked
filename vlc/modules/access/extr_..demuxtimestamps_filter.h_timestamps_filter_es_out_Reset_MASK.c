
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_size; scalar_t__* p_elems; } ;
struct tf_es_out_s {int b_discontinuity; int pcrtf; TYPE_1__ es_list; } ;
struct tf_es_out_id_s {int tf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tf_es_out_s *VAR_0)
{
    for(int VAR_1=0; VAR_1<VAR_0->es_list.i_size; VAR_1++)
    {
        struct tf_es_out_id_s *VAR_2 = (struct tf_es_out_id_s *)VAR_0->es_list.p_elems[VAR_1];
        FUNC_0(&VAR_2->tf);
    }
    FUNC_0(&VAR_0->pcrtf);
    VAR_0->b_discontinuity = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_size; scalar_t__* p_elems; } ;
struct tf_es_out_s {TYPE_1__ es_list; } ;
struct tf_es_out_id_s {int * id; } ;
typedef int es_out_id_t ;



__attribute__((used)) static struct tf_es_out_id_s * FUNC_0(struct tf_es_out_s *VAR_0, es_out_id_t *VAR_1)
{
    for(int VAR_2=0; VAR_2<VAR_0->es_list.i_size; VAR_2++)
    {
        struct tf_es_out_id_s *VAR_3 = (struct tf_es_out_id_s *)VAR_0->es_list.p_elems[VAR_2];
        if(VAR_3->id != VAR_1)
            continue;
        return VAR_3;
    }
    return ((void*)0);
}

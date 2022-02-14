
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_array_t ;
struct TYPE_8__ {int b_recyling; int b_restart_decoders_on_reuse; int fmt; scalar_t__ i_next_block_flags; int * p_es; } ;
typedef TYPE_1__ es_pair_t ;
typedef int es_out_id_t ;
struct TYPE_9__ {int i_codec; int i_cat; } ;
typedef TYPE_2__ es_format_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__ const*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_6(vlc_array_t *VAR_1, const es_format_t *VAR_2,
                        es_out_id_t *VAR_3)
{
    es_pair_t *VAR_4 = FUNC_4(sizeof(*VAR_4));
    if (FUNC_3(VAR_4 != ((void*)0)))
    {
        VAR_4->p_es = VAR_3;
        VAR_4->i_next_block_flags = 0;
        VAR_4->b_recyling = 0;
        VAR_4->b_restart_decoders_on_reuse = 1;
        if(FUNC_5(VAR_1, VAR_4) != VAR_0)
        {
            FUNC_2(VAR_4);
            VAR_4 = ((void*)0);
        }
        else
        {
            FUNC_1(&VAR_4->fmt, VAR_2->i_cat, VAR_2->i_codec);
            FUNC_0(&VAR_4->fmt, VAR_2);
        }
    }
    return VAR_4 != ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hevc_tuple_s {scalar_t__ p_nal; } ;
struct TYPE_3__ {struct hevc_tuple_s* rg_pps; struct hevc_tuple_s* rg_sps; struct hevc_tuple_s* rg_vps; } ;
typedef TYPE_1__ decoder_sys_t ;
typedef int block_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ***,int *) ;
 int * FUNC_1 (scalar_t__) ;

__attribute__((used)) static block_t *FUNC_2(decoder_sys_t *VAR_3)
{
    block_t *VAR_4 = ((void*)0);
    block_t **VAR_5 = &VAR_4;
    struct hevc_tuple_s *VAR_6[3] = {VAR_3->rg_vps, VAR_3->rg_sps, VAR_3->rg_pps};
    size_t VAR_7[3] = {VAR_2, VAR_1, VAR_0};
    for(size_t VAR_8=0; VAR_8<3; VAR_8++)
        for(size_t VAR_9=0; VAR_9<VAR_7[VAR_8]; VAR_9++)
        {
            block_t *VAR_10;
            if(VAR_6[VAR_8]->p_nal &&
               (VAR_10 = FUNC_1(VAR_6[VAR_8]->p_nal)))
                FUNC_0(&VAR_5, VAR_10);
        };
    return VAR_4;
}

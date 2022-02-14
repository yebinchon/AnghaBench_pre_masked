
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int bs_t ;
typedef int av1_OBU_sequence_header_t ;
struct TYPE_5__ {int header; int obu_header; } ;
typedef TYPE_1__ av1_OBU_frame_header_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int const*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int const*,size_t) ;
 TYPE_1__* FUNC_4 (int,int) ;

av1_OBU_frame_header_t *
    FUNC_5(const uint8_t *VAR_0, size_t VAR_1,
                               const av1_OBU_sequence_header_t *VAR_2)
{
    bs_t VAR_3;
    FUNC_3(&VAR_3, VAR_0, VAR_1);

    av1_OBU_frame_header_t *VAR_4 = FUNC_4(1, sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);

    if(!FUNC_2(&VAR_3, &VAR_4->obu_header) ||
       !FUNC_1(&VAR_3, &VAR_4->header, VAR_2))
    {
        FUNC_0(VAR_4);
        return ((void*)0);
    }

    return VAR_4;
}

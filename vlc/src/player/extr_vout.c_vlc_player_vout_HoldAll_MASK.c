
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_3__ {int resource; } ;
typedef TYPE_1__ vlc_player_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ***,size_t*) ;
 int ** FUNC_2 (int,int) ;

vout_thread_t **
FUNC_3(vlc_player_t *VAR_0, size_t *VAR_1)
{
    vout_thread_t **VAR_2;
    FUNC_1(VAR_0->resource, &VAR_2, VAR_1);

    if (*VAR_1 == 0)
    {
        VAR_2 = FUNC_2(1, sizeof(*VAR_2));
        if (VAR_2)
        {
            *VAR_1 = 1;
            VAR_2[0] = FUNC_0(VAR_0->resource);
        }
    }
    return VAR_2;
}

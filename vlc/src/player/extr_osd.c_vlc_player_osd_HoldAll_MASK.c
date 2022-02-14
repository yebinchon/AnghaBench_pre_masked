
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_3__ {int resource; } ;
typedef TYPE_1__ vlc_player_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ***,size_t*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static vout_thread_t **
FUNC_2(vlc_player_t *VAR_2, size_t *VAR_3)
{
    vout_thread_t **VAR_4;
    FUNC_0(VAR_2->resource, &VAR_4, VAR_3);

    for (size_t VAR_5 = 0; VAR_5 < *VAR_3; ++VAR_5)
    {
        FUNC_1(VAR_4[VAR_5], VAR_0);
        FUNC_1(VAR_4[VAR_5], VAR_1);
        FUNC_1(VAR_4[VAR_5], VAR_1);
    }
    return VAR_4;
}

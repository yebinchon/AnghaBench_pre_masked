
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int idgen; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int uint64_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int * const,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(vlc_playlist_t *VAR_2, input_item_t *const VAR_3[],
                          size_t VAR_4, vlc_playlist_item_t *VAR_5[])
{
    FUNC_1(VAR_2);
    size_t VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
    {
        uint64_t VAR_7 = VAR_2->idgen++;
        VAR_5[VAR_6] = FUNC_2(VAR_3[VAR_6], VAR_7);
        if (FUNC_0(!VAR_5[VAR_6]))
            break;
    }
    if (VAR_6 < VAR_4)
    {

        while (VAR_6)
            FUNC_3(VAR_5[--VAR_6]);
        return VAR_0;
    }
    return VAR_1;
}

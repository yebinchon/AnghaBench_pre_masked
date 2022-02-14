
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int ** FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static vout_thread_t *FUNC_4 (libvlc_media_player_t *VAR_0, size_t VAR_1)
{
    vout_thread_t *VAR_2 = ((void*)0);
    size_t VAR_3;
    vout_thread_t **VAR_4 = FUNC_0 (VAR_0, &VAR_3);
    if (VAR_4 == ((void*)0))
        goto err;

    if (VAR_1 < VAR_3)
        VAR_2 = VAR_4[VAR_1];

    for (size_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        if (VAR_5 != VAR_1)
            FUNC_3(VAR_4[VAR_5]);
    FUNC_1 (VAR_4);

    if (VAR_2 == ((void*)0))
err:
        FUNC_2 ("Video output not active");
    return VAR_2;
}

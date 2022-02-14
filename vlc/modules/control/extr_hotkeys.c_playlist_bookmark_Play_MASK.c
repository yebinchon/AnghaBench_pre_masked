
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int intf_thread_t ;
typedef int input_item_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int *,char*) ;
 size_t FUNC_4 (int *) ;
 int * FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,size_t) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static inline void
FUNC_8(intf_thread_t *VAR_0,
                       vlc_playlist_t *VAR_1, char *VAR_2)
{
    char *VAR_3 = FUNC_3(VAR_0, VAR_2);
    size_t VAR_4 = FUNC_4(VAR_1);
    size_t VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
        vlc_playlist_item_t *VAR_6 = FUNC_5(VAR_1, VAR_5);
        input_item_t *VAR_7 = FUNC_7(VAR_6);
        char *VAR_8 = FUNC_1(VAR_7);
        if (!FUNC_2(VAR_3, VAR_8))
            break;
        FUNC_0(VAR_8);
    }
    if (VAR_5 != VAR_4)
        FUNC_6(VAR_1, VAR_5);
    FUNC_0(VAR_3);
}

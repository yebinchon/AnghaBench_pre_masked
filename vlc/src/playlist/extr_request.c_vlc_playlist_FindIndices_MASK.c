
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct size_vector {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int * const,int) ;
 int FUNC_3 (struct size_vector*,int) ;

__attribute__((used)) static void
FUNC_4(vlc_playlist_t *VAR_0,
                         vlc_playlist_item_t *const VAR_1[], size_t VAR_2,
                         ssize_t VAR_3, struct size_vector *VAR_4)
{
    for (size_t VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
    {
        ssize_t VAR_6 = FUNC_2(VAR_0, VAR_1[VAR_5],
                                                        VAR_3);
        if (VAR_6 != -1)
        {
            int VAR_7 = FUNC_3(VAR_4, VAR_6);
            FUNC_1(VAR_7);
            FUNC_0(VAR_7);

            VAR_3 = VAR_6 + 1;
        }
    }
}

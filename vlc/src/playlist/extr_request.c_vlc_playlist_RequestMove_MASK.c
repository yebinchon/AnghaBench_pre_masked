
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct size_vector {size_t size; int data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct size_vector VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,int * const*,size_t,int ,struct size_vector*) ;
 int FUNC_4 (int *,int ,size_t,size_t) ;
 int FUNC_5 (struct size_vector*) ;
 int FUNC_6 (struct size_vector*,size_t) ;

int
FUNC_7(vlc_playlist_t *VAR_3,
                         vlc_playlist_item_t *const VAR_4[], size_t VAR_5,
                         size_t VAR_6, ssize_t VAR_7)
{
    FUNC_1(VAR_3);

    struct size_vector VAR_8 = VAR_2;
    if (!FUNC_6(&VAR_8, VAR_5))
        return VAR_0;

    FUNC_3(VAR_3, VAR_4, VAR_5, VAR_7, &VAR_8);

    size_t VAR_9 = VAR_8.size;
    if (VAR_9)
    {
        size_t VAR_10 = FUNC_2(VAR_3);
        FUNC_0(VAR_10 >= VAR_9);

        if (VAR_6 + VAR_9 > VAR_10)
            VAR_6 = VAR_10 - VAR_9;


        FUNC_4(VAR_3, VAR_8.data, VAR_8.size, VAR_6);
    }

    FUNC_5(&VAR_8);
    return VAR_1;
}

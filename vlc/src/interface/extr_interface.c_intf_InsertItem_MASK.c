
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int libvlc_int_t ;
typedef int input_item_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned int,char const* const*,unsigned int) ;
 int * FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(libvlc_int_t *VAR_1, const char *VAR_2, unsigned VAR_3,
                    const char *const *VAR_4, unsigned VAR_5)
{
    input_item_t *VAR_6 = FUNC_1(VAR_2, ((void*)0));

    if (FUNC_4(VAR_6 == ((void*)0)))
        return -1;

    int VAR_7 = -1;

    if (FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5) == VAR_0)
    {
        vlc_playlist_t *VAR_8 = FUNC_3(VAR_1);
        if (VAR_8)
        {
            FUNC_6(VAR_8);
            VAR_7 = FUNC_5(VAR_8, 0, VAR_6);
            FUNC_7(VAR_8);
        }
    }
    FUNC_2(VAR_6);
    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
typedef int vlc_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *,char*,char*,char const* const*,char**) ;
 int * FUNC_4 (int ,int *,char const* const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int **) ;

__attribute__((used)) static vlc_tls_t *FUNC_7(vlc_thread_t *VAR_5,
                             const char *const VAR_6[],
                             const char *const VAR_7[],
                             char **restrict VAR_8)
{
    vlc_tls_t *VAR_9[2];
    vlc_tls_t *VAR_10, *VAR_11;
    int VAR_12;

    VAR_12 = FUNC_6(VAR_0, 0, VAR_9);
    FUNC_0(VAR_12 == 0);

    VAR_10 = FUNC_4(VAR_3, VAR_9[0], VAR_6);
    FUNC_0(VAR_10 != ((void*)0));

    VAR_12 = FUNC_1(VAR_5, VAR_4, VAR_10, VAR_1);
    FUNC_0(VAR_12 == 0);

    VAR_11 = FUNC_3(VAR_2, VAR_9[1],
                                         "localhost", "vlc-tls-test",
                                         VAR_7, VAR_8);
    if (VAR_11 == ((void*)0))
    {
        FUNC_5(VAR_9[1]);
        FUNC_2(*VAR_5, ((void*)0));
        return ((void*)0);
    }
    return VAR_11;
}

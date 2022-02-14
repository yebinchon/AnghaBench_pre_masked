
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct access_sys {int encoded_url; } ;
struct TYPE_3__ {struct access_sys* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct vlc_readdir_helper*,char*,int *,char const*,int,int ) ;
 char* FUNC_2 (int *,char*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(stream_t *VAR_2, struct vlc_readdir_helper *VAR_3,
                   const char *VAR_4, int VAR_5)
{
    struct access_sys *VAR_6 = VAR_2->p_sys;
    char *VAR_7 = FUNC_3(VAR_4);
    if (VAR_7 == ((void*)0))
        return VAR_1;

    char *VAR_8 = FUNC_2(&VAR_6->encoded_url, VAR_7);
    FUNC_0(VAR_7);
    if (VAR_8 == ((void*)0))
        return VAR_1;

    int VAR_9 = FUNC_1(VAR_3, VAR_8, ((void*)0), VAR_4, VAR_5,
                                         VAR_0);
    FUNC_0(VAR_8);
    return VAR_9;
}

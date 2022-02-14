
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * psz_url; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;


 int FUNC_0 (int*,int const*,int,char const*) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int const**,int) ;

__attribute__((used)) static bool FUNC_3(stream_t *VAR_0)
{
    if (VAR_0->psz_url == ((void*)0))
        return 0;

    char *VAR_1 = FUNC_1(VAR_0->psz_url, ".svg");
    if (!VAR_1) return 0;

    const uint8_t *VAR_2;
    ssize_t VAR_3 = FUNC_2(VAR_0, &VAR_2, 4096);
    if (VAR_3 == -1)
        return 0;
    int VAR_4 = 0;

    const char VAR_5[] = "<?xml version=\"";
    if (!FUNC_0(&VAR_4, VAR_2, VAR_3, VAR_5))
        return 0;
    if (VAR_4 != 0)
        return 0;

    const char VAR_6[] = ">\0";
    if (!FUNC_0(&VAR_4, VAR_2, VAR_3, VAR_6))
        return 0;
    if (VAR_4 <= 15)
        return 0;

    const char VAR_7[] = "<svg";
    if (!FUNC_0(&VAR_4, VAR_2, VAR_3, VAR_7))
        return 0;
    if (VAR_4 < 19)
        return 0;





    return 1;
}

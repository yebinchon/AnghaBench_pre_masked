
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int stream_t ;
typedef int remote_name ;
typedef int net_resource ;
struct TYPE_4__ {int * lpRemoteName; int dwType; } ;
typedef TYPE_1__ NETRESOURCE ;




 int VAR_0 ;

 int VAR_1 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,char const*,char*) ;
 int FUNC_5 (char*,int,char*,char const*,char const*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static void FUNC_7(stream_t *VAR_2, const char *VAR_3,
                               const char *VAR_4, const char *VAR_5,
                               const char *VAR_6)
{
    NETRESOURCE VAR_7;
    char VAR_8[VAR_0];

    FUNC_3(&VAR_7, 0, sizeof (VAR_7));
    VAR_7.dwType = VAR_1;

    FUNC_5(VAR_8, sizeof (VAR_8), "\\\\%s\\%s", VAR_3,
             (VAR_4 != ((void*)0)) ? VAR_4 + 1 : "");


    char *VAR_9 = FUNC_6(VAR_8, '/');
    if (VAR_9 != ((void*)0))
        *VAR_9 = '\0';

    const char *VAR_10;
    VAR_7.lpRemoteName = FUNC_0(VAR_8);

    wchar_t *VAR_11 = VAR_6 ? FUNC_0(VAR_6) : ((void*)0);
    wchar_t *VAR_12 = VAR_5 ? FUNC_0(VAR_5) : ((void*)0);

    switch (FUNC_1(&VAR_7, VAR_11, VAR_12, 0))
    {
        case 128:
            VAR_10 = "connected to %s";
            break;
        case 130:
        case 129:
            VAR_10 = "already connected to %s";
            break;
        default:
            VAR_10 = "failed to connect to %s";
    }
    FUNC_2(VAR_7.lpRemoteName);
    FUNC_2(VAR_11);
    FUNC_2(VAR_12);
    FUNC_4(VAR_2, VAR_10, VAR_8);
}

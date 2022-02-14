
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_thread_t ;
struct vlc_gai_req {char const* name; char* service; int error; struct addrinfo* result; int done; struct addrinfo const* hints; } ;
struct addrinfo {int dummy; } ;
typedef int portbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,char*,unsigned int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,struct vlc_gai_req*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(const char *VAR_4, unsigned VAR_5,
                         const struct addrinfo *VAR_6,
                         struct addrinfo **VAR_7)
{
    struct vlc_gai_req VAR_8 =
    {
        .name = VAR_4,
        .service = ((void*)0),
        .hints = VAR_6,
    };
    char VAR_9[6];
    vlc_thread_t VAR_10;

    if (VAR_5 != 0)
    {
        if ((size_t)FUNC_0(VAR_9, sizeof (VAR_9), "%u",
                             VAR_5) >= sizeof (VAR_9))
            return VAR_0;

        VAR_8.service = VAR_9;
    }

    FUNC_5(&VAR_8.done, 0);

    if (FUNC_2(&VAR_10, VAR_3, &VAR_8, VAR_2))
    {
        FUNC_4(&VAR_8.done);
        return VAR_1;
    }

    FUNC_6(&VAR_8.done);

    FUNC_1(VAR_10);
    FUNC_3(VAR_10, ((void*)0));
    FUNC_4(&VAR_8.done);

    *VAR_7 = VAR_8.result;
    return VAR_8.error;
}

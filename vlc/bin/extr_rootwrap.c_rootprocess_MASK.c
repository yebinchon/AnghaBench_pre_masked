
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct sockaddr_storage*,int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ,int ,int const*,int) ;
 int FUNC_7 (int,int ,int ) ;

__attribute__((used)) static void FUNC_8 (int VAR_11)
{
    union
    {
        struct sockaddr sa;
        struct sockaddr_storage ss;
        struct sockaddr_in sin;

        struct sockaddr_in6 sin6;

    } VAR_12;

    while (FUNC_3 (VAR_11, &VAR_12.ss, sizeof (VAR_12.ss), 0) == sizeof (VAR_12.ss))
    {
        unsigned VAR_13;
        int VAR_14;
        int VAR_15;

        switch (VAR_12.sa.sa_family)
        {
            case 129:
                if (!FUNC_2 (VAR_12.sin.sin_port))
                {
                    if (FUNC_4 (VAR_11, VAR_0))
                        return;
                    continue;
                }
                VAR_13 = sizeof (struct sockaddr_in);
                VAR_15 = VAR_5;
                break;


            case 128:
                if (!FUNC_2 (VAR_12.sin6.sin6_port))
                {
                    if (FUNC_4 (VAR_11, VAR_0))
                        return;
                    continue;
                }
                VAR_13 = sizeof (struct sockaddr_in6);
                VAR_15 = VAR_6;
                break;


            default:
                if (FUNC_4 (VAR_11, VAR_1))
                    return;
                continue;
        }

        VAR_14 = FUNC_7 (VAR_15, VAR_7, VAR_3);
        if (VAR_14 != -1)
        {
            const int VAR_16 = 1;

            FUNC_6 (VAR_14, VAR_8, VAR_9, &VAR_16, sizeof (VAR_16));

            if (VAR_12.sa.sa_family == 128)
                FUNC_6 (VAR_14, VAR_2, VAR_4, &VAR_16, sizeof (VAR_16));

            if (FUNC_0 (VAR_14, &VAR_12.sa, VAR_13) == 0)
            {
                FUNC_5 (VAR_11, VAR_14);
                FUNC_1 (VAR_14);
                continue;
            }
            FUNC_1 (VAR_14);
        }
        FUNC_4 (VAR_11, VAR_10);
    }
}

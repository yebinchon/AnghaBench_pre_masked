
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef scalar_t__ socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,unsigned int,...) ;

int
FUNC_3 (const struct sockaddr *VAR_8, socklen_t VAR_9,
                 char *VAR_10, int VAR_11, char *VAR_12, int VAR_13, int VAR_14)
{
    if (((size_t)VAR_9 < sizeof (struct sockaddr_in))
     || (VAR_8->sa_family != VAR_0))
        return VAR_2;
    else if (VAR_14 & (~VAR_7))
        return VAR_1;
    else
    {
        const struct sockaddr_in *VAR_15;

        VAR_15 = (const struct sockaddr_in *)VAR_8;

        if (VAR_10 != ((void*)0))
        {

            if (!(VAR_14 & VAR_6))
            {
                if (VAR_14 & VAR_5)
                    return VAR_3;
            }


            uint32_t VAR_16 = FUNC_0 (VAR_15->sin_addr.s_addr);

            if (FUNC_2 (VAR_10, VAR_11, "%u.%u.%u.%u", VAR_16 >> 24,
                          (VAR_16 >> 16) & 0xff, (VAR_16 >> 8) & 0xff,
                          VAR_16 & 0xff) >= (int)VAR_11)
                return VAR_4;
        }

        if (VAR_12 != ((void*)0))
        {
            if (FUNC_2 (VAR_12, VAR_13, "%u",
                          (unsigned int)FUNC_1 (VAR_15->sin_port)) >= (int)VAR_13)
                return VAR_4;
        }
    }
    return 0;
}

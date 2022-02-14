
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void sd_bus_message ;
typedef int sd_bus_error ;
typedef void sd_bus ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {int sin6_addr; } ;
struct TYPE_6__ {int sin_addr; } ;
struct TYPE_9__ {TYPE_3__ sa; TYPE_2__ in6; TYPE_1__ in; } ;
struct TYPE_10__ {TYPE_4__ sockaddr; } ;
typedef TYPE_5__ ServerAddress ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,char*,scalar_t__,...) ;
 int FUNC_4 (void*,char,void*,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,char,char*) ;

__attribute__((used)) static int FUNC_7(
                sd_bus *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                const char *VAR_6,
                sd_bus_message *VAR_7,
                void *VAR_8,
                sd_bus_error *VAR_9) {

        ServerAddress *VAR_10;
        int VAR_11;

        FUNC_2(VAR_3);
        FUNC_2(VAR_7);
        FUNC_2(VAR_8);

        VAR_10 = *(ServerAddress **) VAR_8;

        if (!VAR_10)
                return FUNC_3(VAR_7, "(iay)", VAR_2, 0);

        FUNC_2(FUNC_1(VAR_10->sockaddr.sa.sa_family, VAR_0, VAR_1));

        VAR_11 = FUNC_6(VAR_7, 'r', "iay");
        if (VAR_11 < 0)
                return VAR_11;

        VAR_11 = FUNC_3(VAR_7, "i", VAR_10->sockaddr.sa.sa_family);
        if (VAR_11 < 0)
                return VAR_11;

        VAR_11 = FUNC_4(VAR_7, 'y',
                                        VAR_10->sockaddr.sa.sa_family == VAR_0 ? (void*) &VAR_10->sockaddr.in.sin_addr : (void*) &VAR_10->sockaddr.in6.sin6_addr,
                                        FUNC_0(VAR_10->sockaddr.sa.sa_family));
        if (VAR_11 < 0)
                return VAR_11;

        return FUNC_5(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
struct sockaddr_in {int sin_port; int sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int string ;
typedef int sock_t ;
typedef int buffer ;
struct TYPE_4__ {int in_addr; } ;
struct TYPE_5__ {TYPE_1__ ip4; void* family; int member_0; } ;
typedef TYPE_2__ IP ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (char*,char*,int,char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,...) ;
 char FUNC_7 () ;
 int FUNC_8 (int ,char*,int,int ) ;
 scalar_t__ FUNC_9 (int ,char*,scalar_t__,int ,struct sockaddr*,size_t) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (void*,int ,int ) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (void*,char*,char*,int,scalar_t__) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (void*,char*,int,scalar_t__*,char*,int) ;

int FUNC_16(int VAR_4, char *VAR_5[])
{
    if (VAR_4 < 4) {
        FUNC_6("Usage: %s domain domain_public_key queried_username\nEX: %s utox.org D3154F65D28A5B41A05D4AC7E4B39C6B1C233CC857FB365C56E8392737462A12 username\n",
               VAR_5[0], VAR_5[0]);
        FUNC_2(0);
    }

    IP VAR_6 = {0};
    VAR_6.family = VAR_0;
    sock_t VAR_7 = FUNC_11(VAR_6.family, VAR_2, VAR_1);

    if (!FUNC_10(VAR_7))
        return -1;

    if (!FUNC_0(VAR_5[1], &VAR_6, 0))
        return -1;

    struct sockaddr_in VAR_8;
    size_t VAR_9 = sizeof(struct sockaddr_in);
    VAR_8.sin_family = VAR_0;
    VAR_8.sin_addr = VAR_6.ip4.in_addr;
    VAR_8.sin_port = FUNC_4(53);

    uint8_t VAR_10[1024] = {0};
    void *VAR_11 = FUNC_14(FUNC_3(VAR_5[2]));
    unsigned int VAR_12;
    uint32_t VAR_13;





    int VAR_14 = FUNC_15(VAR_11, VAR_10 + 1, sizeof(VAR_10) - 1, &VAR_13, (uint8_t *)VAR_5[3], FUNC_12(VAR_5[3]));

    if (VAR_14 == -1)
        return -1;

    VAR_10[0] = '_';
    FUNC_5(VAR_10 + VAR_14 + 1, "._tox.", sizeof("._tox."));
    FUNC_5((char *)(VAR_10 + VAR_14 + 1 + sizeof("._tox.") - 1), VAR_5[1], FUNC_12(VAR_5[1]));
    uint8_t VAR_15[512];
    uint8_t VAR_16 = FUNC_7();
    uint32_t VAR_17 = FUNC_1(VAR_15, VAR_10, FUNC_12((char *)VAR_10), VAR_16);

    if (FUNC_9(VAR_7, (char *) VAR_15, VAR_17, 0, (struct sockaddr *)&VAR_8, VAR_9) != VAR_17)
        return -1;

    uint8_t VAR_18[512] = {};
    int VAR_19 = FUNC_8(VAR_7, VAR_18, sizeof(VAR_18), 0);

    if (VAR_19 < (int)VAR_17)
        return -1;

    for (VAR_12 = VAR_19 - 1; VAR_12 != 0 && VAR_18[VAR_12] != '='; --VAR_12);

    uint8_t VAR_20[VAR_3];

    if (FUNC_13(VAR_11, VAR_20, VAR_18 + VAR_12 + 1, VAR_19 - (VAR_12 + 1), VAR_13) != 0)
        return -1;

    FUNC_6("The Tox id for username %s is:\n", VAR_5[3]);


    for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12) {
        FUNC_6("%02hhX", VAR_20[VAR_12]);
    }

    FUNC_6("\n");
    return 0;
}

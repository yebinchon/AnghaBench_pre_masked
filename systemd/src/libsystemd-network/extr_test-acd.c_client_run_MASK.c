
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct ether_addr {int dummy; } ;
typedef int sd_ipv4acd ;
typedef int sd_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int **) ;
 scalar_t__ FUNC_5 (int *,struct in_addr const*) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,struct ether_addr const*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(int VAR_2, const struct in_addr *VAR_3, const struct ether_addr *VAR_4, sd_event *VAR_5) {
        sd_ipv4acd *VAR_6;

        FUNC_0(FUNC_4(&VAR_6) >= 0);
        FUNC_0(FUNC_3(VAR_6, VAR_5, 0) >= 0);

        FUNC_0(FUNC_7(VAR_6, VAR_2) >= 0);
        FUNC_0(FUNC_8(VAR_6, VAR_4) >= 0);
        FUNC_0(FUNC_5(VAR_6, VAR_3) >= 0);
        FUNC_0(FUNC_6(VAR_6, VAR_1, ((void*)0)) >= 0);

        FUNC_1("starting IPv4ACD client");

        FUNC_0(FUNC_9(VAR_6) >= 0);

        FUNC_0(FUNC_2(VAR_5) >= 0);

        FUNC_0(!FUNC_10(VAR_6));

        return VAR_0;
}

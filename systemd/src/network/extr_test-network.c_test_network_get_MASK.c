
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;
typedef int sd_device ;
typedef int Network ;
typedef int Manager ;


 int VAR_0 ;
 struct ether_addr VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,char*,struct ether_addr const*,int ,int *,int *,int **) ;

__attribute__((used)) static void FUNC_2(Manager *VAR_2, sd_device *VAR_3) {
        Network *VAR_4;
        const struct ether_addr VAR_5 = VAR_1;



        FUNC_0(FUNC_1(VAR_2, VAR_3, "lo", &VAR_5, 0, ((void*)0), ((void*)0), &VAR_4) == -VAR_0);
        FUNC_0(!VAR_4);
}

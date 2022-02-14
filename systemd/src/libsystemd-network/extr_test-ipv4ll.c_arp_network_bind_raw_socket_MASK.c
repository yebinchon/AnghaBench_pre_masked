
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;
typedef int be32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int*) ;
 int* VAR_5 ;

int FUNC_1(int VAR_6, be32_t VAR_7, const struct ether_addr *VAR_8) {
        if (FUNC_0(VAR_0, VAR_2 | VAR_1 | VAR_3, 0, VAR_5) < 0)
                return -VAR_4;

        return VAR_5[0];
}

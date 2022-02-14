
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct addrinfo *VAR_0, struct addrinfo *VAR_1) {
    *VAR_1 = *VAR_0;
    VAR_1->ai_addr = FUNC_1(VAR_0->ai_addrlen);
    FUNC_0(VAR_1->ai_addr, VAR_0->ai_addr, VAR_0->ai_addrlen);
}

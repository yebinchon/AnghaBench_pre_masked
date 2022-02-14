
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int testing_pingedid; scalar_t__ testing_timestamp; int testing_requests; int send_nodes_pingedid; scalar_t__ send_nodes_timestamp; int send_nodes_ok; int routes_requests_pingedid; scalar_t__ routes_requests_timestamp; int routes_requests_ok; } ;
typedef TYPE_1__ Hardening ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(Hardening *VAR_0)
{
    FUNC_1("Hardening:\n");
    FUNC_1("routes_requests_ok: %hhu\n", VAR_0->routes_requests_ok);
    FUNC_1("routes_requests_timestamp: %llu\n", (long long unsigned int)VAR_0->routes_requests_timestamp);
    FUNC_1("routes_requests_pingedid: ");
    FUNC_0(VAR_0->routes_requests_pingedid);
    FUNC_1("\nsend_nodes_ok: %hhu\n", VAR_0->send_nodes_ok);
    FUNC_1("send_nodes_timestamp: %llu\n", (long long unsigned int)VAR_0->send_nodes_timestamp);
    FUNC_1("send_nodes_pingedid: ");
    FUNC_0(VAR_0->send_nodes_pingedid);
    FUNC_1("\ntesting_requests: %hhu\n", VAR_0->testing_requests);
    FUNC_1("testing_timestamp: %llu\n", (long long unsigned int)VAR_0->testing_timestamp);
    FUNC_1("testing_pingedid: ");
    FUNC_0(VAR_0->testing_pingedid);
    FUNC_1("\n\n");
}

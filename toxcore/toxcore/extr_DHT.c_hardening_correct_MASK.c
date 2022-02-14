
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int send_nodes_ok; int testing_requests; scalar_t__ routes_requests_ok; } ;
typedef TYPE_1__ Hardening ;



__attribute__((used)) static uint8_t FUNC_0(const Hardening *VAR_0)
{
    return VAR_0->routes_requests_ok + (VAR_0->send_nodes_ok << 1) + (VAR_0->testing_requests << 2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ server_socket; scalar_t__ event_timer; scalar_t__ resolve_query; } ;
typedef TYPE_1__ Manager ;



__attribute__((used)) static bool FUNC_0(Manager *VAR_0) {


        return VAR_0->server_socket >= 0 || VAR_0->resolve_query || VAR_0->event_timer;
}

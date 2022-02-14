
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct client {int stdout_data; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,struct evbuffer*) ;
 int FUNC_2 (struct client*) ;

void
FUNC_3(struct client *VAR_0, struct evbuffer *VAR_1)
{
 FUNC_1(VAR_0->stdout_data, VAR_1);
 FUNC_0(VAR_0->stdout_data, "\n", 1);
 FUNC_2(VAR_0);
}

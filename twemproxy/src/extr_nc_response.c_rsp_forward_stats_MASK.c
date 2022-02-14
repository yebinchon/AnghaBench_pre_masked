
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct server {int dummy; } ;
struct msg {int request; } ;
struct context {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct context*,struct server*,int ) ;
 int FUNC_2 (struct context*,struct server*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_2, struct server *VAR_3, struct msg *VAR_4, uint32_t VAR_5)
{
    FUNC_0(!VAR_4->request);

    FUNC_1(VAR_2, VAR_3, VAR_1);
    FUNC_2(VAR_2, VAR_3, VAR_0, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(struct zed_conf *VAR_1)
{
 if (!VAR_1)
  FUNC_1("Failed to parse config: %s", FUNC_0(VAR_0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int peer; } ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_2 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(struct client *VAR_3)
{
 const char *VAR_4;

 VAR_4 = FUNC_1(VAR_2, "default-shell");
 if (*VAR_4 == '\0' || FUNC_0(VAR_4))
  VAR_4 = VAR_1;
 FUNC_3(VAR_3->peer, VAR_0, -1, VAR_4, FUNC_4(VAR_4) + 1);

 FUNC_2(VAR_3->peer);
}
